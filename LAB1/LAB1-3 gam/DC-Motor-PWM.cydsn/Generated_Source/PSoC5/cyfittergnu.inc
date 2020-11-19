/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* Rx_1 */
.set Rx_1__0__INTTYPE, CYREG_PICU12_INTTYPE6
.set Rx_1__0__MASK, 0x40
.set Rx_1__0__PC, CYREG_PRT12_PC6
.set Rx_1__0__PORT, 12
.set Rx_1__0__SHIFT, 6
.set Rx_1__AG, CYREG_PRT12_AG
.set Rx_1__BIE, CYREG_PRT12_BIE
.set Rx_1__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Rx_1__BYP, CYREG_PRT12_BYP
.set Rx_1__DM0, CYREG_PRT12_DM0
.set Rx_1__DM1, CYREG_PRT12_DM1
.set Rx_1__DM2, CYREG_PRT12_DM2
.set Rx_1__DR, CYREG_PRT12_DR
.set Rx_1__INP_DIS, CYREG_PRT12_INP_DIS
.set Rx_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Rx_1__MASK, 0x40
.set Rx_1__PORT, 12
.set Rx_1__PRT, CYREG_PRT12_PRT
.set Rx_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Rx_1__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Rx_1__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Rx_1__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Rx_1__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Rx_1__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Rx_1__PS, CYREG_PRT12_PS
.set Rx_1__SHIFT, 6
.set Rx_1__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Rx_1__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Rx_1__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Rx_1__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Rx_1__SLW, CYREG_PRT12_SLW

/* Tx_1 */
.set Tx_1__0__INTTYPE, CYREG_PICU12_INTTYPE7
.set Tx_1__0__MASK, 0x80
.set Tx_1__0__PC, CYREG_PRT12_PC7
.set Tx_1__0__PORT, 12
.set Tx_1__0__SHIFT, 7
.set Tx_1__AG, CYREG_PRT12_AG
.set Tx_1__BIE, CYREG_PRT12_BIE
.set Tx_1__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Tx_1__BYP, CYREG_PRT12_BYP
.set Tx_1__DM0, CYREG_PRT12_DM0
.set Tx_1__DM1, CYREG_PRT12_DM1
.set Tx_1__DM2, CYREG_PRT12_DM2
.set Tx_1__DR, CYREG_PRT12_DR
.set Tx_1__INP_DIS, CYREG_PRT12_INP_DIS
.set Tx_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Tx_1__MASK, 0x80
.set Tx_1__PORT, 12
.set Tx_1__PRT, CYREG_PRT12_PRT
.set Tx_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Tx_1__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Tx_1__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Tx_1__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Tx_1__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Tx_1__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Tx_1__PS, CYREG_PRT12_PS
.set Tx_1__SHIFT, 7
.set Tx_1__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Tx_1__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Tx_1__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Tx_1__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Tx_1__SLW, CYREG_PRT12_SLW

