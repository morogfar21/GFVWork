/* ========================================
 *
 * Copyright Marbech, Marcus Bech, 2019
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "counter.h"
#include <stdio.h>

void counter(uint8 *slaveAddress, int *counter)
{
    int localcount = *counter;
    if(localcount%2) // denne funktion sikrer at når counter tæller op vil modulus altid give resulatet: 1 eller 0.
    {
    *slaveAddress=0x48; //100 1000 A2,A1,A = on
    } 
    else 
    {
    *slaveAddress=0x4F; //100 1111 A2,A1,A = off
    }
    *counter += 1;
}
/* [] END OF FILE */
