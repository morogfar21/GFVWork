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
#include <stdio.h>

CY_ISR_PROTO(ISR_UART_rx_handler);
void handleByteReceived(uint8_t byteReceived);

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    char uartBuffer[256];

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    isr_uart_rx_StartEx(ISR_UART_rx_handler);
    UART_1_Start();
    ADC_SAR_1_Start();
    ADC_SAR_1_StartConvert();
     
    UART_1_PutString("Scale application started\r\n");
    
    for(;;)
    {
        /* Place your application code here. */
        if (ADC_SAR_1_IsEndConversion(ADC_SAR_1_WAIT_FOR_RESULT))
        {
            int result = ADC_SAR_1_GetResult16(); //ADC output findes
            //snprintf(uartBuffer, sizeof(uartBuffer), "%d \r\n", result);
            double gram = (result-2152.6788)/(-0.3752); //konvertering til gram
            if(gram<0) {gram=0;}
            snprintf(uartBuffer, sizeof(uartBuffer), "%lf g \r\n", gram); // printes ud i terminalen
            UART_1_PutString(uartBuffer);
        }
        CyDelay(100);
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
    switch(byteReceived)
    {
        case 'q' :
        {
        }
        break;
        case 'w' :
        {
        }
        break;
        default :
        {
            // nothing
        }
        break;
    }
}

/* [] END OF FILE */