/* PWM_1 */
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB08_09_ACTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB08_09_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB08_09_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB08_09_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB08_09_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG, CYREG_B0_UDB08_09_MSK
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB08_09_MSK
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB08_09_MSK
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB08_09_MSK
.set PWM_1_PWMUDB_genblk1_ctrlreg__7__MASK, 0x80
.set PWM_1_PWMUDB_genblk1_ctrlreg__7__POS, 7
.set PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB08_ACTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_REG, CYREG_B0_UDB08_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG, CYREG_B0_UDB08_ST_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_REG, CYREG_B0_UDB08_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG, CYREG_B0_UDB08_ST_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__MASK, 0x80
.set PWM_1_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB08_MSK_ACTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB08_MSK_ACTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__PERIOD_REG, CYREG_B0_UDB08_MSK
.set PWM_1_PWMUDB_genblk8_stsreg__0__MASK, 0x01
.set PWM_1_PWMUDB_genblk8_stsreg__0__POS, 0
.set PWM_1_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB08_09_ACTL
.set PWM_1_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG, CYREG_B0_UDB08_09_ST
.set PWM_1_PWMUDB_genblk8_stsreg__2__MASK, 0x04
.set PWM_1_PWMUDB_genblk8_stsreg__2__POS, 2
.set PWM_1_PWMUDB_genblk8_stsreg__3__MASK, 0x08
.set PWM_1_PWMUDB_genblk8_stsreg__3__POS, 3
.set PWM_1_PWMUDB_genblk8_stsreg__MASK, 0x0D
.set PWM_1_PWMUDB_genblk8_stsreg__MASK_REG, CYREG_B0_UDB08_MSK
.set PWM_1_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB08_MSK_ACTL
.set PWM_1_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG, CYREG_B0_UDB08_MSK_ACTL
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG, CYREG_B0_UDB08_ACTL
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_CNT_REG, CYREG_B0_UDB08_ST_CTL
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG, CYREG_B0_UDB08_ST_CTL
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_REG, CYREG_B0_UDB08_ST
.set PWM_1_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG, CYREG_B0_UDB08_09_A0
.set PWM_1_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG, CYREG_B0_UDB08_09_A1
.set PWM_1_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG, CYREG_B0_UDB08_09_D0
.set PWM_1_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG, CYREG_B0_UDB08_09_D1
.set PWM_1_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB08_09_ACTL
.set PWM_1_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG, CYREG_B0_UDB08_09_F0
.set PWM_1_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG, CYREG_B0_UDB08_09_F1
.set PWM_1_PWMUDB_sP8_pwmdp_u0__A0_A1_REG, CYREG_B0_UDB08_A0_A1
.set PWM_1_PWMUDB_sP8_pwmdp_u0__A0_REG, CYREG_B0_UDB08_A0
.set PWM_1_PWMUDB_sP8_pwmdp_u0__A1_REG, CYREG_B0_UDB08_A1
.set PWM_1_PWMUDB_sP8_pwmdp_u0__D0_D1_REG, CYREG_B0_UDB08_D0_D1
.set PWM_1_PWMUDB_sP8_pwmdp_u0__D0_REG, CYREG_B0_UDB08_D0
.set PWM_1_PWMUDB_sP8_pwmdp_u0__D1_REG, CYREG_B0_UDB08_D1
.set PWM_1_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG, CYREG_B0_UDB08_ACTL
.set PWM_1_PWMUDB_sP8_pwmdp_u0__F0_F1_REG, CYREG_B0_UDB08_F0_F1
.set PWM_1_PWMUDB_sP8_pwmdp_u0__F0_REG, CYREG_B0_UDB08_F0
.set PWM_1_PWMUDB_sP8_pwmdp_u0__F1_REG, CYREG_B0_UDB08_F1
.set PWM_1_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG, CYREG_B0_UDB08_MSK_ACTL
.set PWM_1_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG, CYREG_B0_UDB08_MSK_ACTL

/* Pin_1A */
.set Pin_1A__0__INTTYPE, CYREG_PICU0_INTTYPE0
.set Pin_1A__0__MASK, 0x01
.set Pin_1A__0__PC, CYREG_PRT0_PC0
.set Pin_1A__0__PORT, 0
.set Pin_1A__0__SHIFT, 0
.set Pin_1A__AG, CYREG_PRT0_AG
.set Pin_1A__AMUX, CYREG_PRT0_AMUX
.set Pin_1A__BIE, CYREG_PRT0_BIE
.set Pin_1A__BIT_MASK, CYREG_PRT0_BIT_MASK
.set Pin_1A__BYP, CYREG_PRT0_BYP
.set Pin_1A__CTL, CYREG_PRT0_CTL
.set Pin_1A__DM0, CYREG_PRT0_DM0
.set Pin_1A__DM1, CYREG_PRT0_DM1
.set Pin_1A__DM2, CYREG_PRT0_DM2
.set Pin_1A__DR, CYREG_PRT0_DR
.set Pin_1A__INP_DIS, CYREG_PRT0_INP_DIS
.set Pin_1A__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set Pin_1A__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set Pin_1A__LCD_EN, CYREG_PRT0_LCD_EN
.set Pin_1A__MASK, 0x01
.set Pin_1A__PORT, 0
.set Pin_1A__PRT, CYREG_PRT0_PRT
.set Pin_1A__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set Pin_1A__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set Pin_1A__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set Pin_1A__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set Pin_1A__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set Pin_1A__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set Pin_1A__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set Pin_1A__PS, CYREG_PRT0_PS
.set Pin_1A__SHIFT, 0
.set Pin_1A__SLW, CYREG_PRT0_SLW

