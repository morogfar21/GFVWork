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
void oneRotation();
void stop(void);
static int speed = 1;
static int state = 0;
void wave(void);
void fullstep(void);
void halfstep(void);
void change(void);
/*typedef enum
{
    _0grader,
	_45grader,
    _90grader,
    _135grader,
    _180grader,
    _225grader,
    _270grader,
    _315grader
} POSITION;*/

//stats for retning
typedef enum
{
	FORWARD,
	BACKWARD
} DIRECTION;

//states for mode
typedef enum
{
	WAVE,
	FULL,
    HALF
} MODE;

static int counter = 0; //counter til rotationsfunktion
//static POSITION position = _0grader;
static DIRECTION direction = FORWARD;
static MODE mode = WAVE;
static int turnOn = 1; //flag for stop funktion
static int rotate = 0; //flag for roationsfunktion

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    isr_uart_rx_StartEx(ISR_UART_rx_handler);
    isr_timer_StartEx(isr_timer_handler);
    
    UART_1_Start();
    PWM_1_Start();
    Timer_1_Start();
    
    //Forskellige indstillinger vises på terminalen
    UART_1_PutString("DC-Motor-PWM application started\r\n");
    UART_1_PutString("0: Stop\r\n");
    UART_1_PutString("1: Drive forwards\r\n");
    UART_1_PutString("2: Drive backwards\r\n");
    UART_1_PutString("q: Decrease speed\r\n");
    UART_1_PutString("w: Increase speed\r\n");
    
    UART_1_PutString("6: Wave\r\n");
    UART_1_PutString("7: fullstep\r\n");
    UART_1_PutString("8: halfstep\r\n");
    
    UART_1_PutString("r: Rotate once\r\n");

    for(;;)
    {
        if(rotate) {
         counter++;
        //hvis der skal roteres, skal denne forløkke køres 2000 gange. Herefter stop
        if(counter>2000) {
        turnOn=0;
        }
        }
        if(turnOn) {
        
            //den valgte mode tjekkes
        switch (mode) {
        case WAVE:
        {
            //den valgte retning tjekkes
            switch(direction) {
   
             case FORWARD:
                {
                    state++;
                    if(state>=4) {
                    state=0;
                    }
                }
            break;
             case BACKWARD:
                {
                    state--;
                    if(state<0) {
                    state=3;
                    }
                }
            break;
             default:
                {
                    //nothing
                }
            break;
                
            }
            
            
            
            change();
            CyDelay(speed);
        }
        break;
        
        case FULL:
        {
            //den valgte retning tjekkes
            switch(direction) {
             case FORWARD:
                {
                    state++;
                    
                    if(state>=4) {
                    state=0;
                    }
                }
            break;
             case BACKWARD:
                {
                    state--;
                    if(state<0) {
                    state=3;
                    }
                }
            break;
             default:
                {
                    //nothing
                }
            break;
                
            }
           
            change();
            CyDelay(speed);
        }
        break;
        
        case HALF:
        {
            //den valgte retning tjekkes
            switch(direction) {
             case FORWARD:
                {
                    state++;
                    
                    if(state>=8) {
                    state=0;
                    }
                }
            break;
             case BACKWARD:
                {
                    state--;
                    if(state<0) {
                    state=7;
                    }
                }
            break;
             default:
                {
                    //nothing
                }
            break;
                
            }
            
            change();
        }
        break;
        
        default:
        {
            //nothing
        }
        break;
    }
    //if(state>=8) {
    //state=0;
    //}
        
        CyDelay(speed);
        
        }
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

//når der skrives et tegn til terminalen bliver en funktion kaldt
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
        case 'r' :
        {
            oneRotation();
            
        }
        break;
        default :
        {
            // nothing
        }
        break;
    }
}
//change sørger for at skifte step afhængig af mode
void change(void) {
    //der tjekkes for hvilken mode er valgt og steps'ene er vist i switch casene
    if(mode==HALF) {
    //tjekker hvilket step, der skal aktiveres
    switch(state) {
      case 0:
        {
            Pin_1A_Write(1);
            Pin_2A_Write(0);
            Pin_1B_Write(0);
            Pin_2B_Write(0);
        }
        break;
      case 1:
        {
            Pin_1A_Write(1);
            Pin_2A_Write(1);
            Pin_1B_Write(0);
            Pin_2B_Write(0);
        }
      break;
      case 2:
        {
            Pin_1A_Write(0);
            Pin_2A_Write(1);
            Pin_1B_Write(0);
            Pin_2B_Write(0);
        }
        break;
      case 3:
        {
            Pin_1A_Write(0);
            Pin_2A_Write(1);
            Pin_1B_Write(1);
            Pin_2B_Write(0);
        }
        break;
      case 4:
        {
            Pin_1A_Write(0);
            Pin_2A_Write(0);
            Pin_1B_Write(1);
            Pin_2B_Write(0);
        }
        break;
      case 5:
        {
            Pin_1A_Write(0);
            Pin_2A_Write(0);
            Pin_1B_Write(1);
            Pin_2B_Write(1);
        }
        break;
      case 6:
        {
            Pin_1A_Write(0);
            Pin_2A_Write(0);
            Pin_1B_Write(0);
            Pin_2B_Write(1);
        }
        break;
      case 7:
        {
            Pin_1A_Write(1);
            Pin_2A_Write(0);
            Pin_1B_Write(0);
            Pin_2B_Write(1);
        }
        break;
      default:
        {
            //nothing
        }
        break;
        
    }
    }
    
    if(mode==WAVE) {
    //tjekker hvilket step, der skal aktiveres
    switch(state) {
        case 0:
        {
            Pin_1A_Write(1);
    Pin_2A_Write(0);
    Pin_1B_Write(0);
    Pin_2B_Write(0);
        }
        break;
        case 1:
        {
            Pin_2A_Write(1);
            Pin_1A_Write(0);
    Pin_1B_Write(0);
    Pin_2B_Write(0);
        }
        break;
        case 2:
        {
            Pin_1B_Write(1);
            Pin_1A_Write(0);
    Pin_2A_Write(0);
    Pin_2B_Write(0);
        }
        break;
        case 3:
        {
            Pin_2B_Write(1);
            Pin_1A_Write(0);
    Pin_2A_Write(0);
    Pin_1B_Write(0);
        }
        break;
        default :
        {
            // nothing
        }
        break;
    }
    }
    
    if(mode==FULL) {
    //tjekker hvilket step, der skal aktiveres    
    switch(state) {
        case 0:
        {
            Pin_1A_Write(1);
    Pin_2A_Write(1);
    Pin_1B_Write(0);
    Pin_2B_Write(0);
        }
        break;
        case 1:
        {
            Pin_2A_Write(1);
            Pin_1A_Write(0);
    Pin_1B_Write(1);
    Pin_2B_Write(0);
        }
        break;
        case 2:
        {
            Pin_1B_Write(1);
            Pin_1A_Write(0);
    Pin_2A_Write(0);
    Pin_2B_Write(1);
        }
        break;
        case 3:
        {
            Pin_2B_Write(1);
            Pin_1A_Write(1);
    Pin_2A_Write(0);
    Pin_1B_Write(0);
        }
        break;
        default :
        {
            // nothing
        }
        break;
    }
    }
}
void decreaseSpeed()
{
    UART_1_PutString("Increasing speed\r\n");
    //delay bliver længere ved decrease af speed
    //der er en grænse ved 20, da motoren ikke vil køre længere ved så stor delay
    if(speed<20) {
    speed+=1;
    }
    
    
}

