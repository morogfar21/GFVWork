/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

CY_ISR_PROTO(ISR_UART_rx_handler);
void handleByteReceived(uint8_t byteReceived);
void decreaseSpeed(void); //funktion til sænk fart
void increaseSpeed(void); //funktion til forøg fart
void driveForwards(void); //funktion til at køre bagud
void driveBackwards(void); //funktion til at køre frem
void stop(void); //funktion til at stoppe DC motor
void driveRight();
void driveLeft();
static int speed = 0; //global variable til at styre værdi on Compare Match, så duty cycle ændres.
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    isr_uart_rx_StartEx(ISR_UART_rx_handler); //UART interrupt initialiseres
    UART_1_Start(); //UART initialiseres
    PWM_1_Start(); //PWM initialiseres
    
    //beskrivelse til styring af DC motor via terminal
    UART_1_PutString("DC-Motor-PWM application started\r\n");
    UART_1_PutString("0: Stop\r\n");
    UART_1_PutString("1: Drive forwards\r\n");
    UART_1_PutString("2: Drive backwards\r\n");
    UART_1_PutString("q: Decrease speed\r\n");
    UART_1_PutString("w: Increase speed\r\n");
    UART_1_PutString("o: Drive Left\r\n");
    UART_1_PutString("p: Drive Right\r\n");

    for(;;)
    {
        /* Place your application code here. */
    }
}

CY_ISR(ISR_UART_rx_handler)
{
    uint8_t bytesToRead = UART_1_GetRxBufferSize();
    while (bytesToRead > 0)
    {
        uint8_t byteReceived = UART_1_ReadRxData();
        UART_1_WriteTxData(byteReceived); // echo back
        
        handleByteReceived(byteReceived);
        
        bytesToRead--;
    }
}

void handleByteReceived(uint8_t byteReceived)
{
    //Ved at taste disse tegn i terminalen kaldes de respektive metoder
    switch(byteReceived)
    {
        case 'q' :
        {
            decreaseSpeed();
        }
        break;
        case 'w' :
        {
            increaseSpeed();
        }
        break;
        case '1' :
        {
            driveForwards();
        }
        break;
        case '2' :
        {
            driveBackwards();
        }
        break;
        case '0' :
        {
            stop();
            
        }
        break;
        case 'o':
        {
            driveLeft();
        }
        break;
        case 'p':
        {
            driveRight();
        }
        break;
        default :
        {
            // nothing
        }
        break;
    }
}

void decreaseSpeed()
{
    UART_1_PutString("Decreasing speed\r\n");
    if(speed>0) {
    speed=speed-1;
    //toggle on compare match af speed
    PWM_1_WriteCompare(speed);
    }
    
}

void increaseSpeed()
{
    UART_1_PutString("Increasing speed\r\n");
    if(speed<10) {
    speed=speed+1;
    //toggle on compare match af speed
    PWM_1_WriteCompare(speed);
    }

}

void driveForwards()
{
    UART_1_PutString("Set direction: forwards\r\n");
    //EN og IN1 sættes til høj for at køre fremad
    Pin_EN_Write(1);
    Pin_LN1_Write(1);
    Pin_LN2_Write(0);
    Pin_EN2_Write(1);
    Pin_LN3_Write(1);
    Pin_LN4_Write(0);
    
}

void driveLeft()
{
    UART_1_PutString("Set direction: Left\r\n");
    //EN og IN1 sættes til høj for at køre fremad
    Pin_EN_Write(1);
    Pin_LN1_Write(1);
    Pin_LN2_Write(0);
    
    Pin_EN2_Write(0);
    Pin_LN3_Write(0);
    Pin_LN4_Write(0);
    
}

void driveRight()
{
    UART_1_PutString("Set direction: Right\r\n");
    //EN og IN1 sættes til høj for at køre fremad
    Pin_EN_Write(0);
    Pin_LN1_Write(0);
    Pin_LN2_Write(0);
    
    Pin_EN2_Write(1);
    Pin_LN3_Write(1);
    Pin_LN4_Write(0);
    
}

void driveBackwards()
{
    UART_1_PutString("Set direction: backwards\r\n");
    //EN og IN2 sættes til høj for at køre bagud
    Pin_EN_Write(1);
    Pin_LN1_Write(0);
    Pin_LN2_Write(1);
    Pin_EN2_Write(1);
    Pin_LN3_Write(0);
    Pin_LN4_Write(1);
}

void stop()
{
    
    UART_1_PutString("Stop\r\n");
    Pin_EN_Write(1);
    //break mode er sat ved IN1 og IN2 til høj
    Pin_LN1_Write(1);
    Pin_LN2_Write(1);
    Pin_EN2_Write(1);
    Pin_LN3_Write(1);
    Pin_LN4_Write(1);
}

/* [] END OF FILE */