/* Pin_1B */
.set Pin_1B__0__INTTYPE, CYREG_PICU0_INTTYPE1
.set Pin_1B__0__MASK, 0x02
.set Pin_1B__0__PC, CYREG_PRT0_PC1
.set Pin_1B__0__PORT, 0
.set Pin_1B__0__SHIFT, 1
.set Pin_1B__AG, CYREG_PRT0_AG
.set Pin_1B__AMUX, CYREG_PRT0_AMUX
.set Pin_1B__BIE, CYREG_PRT0_BIE
.set Pin_1B__BIT_MASK, CYREG_PRT0_BIT_MASK
.set Pin_1B__BYP, CYREG_PRT0_BYP
.set Pin_1B__CTL, CYREG_PRT0_CTL
.set Pin_1B__DM0, CYREG_PRT0_DM0
.set Pin_1B__DM1, CYREG_PRT0_DM1
.set Pin_1B__DM2, CYREG_PRT0_DM2
.set Pin_1B__DR, CYREG_PRT0_DR
.set Pin_1B__INP_DIS, CYREG_PRT0_INP_DIS
.set Pin_1B__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set Pin_1B__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set Pin_1B__LCD_EN, CYREG_PRT0_LCD_EN
.set Pin_1B__MASK, 0x02
.set Pin_1B__PORT, 0
.set Pin_1B__PRT, CYREG_PRT0_PRT
.set Pin_1B__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set Pin_1B__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set Pin_1B__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set Pin_1B__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set Pin_1B__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set Pin_1B__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set Pin_1B__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set Pin_1B__PS, CYREG_PRT0_PS
.set Pin_1B__SHIFT, 1
.set Pin_1B__SLW, CYREG_PRT0_SLW

/* Pin_2A */
.set Pin_2A__0__INTTYPE, CYREG_PICU0_INTTYPE2
.set Pin_2A__0__MASK, 0x04
.set Pin_2A__0__PC, CYREG_PRT0_PC2
.set Pin_2A__0__PORT, 0
.set Pin_2A__0__SHIFT, 2
.set Pin_2A__AG, CYREG_PRT0_AG
.set Pin_2A__AMUX, CYREG_PRT0_AMUX
.set Pin_2A__BIE, CYREG_PRT0_BIE
.set Pin_2A__BIT_MASK, CYREG_PRT0_BIT_MASK
.set Pin_2A__BYP, CYREG_PRT0_BYP
.set Pin_2A__CTL, CYREG_PRT0_CTL
.set Pin_2A__DM0, CYREG_PRT0_DM0
.set Pin_2A__DM1, CYREG_PRT0_DM1
.set Pin_2A__DM2, CYREG_PRT0_DM2
.set Pin_2A__DR, CYREG_PRT0_DR
.set Pin_2A__INP_DIS, CYREG_PRT0_INP_DIS
.set Pin_2A__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set Pin_2A__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set Pin_2A__LCD_EN, CYREG_PRT0_LCD_EN
.set Pin_2A__MASK, 0x04
.set Pin_2A__PORT, 0
.set Pin_2A__PRT, CYREG_PRT0_PRT
.set Pin_2A__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set Pin_2A__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set Pin_2A__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set Pin_2A__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set Pin_2A__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set Pin_2A__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set Pin_2A__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set Pin_2A__PS, CYREG_PRT0_PS
.set Pin_2A__SHIFT, 2
.set Pin_2A__SLW, CYREG_PRT0_SLW

