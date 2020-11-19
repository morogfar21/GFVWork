/* ========================================
 *
 * Copyright MarBech Code, Marcus Bech, 2019
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include <stdio.h>
#include <math.h>
#include "counter.h"

CY_ISR_PROTO(ISR_UART_rx_handler);

int main(void)
{
    
    static int count = 0; // Count er en fast værdi 0.
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    isr_uart_rx_StartEx(ISR_UART_rx_handler); //UART interrupt initialiseres
    UART_1_Start(); //UART initialiseres
    PWM_1_Start(); //PWM initialiseres
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    I2C_Start();
    isr_uart_rx_StartEx(ISR_UART_rx_handler); //UART interrupt initialiseres
    uint8 slaveAddress, status, b1, b2 = 0;
    float b3 = 0;
    char8 b4;
    
    for(;;)
    {
        //status = MasterSendStart(adress, read);
        counter(&slaveAddress, &count); //initalisere counter funktionen hvor den skifter imellem de to adresser.
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
        UART_1_PutString("Temperaturen er: ");
        UART_1_PutString(&b4);
        UART_1_PutString(" grader celcius \r\n");
        
        CyDelay(1000);
    }
}

CY_ISR(ISR_UART_rx_handler)
{
    uint8_t bytesToRead = UART_1_GetRxBufferSize();
    while (bytesToRead > 0)
    {
        uint8_t byteReceived = UART_1_ReadRxData();
        UART_1_WriteTxData(byteReceived); // echo back
        
        bytesToRead--;
    }
}



/* [] END OF FILE */
