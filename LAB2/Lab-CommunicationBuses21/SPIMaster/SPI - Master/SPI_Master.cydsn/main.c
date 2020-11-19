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

void Turnon(void); //tænd LED
void Turnoff(void); // Sluk LED

uint8 char2 = '0'; //karakter der skal sendes
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    isr_uart_rx_StartEx(ISR_UART_rx_handler); //UART interrupt initialiseres
    UART_1_Start(); //UART initialiseres
    
    

    //static uint8 mTxBuffer[8];
    
    CyGlobalIntEnable;
    
    for(;;)
    {
        SPIM_Start(); //SPI kommunikation startes
        
       
        SPIM_WriteTxData(char2); //karakter skrives til Slave
        while(!SPIM_ReadRxStatus()); //Der ventes til, der er klar
        uint8 data = SPIM_ReadRxData();
        UART_1_PutChar(data); //Den modtaget karakter sendes ud på terminal
        UART_1_PutString("\r\n");
        }
        SPIM_ClearRxBuffer(); //clear buffer, så der er klar til næste transmission
        
        
        /* Place your application code here. */
        
    //}
        
    SPIM_Stop(); //SPI stoppes
    CyDelay(1000);
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
        
        case '1' :
        {
            Turnon(); //tænd LED
        }
        break;
        
        case '0' :
        {
            Turnoff(); //sluk LED
            
        }
        break;
        default :
        {
            // nothing
        }
        break;
    }
}

void Turnon()
{
    UART_1_PutString("Tend\r\n");
    char2 = '1'; //set til tænd
    
}


void Turnoff()
{
    
    UART_1_PutString("Sluk\r\n");
    char2 = '0'; //set til sluk
    
}

/* [] END OF FILE */