/* Pin_2B */
.set Pin_2B__0__INTTYPE, CYREG_PICU0_INTTYPE3
.set Pin_2B__0__MASK, 0x08
.set Pin_2B__0__PC, CYREG_PRT0_PC3
.set Pin_2B__0__PORT, 0
.set Pin_2B__0__SHIFT, 3
.set Pin_2B__AG, CYREG_PRT0_AG
.set Pin_2B__AMUX, CYREG_PRT0_AMUX
.set Pin_2B__BIE, CYREG_PRT0_BIE
.set Pin_2B__BIT_MASK, CYREG_PRT0_BIT_MASK
.set Pin_2B__BYP, CYREG_PRT0_BYP
.set Pin_2B__CTL, CYREG_PRT0_CTL
.set Pin_2B__DM0, CYREG_PRT0_DM0
.set Pin_2B__DM1, CYREG_PRT0_DM1
.set Pin_2B__DM2, CYREG_PRT0_DM2
.set Pin_2B__DR, CYREG_PRT0_DR
.set Pin_2B__INP_DIS, CYREG_PRT0_INP_DIS
.set Pin_2B__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set Pin_2B__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set Pin_2B__LCD_EN, CYREG_PRT0_LCD_EN
.set Pin_2B__MASK, 0x08
.set Pin_2B__PORT, 0
.set Pin_2B__PRT, CYREG_PRT0_PRT
.set Pin_2B__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set Pin_2B__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set Pin_2B__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set Pin_2B__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set Pin_2B__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set Pin_2B__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set Pin_2B__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set Pin_2B__PS, CYREG_PRT0_PS
.set Pin_2B__SHIFT, 3
.set Pin_2B__SLW, CYREG_PRT0_SLW

/* Pin_EN */
.set Pin_EN__0__INTTYPE, CYREG_PICU2_INTTYPE0
.set Pin_EN__0__MASK, 0x01
.set Pin_EN__0__PC, CYREG_PRT2_PC0
.set Pin_EN__0__PORT, 2
.set Pin_EN__0__SHIFT, 0
.set Pin_EN__AG, CYREG_PRT2_AG
.set Pin_EN__AMUX, CYREG_PRT2_AMUX
.set Pin_EN__BIE, CYREG_PRT2_BIE
.set Pin_EN__BIT_MASK, CYREG_PRT2_BIT_MASK
.set Pin_EN__BYP, CYREG_PRT2_BYP
.set Pin_EN__CTL, CYREG_PRT2_CTL
.set Pin_EN__DM0, CYREG_PRT2_DM0
.set Pin_EN__DM1, CYREG_PRT2_DM1
.set Pin_EN__DM2, CYREG_PRT2_DM2
.set Pin_EN__DR, CYREG_PRT2_DR
.set Pin_EN__INP_DIS, CYREG_PRT2_INP_DIS
.set Pin_EN__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set Pin_EN__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set Pin_EN__LCD_EN, CYREG_PRT2_LCD_EN
.set Pin_EN__MASK, 0x01
.set Pin_EN__PORT, 2
.set Pin_EN__PRT, CYREG_PRT2_PRT
.set Pin_EN__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set Pin_EN__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set Pin_EN__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set Pin_EN__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set Pin_EN__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set Pin_EN__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set Pin_EN__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set Pin_EN__PS, CYREG_PRT2_PS
.set Pin_EN__SHIFT, 0
.set Pin_EN__SLW, CYREG_PRT2_SLW

