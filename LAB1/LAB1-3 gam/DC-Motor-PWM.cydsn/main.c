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
CY_ISR_PROTO(isr_timer_handler);
void handleByteReceived(uint8_t byteReceived);
void decreaseSpeed(void);
void increaseSpeed(void);
void driveForwards(void);
void driveBackwards(void);
void stop(void);
static int speed = 0;
void wave(void);
void fullstep(void);
void halfstep(void);
typedef enum
{
    _0grader,
	_45grader,
    _90grader,
    _135grader,
    _180grader,
    _225grader,
    _270grader,
    _315grader
} POSITION;

typedef enum
{
	FORWARD,
	BACKWARD
} DIRECTION;


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    isr_uart_rx_StartEx(ISR_UART_rx_handler);
    isr_timer_StartEx(isr_timer_handler);
    UART_1_Start();
    PWM_1_Start();
    
    UART_1_PutString("DC-Motor-PWM application started\r\n");
    UART_1_PutString("0: Stop\r\n");
    UART_1_PutString("1: Drive forwards\r\n");
    UART_1_PutString("2: Drive backwards\r\n");
    UART_1_PutString("q: Decrease speed\r\n");
    UART_1_PutString("w: Increase speed\r\n");
    
    UART_1_PutString("6: Wave\r\n");
    UART_1_PutString("7: fullstep\r\n");
    UART_1_PutString("8: halfstep\r\n");

    for(;;)
    {
        /* Place your application code here. */
    }
}

CY_ISR(isr_timer_handler) {
    
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
        
        case '6' :
        {
            wave();
            
        }
        break;
        
        case '7' :
        {
            fullstep();
            
        }
        break;
        
        case '8' :
        {
            halfstep();
            
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
    PWM_1_WriteCompare(speed);
    }
    
}

void increaseSpeed()
{
    UART_1_PutString("Increasing speed\r\n");
    if(speed<10) {
    speed=speed+1;
    PWM_1_WriteCompare(speed);
    }

}

void driveForwards()
{
    UART_1_PutString("Set direction: forwards\r\n");
    Pin_EN_Write(1);
    Pin_LN1_Write(1);
    Pin_LN2_Write(0);
    
}

void driveBackwards()
{
    UART_1_PutString("Set direction: backwards\r\n");
    Pin_EN_Write(1);
    Pin_LN1_Write(0);
    Pin_LN2_Write(1);
}

void stop()
{
    UART_1_PutString("Stop\r\n");
    Pin_EN_Write(1);
    Pin_LN1_Write(1);
    Pin_LN2_Write(1);
}

void wave(void) {
    
}
void fullstep(void) {
    
}
void halfstep(void) {
    
}

/* [] END OF FILE */
