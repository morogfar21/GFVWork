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

/*KILDE: GFV
* øvelse 3
* MSL
*
*/
#include <stdio.h>
#include "project.h"
#include "PIDControl.h"

static char outputBuffer[256];
static float setPoint = 30; // degrees celcius

#define SAMPLES_PER_SECOND 3
static uint16_t sampleWaitTimeInMilliseconds = 1000 / SAMPLES_PER_SECOND;

void handleByteReceived(uint8_t byteReceived);
CY_ISR_PROTO(ISR_UART_rx_handler);

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    isr_uart_rx_StartEx(ISR_UART_rx_handler); //UART interrupt initialiseres
    UART_1_Start(); //UART initialiseres
    PWM_1_Start(); //PWM initialiseres
    
    I2C_Start();
    isr_uart_rx_StartEx(ISR_UART_rx_handler); //UART interrupt initialiseres
    uint8 slaveAddress, status, b1, b2 = 0;
    slaveAddress=0x48;
    float b3 = 0;
    char8 b4;
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    float Kp = 10.0f;
    float Ki = 5.0f/30.0f;
    float Kd = 0.0f;
    float integralMax = 3000; //bemærk meget højt
    float integralMin = -3000;
    
    
    float temp = 0;
    float controlSignal = 0;

    float dt = ((float)sampleWaitTimeInMilliseconds) / 1000; // dt is measured in seconds
    
    PIDControl_init(Kp, Ki, Kd, integralMax, integralMin, dt);
    PIDControl_changeSetPoint(setPoint);

//    UART_1_PutString("Temperature control application started\r\n");

    for(;;)
    {
        /* Place your application code here. */
        status = I2C_MasterSendStart(slaveAddress, 1);
        if (status == I2C_MSTR_NO_ERROR) // hvis status når adressen, går den ind i dette loop.
        {
            b1 = I2C_MasterReadByte(I2C_ACK_DATA); //starter clock, vi vil gerne modtage data.
            b2 = I2C_MasterReadByte(I2C_NAK_DATA); // stopper clock, vi vil ikke modtage mere data.
            
            //b6 = binTwosComplementToSignedDecimal((char8)&b3, 9)/2;
            if (b2 == 128) //hvis den er 7bit lang, så skal der tillægges en halv grad.
            b3 = 0.5;
            else // ellers er det heltals grader.
            b3 = 0.0;
            b3 += b1;
            sprintf(&b4, "%.1f", b3); //formatere bitstrengen til b4, som senere skrives ud.
        }
        
        I2C_MasterSendStop(); // Når der kaldes masterstart, skal masterstop også kaldes.
        I2C_MasterClearReadBuf(); // Sletter data i buffers
        I2C_MasterClearWriteBuf();
        //UART_1_PutString("Temperaturen er: ");
        
        sprintf(&b4,"%d",(int)b3);
        //UART_1_PutString(&b4);
        //UART_1_PutString(" grader celcius \r\n");
        //UART_1_PutString("\r\n");
        
        temp = b3;
        
        float error = setPoint - temp;
        float proportionalPart = 0;
        float integralPart = 0;
        float derivativePart = 0;
        
        controlSignal = PIDControl_doStep(temp, &proportionalPart, &integralPart, &derivativePart);            
        PWM_1_WriteCompare(controlSignal);
        snprintf(outputBuffer, sizeof(outputBuffer), "%f, %f, %f, %f, %f, %f, %f, %f, %f, %f \r\n", 
                                                      setPoint, temp, error, controlSignal, Kp, Ki, Kd, 
                                                      proportionalPart, integralPart, derivativePart);
        UART_1_PutString(outputBuffer); //måling skrives ud i terminal

        CyDelay(sampleWaitTimeInMilliseconds); //delay. Tidsbredden for sample
        
    }
}

void handleByteReceived(uint8_t byteReceived)
{
    int number=0;
    if(byteReceived>='0' && byteReceived<='9') {
    number = (byteReceived-48)*10; //setpointværdien bliver til indtastet ciffer gange 10
    }
    setPoint = number;
    PIDControl_changeSetPoint(number); //setPoint sættes
    
}

CY_ISR(ISR_UART_rx_handler)
{
    uint8_t bytesToRead = UART_1_GetRxBufferSize();
    while (bytesToRead > 0)
    {
        uint8_t byteReceived = UART_1_ReadRxData();
        //UART_1_WriteTxData(byteReceived); // echo back
        
        handleByteReceived(byteReceived);
        bytesToRead--;
    }
}

/* [] END OF FILE */