/* UART_1 */
.set UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG, CYREG_B1_UDB09_10_MSK
.set UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG, CYREG_B1_UDB09_10_MSK
.set UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set UART_1_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set UART_1_BUART_sRX_RxBitCounter__CONTROL_REG, CYREG_B1_UDB09_CTL
.set UART_1_BUART_sRX_RxBitCounter__CONTROL_ST_REG, CYREG_B1_UDB09_ST_CTL
.set UART_1_BUART_sRX_RxBitCounter__COUNT_REG, CYREG_B1_UDB09_CTL
.set UART_1_BUART_sRX_RxBitCounter__COUNT_ST_REG, CYREG_B1_UDB09_ST_CTL
.set UART_1_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_1_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_1_BUART_sRX_RxBitCounter__PERIOD_REG, CYREG_B1_UDB09_MSK
.set UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG, CYREG_B1_UDB09_10_ST
.set UART_1_BUART_sRX_RxBitCounter_ST__MASK_REG, CYREG_B1_UDB09_MSK
.set UART_1_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_1_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_1_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG, CYREG_B1_UDB09_ST_CTL
.set UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG, CYREG_B1_UDB09_ST_CTL
.set UART_1_BUART_sRX_RxBitCounter_ST__STATUS_REG, CYREG_B1_UDB09_ST
.set UART_1_BUART_sRX_RxShifter_u0__16BIT_A0_REG, CYREG_B1_UDB09_10_A0
.set UART_1_BUART_sRX_RxShifter_u0__16BIT_A1_REG, CYREG_B1_UDB09_10_A1
.set UART_1_BUART_sRX_RxShifter_u0__16BIT_D0_REG, CYREG_B1_UDB09_10_D0
.set UART_1_BUART_sRX_RxShifter_u0__16BIT_D1_REG, CYREG_B1_UDB09_10_D1
.set UART_1_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set UART_1_BUART_sRX_RxShifter_u0__16BIT_F0_REG, CYREG_B1_UDB09_10_F0
.set UART_1_BUART_sRX_RxShifter_u0__16BIT_F1_REG, CYREG_B1_UDB09_10_F1
.set UART_1_BUART_sRX_RxShifter_u0__A0_A1_REG, CYREG_B1_UDB09_A0_A1
.set UART_1_BUART_sRX_RxShifter_u0__A0_REG, CYREG_B1_UDB09_A0
.set UART_1_BUART_sRX_RxShifter_u0__A1_REG, CYREG_B1_UDB09_A1
.set UART_1_BUART_sRX_RxShifter_u0__D0_D1_REG, CYREG_B1_UDB09_D0_D1
.set UART_1_BUART_sRX_RxShifter_u0__D0_REG, CYREG_B1_UDB09_D0
.set UART_1_BUART_sRX_RxShifter_u0__D1_REG, CYREG_B1_UDB09_D1
.set UART_1_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set UART_1_BUART_sRX_RxShifter_u0__F0_F1_REG, CYREG_B1_UDB09_F0_F1
.set UART_1_BUART_sRX_RxShifter_u0__F0_REG, CYREG_B1_UDB09_F0
.set UART_1_BUART_sRX_RxShifter_u0__F1_REG, CYREG_B1_UDB09_F1
.set UART_1_BUART_sRX_RxShifter_u0__MSK_DP_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_1_BUART_sRX_RxShifter_u0__PER_DP_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_1_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB08_09_ACTL
.set UART_1_BUART_sRX_RxSts__16BIT_STATUS_REG, CYREG_B1_UDB08_09_ST
.set UART_1_BUART_sRX_RxSts__3__MASK, 0x08
.set UART_1_BUART_sRX_RxSts__3__POS, 3
.set UART_1_BUART_sRX_RxSts__4__MASK, 0x10
.set UART_1_BUART_sRX_RxSts__4__POS, 4
.set UART_1_BUART_sRX_RxSts__5__MASK, 0x20
.set UART_1_BUART_sRX_RxSts__5__POS, 5
.set UART_1_BUART_sRX_RxSts__MASK, 0x38
.set UART_1_BUART_sRX_RxSts__MASK_REG, CYREG_B1_UDB08_MSK
.set UART_1_BUART_sRX_RxSts__STATUS_AUX_CTL_REG, CYREG_B1_UDB08_ACTL
.set UART_1_BUART_sRX_RxSts__STATUS_REG, CYREG_B1_UDB08_ST
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG, CYREG_B1_UDB10_11_A0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG, CYREG_B1_UDB10_11_A1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG, CYREG_B1_UDB10_11_D0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG, CYREG_B1_UDB10_11_D1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB10_11_ACTL
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG, CYREG_B1_UDB10_11_F0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG, CYREG_B1_UDB10_11_F1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG, CYREG_B1_UDB10_A0_A1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG, CYREG_B1_UDB10_A0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG, CYREG_B1_UDB10_A1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG, CYREG_B1_UDB10_D0_D1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG, CYREG_B1_UDB10_D0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG, CYREG_B1_UDB10_D1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG, CYREG_B1_UDB10_ACTL
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG, CYREG_B1_UDB10_F0_F1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG, CYREG_B1_UDB10_F0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG, CYREG_B1_UDB10_F1
.set UART_1_BUART_sTX_TxShifter_u0__A0_A1_REG, CYREG_B1_UDB11_A0_A1
.set UART_1_BUART_sTX_TxShifter_u0__A0_REG, CYREG_B1_UDB11_A0
.set UART_1_BUART_sTX_TxShifter_u0__A1_REG, CYREG_B1_UDB11_A1
.set UART_1_BUART_sTX_TxShifter_u0__D0_D1_REG, CYREG_B1_UDB11_D0_D1
.set UART_1_BUART_sTX_TxShifter_u0__D0_REG, CYREG_B1_UDB11_D0
.set UART_1_BUART_sTX_TxShifter_u0__D1_REG, CYREG_B1_UDB11_D1
.set UART_1_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG, CYREG_B1_UDB11_ACTL
.set UART_1_BUART_sTX_TxShifter_u0__F0_F1_REG, CYREG_B1_UDB11_F0_F1
.set UART_1_BUART_sTX_TxShifter_u0__F0_REG, CYREG_B1_UDB11_F0
.set UART_1_BUART_sTX_TxShifter_u0__F1_REG, CYREG_B1_UDB11_F1
.set UART_1_BUART_sTX_TxSts__0__MASK, 0x01
.set UART_1_BUART_sTX_TxSts__0__POS, 0
.set UART_1_BUART_sTX_TxSts__1__MASK, 0x02
.set UART_1_BUART_sTX_TxSts__1__POS, 1
.set UART_1_BUART_sTX_TxSts__2__MASK, 0x04
.set UART_1_BUART_sTX_TxSts__2__POS, 2
.set UART_1_BUART_sTX_TxSts__3__MASK, 0x08
.set UART_1_BUART_sTX_TxSts__3__POS, 3
.set UART_1_BUART_sTX_TxSts__MASK, 0x0F
.set UART_1_BUART_sTX_TxSts__MASK_REG, CYREG_B1_UDB11_MSK
.set UART_1_BUART_sTX_TxSts__STATUS_AUX_CTL_REG, CYREG_B1_UDB11_ACTL
.set UART_1_BUART_sTX_TxSts__STATUS_REG, CYREG_B1_UDB11_ST
.set UART_1_IntClock__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set UART_1_IntClock__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set UART_1_IntClock__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set UART_1_IntClock__CFG2_SRC_SEL_MASK, 0x07
.set UART_1_IntClock__INDEX, 0x00
.set UART_1_IntClock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set UART_1_IntClock__PM_ACT_MSK, 0x01
.set UART_1_IntClock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set UART_1_IntClock__PM_STBY_MSK, 0x01