void increaseSpeed()
{
    UART_1_PutString("Decreasing speed\r\n");
    //delay bliver kortere ved increase af speed
    if(speed>1) {
    speed-=1;
    }
}

void driveForwards()
{
    UART_1_PutString("Set direction: forwards\r\n");
    //retning sættes til FORWARD
    direction = FORWARD;
    
}

void driveBackwards()
{
    UART_1_PutString("Set direction: backwards\r\n");
    //retning sættes til BACKWARD
    direction = BACKWARD;
}

void stop()
{
    UART_1_PutString("Stop\r\n");
    //flag for turnOn sættes for stop
    turnOn=0;
}

void oneRotation()
{
    UART_1_PutString("Rotate one time\r\n");
    //counter sættes til 0 og flagene turnOn og rotate sættes
    turnOn=1;
    counter=0;
    rotate=1;
}

void wave(void) {
    UART_1_PutString("Wave\r\n");
    state = 0;
    //mode sættes til wavedrive
    mode = WAVE;
}
void fullstep(void) {
    UART_1_PutString("Fullstep\r\n");
    state=1;
    //mode sættes til fullstep
    mode = FULL;
}
void halfstep(void) {
    UART_1_PutString("Halfstep\r\n");
    state=0;
    //mode sættes til halfstep
    mode = HALF;
}

/* [] END OF FILE */
