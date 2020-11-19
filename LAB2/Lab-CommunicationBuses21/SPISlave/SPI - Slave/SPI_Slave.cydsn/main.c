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
        SPIS_Start(); //SPI kommunikation startes
        
        
        
        while(!SPIS_ReadTxStatus());
        
        if(Pin_LN1_Read()) {
            SPIS_WriteTxData('1');   //Hvis der ikke er trykket på Switch sendes '1'  
        } else {
            SPIS_WriteTxData('0');  //Hvis der er trykket på Switch sendes '0'
        }
           
        
        while(!SPIS_ReadRxStatus()); //der tjekkes, om der er klar til at modtage
        uint8 data = SPIS_ReadRxData(); //Char modtages og gemmes i data
        if(data=='1') {
        Pin_EN_Write(1); //hvis modtaget er '1' så tændes LED
        } else {
        Pin_EN_Write(0); // hvis modtaget er andet, så slukkes LED
        }
        UART_1_PutChar(data); //sendes ud, hvis man ville sætte slaven til UART
        UART_1_PutString("\r\n"); //sendes ud, hvis man ville sætte slaven til UART
        }
        SPIS_ClearRxBuffer();
        
        /* Place your application code here. */
        
    
    SPIS_Stop(); //SPI kommunikation sluttes
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
        default :
        {
            // nothing
        }
        break;
    }
}



/* [] END OF FILE */