/* Pin_LN1 */
.set Pin_LN1__0__INTTYPE, CYREG_PICU0_INTTYPE6
.set Pin_LN1__0__MASK, 0x40
.set Pin_LN1__0__PC, CYREG_PRT0_PC6
.set Pin_LN1__0__PORT, 0
.set Pin_LN1__0__SHIFT, 6
.set Pin_LN1__AG, CYREG_PRT0_AG
.set Pin_LN1__AMUX, CYREG_PRT0_AMUX
.set Pin_LN1__BIE, CYREG_PRT0_BIE
.set Pin_LN1__BIT_MASK, CYREG_PRT0_BIT_MASK
.set Pin_LN1__BYP, CYREG_PRT0_BYP
.set Pin_LN1__CTL, CYREG_PRT0_CTL
.set Pin_LN1__DM0, CYREG_PRT0_DM0
.set Pin_LN1__DM1, CYREG_PRT0_DM1
.set Pin_LN1__DM2, CYREG_PRT0_DM2
.set Pin_LN1__DR, CYREG_PRT0_DR
.set Pin_LN1__INP_DIS, CYREG_PRT0_INP_DIS
.set Pin_LN1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set Pin_LN1__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set Pin_LN1__LCD_EN, CYREG_PRT0_LCD_EN
.set Pin_LN1__MASK, 0x40
.set Pin_LN1__PORT, 0
.set Pin_LN1__PRT, CYREG_PRT0_PRT
.set Pin_LN1__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set Pin_LN1__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set Pin_LN1__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set Pin_LN1__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set Pin_LN1__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set Pin_LN1__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set Pin_LN1__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set Pin_LN1__PS, CYREG_PRT0_PS
.set Pin_LN1__SHIFT, 6
.set Pin_LN1__SLW, CYREG_PRT0_SLW

/* Pin_LN2 */
.set Pin_LN2__0__INTTYPE, CYREG_PICU0_INTTYPE7
.set Pin_LN2__0__MASK, 0x80
.set Pin_LN2__0__PC, CYREG_PRT0_PC7
.set Pin_LN2__0__PORT, 0
.set Pin_LN2__0__SHIFT, 7
.set Pin_LN2__AG, CYREG_PRT0_AG
.set Pin_LN2__AMUX, CYREG_PRT0_AMUX
.set Pin_LN2__BIE, CYREG_PRT0_BIE
.set Pin_LN2__BIT_MASK, CYREG_PRT0_BIT_MASK
.set Pin_LN2__BYP, CYREG_PRT0_BYP
.set Pin_LN2__CTL, CYREG_PRT0_CTL
.set Pin_LN2__DM0, CYREG_PRT0_DM0
.set Pin_LN2__DM1, CYREG_PRT0_DM1
.set Pin_LN2__DM2, CYREG_PRT0_DM2
.set Pin_LN2__DR, CYREG_PRT0_DR
.set Pin_LN2__INP_DIS, CYREG_PRT0_INP_DIS
.set Pin_LN2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set Pin_LN2__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set Pin_LN2__LCD_EN, CYREG_PRT0_LCD_EN
.set Pin_LN2__MASK, 0x80
.set Pin_LN2__PORT, 0
.set Pin_LN2__PRT, CYREG_PRT0_PRT
.set Pin_LN2__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set Pin_LN2__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set Pin_LN2__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set Pin_LN2__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set Pin_LN2__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set Pin_LN2__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set Pin_LN2__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set Pin_LN2__PS, CYREG_PRT0_PS
.set Pin_LN2__SHIFT, 7
.set Pin_LN2__SLW, CYREG_PRT0_SLW

/* Pin_PWM */
.set Pin_PWM__0__INTTYPE, CYREG_PICU2_INTTYPE1
.set Pin_PWM__0__MASK, 0x02
.set Pin_PWM__0__PC, CYREG_PRT2_PC1
.set Pin_PWM__0__PORT, 2
.set Pin_PWM__0__SHIFT, 1
.set Pin_PWM__AG, CYREG_PRT2_AG
.set Pin_PWM__AMUX, CYREG_PRT2_AMUX
.set Pin_PWM__BIE, CYREG_PRT2_BIE
.set Pin_PWM__BIT_MASK, CYREG_PRT2_BIT_MASK
.set Pin_PWM__BYP, CYREG_PRT2_BYP
.set Pin_PWM__CTL, CYREG_PRT2_CTL
.set Pin_PWM__DM0, CYREG_PRT2_DM0
.set Pin_PWM__DM1, CYREG_PRT2_DM1
.set Pin_PWM__DM2, CYREG_PRT2_DM2
.set Pin_PWM__DR, CYREG_PRT2_DR
.set Pin_PWM__INP_DIS, CYREG_PRT2_INP_DIS
.set Pin_PWM__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set Pin_PWM__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set Pin_PWM__LCD_EN, CYREG_PRT2_LCD_EN
.set Pin_PWM__MASK, 0x02
.set Pin_PWM__PORT, 2
.set Pin_PWM__PRT, CYREG_PRT2_PRT
.set Pin_PWM__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set Pin_PWM__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set Pin_PWM__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set Pin_PWM__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set Pin_PWM__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set Pin_PWM__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set Pin_PWM__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set Pin_PWM__PS, CYREG_PRT2_PS
.set Pin_PWM__SHIFT, 1
.set Pin_PWM__SLW, CYREG_PRT2_SLW

/* Timer_1 */
.set Timer_1_TimerHW__CAP0, CYREG_TMR0_CAP0
.set Timer_1_TimerHW__CAP1, CYREG_TMR0_CAP1
.set Timer_1_TimerHW__CFG0, CYREG_TMR0_CFG0
.set Timer_1_TimerHW__CFG1, CYREG_TMR0_CFG1
.set Timer_1_TimerHW__CFG2, CYREG_TMR0_CFG2
.set Timer_1_TimerHW__CNT_CMP0, CYREG_TMR0_CNT_CMP0
.set Timer_1_TimerHW__CNT_CMP1, CYREG_TMR0_CNT_CMP1
.set Timer_1_TimerHW__PER0, CYREG_TMR0_PER0
.set Timer_1_TimerHW__PER1, CYREG_TMR0_PER1
.set Timer_1_TimerHW__PM_ACT_CFG, CYREG_PM_ACT_CFG3
.set Timer_1_TimerHW__PM_ACT_MSK, 0x01
.set Timer_1_TimerHW__PM_STBY_CFG, CYREG_PM_STBY_CFG3
.set Timer_1_TimerHW__PM_STBY_MSK, 0x01
.set Timer_1_TimerHW__RT0, CYREG_TMR0_RT0
.set Timer_1_TimerHW__RT1, CYREG_TMR0_RT1
.set Timer_1_TimerHW__SR0, CYREG_TMR0_SR0

/* Clock_PWM */
.set Clock_PWM__CFG0, CYREG_CLKDIST_DCFG1_CFG0
.set Clock_PWM__CFG1, CYREG_CLKDIST_DCFG1_CFG1
.set Clock_PWM__CFG2, CYREG_CLKDIST_DCFG1_CFG2
.set Clock_PWM__CFG2_SRC_SEL_MASK, 0x07
.set Clock_PWM__INDEX, 0x01
.set Clock_PWM__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_PWM__PM_ACT_MSK, 0x02
.set Clock_PWM__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_PWM__PM_STBY_MSK, 0x02

/* isr_timer */
.set isr_timer__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set isr_timer__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set isr_timer__INTC_MASK, 0x01
.set isr_timer__INTC_NUMBER, 0
.set isr_timer__INTC_PRIOR_NUM, 7
.set isr_timer__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set isr_timer__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set isr_timer__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* isr_uart_rx */
.set isr_uart_rx__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set isr_uart_rx__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set isr_uart_rx__INTC_MASK, 0x02
.set isr_uart_rx__INTC_NUMBER, 1
.set isr_uart_rx__INTC_PRIOR_NUM, 7
.set isr_uart_rx__INTC_PRIOR_REG, CYREG_NVIC_PRI_1
.set isr_uart_rx__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set isr_uart_rx__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 18
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 18
.set CYDEV_CHIP_MEMBER_4D, 13
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 19
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 17
.set CYDEV_CHIP_MEMBER_4I, 23
.set CYDEV_CHIP_MEMBER_4J, 14
.set CYDEV_CHIP_MEMBER_4K, 15
.set CYDEV_CHIP_MEMBER_4L, 22
.set CYDEV_CHIP_MEMBER_4M, 21
.set CYDEV_CHIP_MEMBER_4N, 10
.set CYDEV_CHIP_MEMBER_4O, 7
.set CYDEV_CHIP_MEMBER_4P, 20
.set CYDEV_CHIP_MEMBER_4Q, 12
.set CYDEV_CHIP_MEMBER_4R, 8
.set CYDEV_CHIP_MEMBER_4S, 11
.set CYDEV_CHIP_MEMBER_4T, 9
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 16
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 24
.set CYDEV_CHIP_MEMBER_FM3, 28
.set CYDEV_CHIP_MEMBER_FM4, 29
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 25
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 26
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 27
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_Disallowed
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x200
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000003
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif