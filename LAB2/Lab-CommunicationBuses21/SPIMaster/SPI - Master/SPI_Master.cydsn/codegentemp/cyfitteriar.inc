;
; File Name: cyfitteriar.inc
; 
; PSoC Creator  4.2
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* Rx_1 */
Rx_1__0__INTTYPE EQU CYREG_PICU12_INTTYPE6
Rx_1__0__MASK EQU 0x40
Rx_1__0__PC EQU CYREG_PRT12_PC6
Rx_1__0__PORT EQU 12
Rx_1__0__SHIFT EQU 6
Rx_1__AG EQU CYREG_PRT12_AG
Rx_1__BIE EQU CYREG_PRT12_BIE
Rx_1__BIT_MASK EQU CYREG_PRT12_BIT_MASK
Rx_1__BYP EQU CYREG_PRT12_BYP
Rx_1__DM0 EQU CYREG_PRT12_DM0
Rx_1__DM1 EQU CYREG_PRT12_DM1
Rx_1__DM2 EQU CYREG_PRT12_DM2
Rx_1__DR EQU CYREG_PRT12_DR
Rx_1__INP_DIS EQU CYREG_PRT12_INP_DIS
Rx_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
Rx_1__MASK EQU 0x40
Rx_1__PORT EQU 12
Rx_1__PRT EQU CYREG_PRT12_PRT
Rx_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
Rx_1__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
Rx_1__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
Rx_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
Rx_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
Rx_1__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
Rx_1__PS EQU CYREG_PRT12_PS
Rx_1__SHIFT EQU 6
Rx_1__SIO_CFG EQU CYREG_PRT12_SIO_CFG
Rx_1__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
Rx_1__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
Rx_1__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
Rx_1__SLW EQU CYREG_PRT12_SLW

/* SPIM */
SPIM_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
SPIM_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB10_11_CTL
SPIM_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB10_11_CTL
SPIM_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB10_11_CTL
SPIM_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB10_11_CTL
SPIM_BSPIM_BitCounter__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB10_11_MSK
SPIM_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB10_11_MSK
SPIM_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB10_11_MSK
SPIM_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB10_11_MSK
SPIM_BSPIM_BitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
SPIM_BSPIM_BitCounter__CONTROL_REG EQU CYREG_B0_UDB10_CTL
SPIM_BSPIM_BitCounter__CONTROL_ST_REG EQU CYREG_B0_UDB10_ST_CTL
SPIM_BSPIM_BitCounter__COUNT_REG EQU CYREG_B0_UDB10_CTL
SPIM_BSPIM_BitCounter__COUNT_ST_REG EQU CYREG_B0_UDB10_ST_CTL
SPIM_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
SPIM_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
SPIM_BSPIM_BitCounter__PERIOD_REG EQU CYREG_B0_UDB10_MSK
SPIM_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
SPIM_BSPIM_BitCounter_ST__16BIT_STATUS_REG EQU CYREG_B0_UDB10_11_ST
SPIM_BSPIM_BitCounter_ST__MASK_REG EQU CYREG_B0_UDB10_MSK
SPIM_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
SPIM_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
SPIM_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
SPIM_BSPIM_BitCounter_ST__STATUS_CNT_REG EQU CYREG_B0_UDB10_ST_CTL
SPIM_BSPIM_BitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B0_UDB10_ST_CTL
SPIM_BSPIM_BitCounter_ST__STATUS_REG EQU CYREG_B0_UDB10_ST
SPIM_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
SPIM_BSPIM_RxStsReg__16BIT_STATUS_REG EQU CYREG_B0_UDB11_12_ST
SPIM_BSPIM_RxStsReg__4__MASK EQU 0x10
SPIM_BSPIM_RxStsReg__4__POS EQU 4
SPIM_BSPIM_RxStsReg__5__MASK EQU 0x20
SPIM_BSPIM_RxStsReg__5__POS EQU 5
SPIM_BSPIM_RxStsReg__6__MASK EQU 0x40
SPIM_BSPIM_RxStsReg__6__POS EQU 6
SPIM_BSPIM_RxStsReg__MASK EQU 0x70
SPIM_BSPIM_RxStsReg__MASK_REG EQU CYREG_B0_UDB11_MSK
SPIM_BSPIM_RxStsReg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
SPIM_BSPIM_RxStsReg__STATUS_REG EQU CYREG_B0_UDB11_ST
SPIM_BSPIM_sR8_Dp_u0__16BIT_A0_REG EQU CYREG_B0_UDB10_11_A0
SPIM_BSPIM_sR8_Dp_u0__16BIT_A1_REG EQU CYREG_B0_UDB10_11_A1
SPIM_BSPIM_sR8_Dp_u0__16BIT_D0_REG EQU CYREG_B0_UDB10_11_D0
SPIM_BSPIM_sR8_Dp_u0__16BIT_D1_REG EQU CYREG_B0_UDB10_11_D1
SPIM_BSPIM_sR8_Dp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
SPIM_BSPIM_sR8_Dp_u0__16BIT_F0_REG EQU CYREG_B0_UDB10_11_F0
SPIM_BSPIM_sR8_Dp_u0__16BIT_F1_REG EQU CYREG_B0_UDB10_11_F1
SPIM_BSPIM_sR8_Dp_u0__A0_A1_REG EQU CYREG_B0_UDB10_A0_A1
SPIM_BSPIM_sR8_Dp_u0__A0_REG EQU CYREG_B0_UDB10_A0
SPIM_BSPIM_sR8_Dp_u0__A1_REG EQU CYREG_B0_UDB10_A1
SPIM_BSPIM_sR8_Dp_u0__D0_D1_REG EQU CYREG_B0_UDB10_D0_D1
SPIM_BSPIM_sR8_Dp_u0__D0_REG EQU CYREG_B0_UDB10_D0
SPIM_BSPIM_sR8_Dp_u0__D1_REG EQU CYREG_B0_UDB10_D1
SPIM_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
SPIM_BSPIM_sR8_Dp_u0__F0_F1_REG EQU CYREG_B0_UDB10_F0_F1
SPIM_BSPIM_sR8_Dp_u0__F0_REG EQU CYREG_B0_UDB10_F0
SPIM_BSPIM_sR8_Dp_u0__F1_REG EQU CYREG_B0_UDB10_F1
SPIM_BSPIM_sR8_Dp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
SPIM_BSPIM_sR8_Dp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
SPIM_BSPIM_TxStsReg__0__MASK EQU 0x01
SPIM_BSPIM_TxStsReg__0__POS EQU 0
SPIM_BSPIM_TxStsReg__1__MASK EQU 0x02
SPIM_BSPIM_TxStsReg__1__POS EQU 1
SPIM_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB09_10_ACTL
SPIM_BSPIM_TxStsReg__16BIT_STATUS_REG EQU CYREG_B1_UDB09_10_ST
SPIM_BSPIM_TxStsReg__2__MASK EQU 0x04
SPIM_BSPIM_TxStsReg__2__POS EQU 2
SPIM_BSPIM_TxStsReg__3__MASK EQU 0x08
SPIM_BSPIM_TxStsReg__3__POS EQU 3
SPIM_BSPIM_TxStsReg__4__MASK EQU 0x10
SPIM_BSPIM_TxStsReg__4__POS EQU 4
SPIM_BSPIM_TxStsReg__MASK EQU 0x1F
SPIM_BSPIM_TxStsReg__MASK_REG EQU CYREG_B1_UDB09_MSK
SPIM_BSPIM_TxStsReg__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB09_ACTL
SPIM_BSPIM_TxStsReg__STATUS_REG EQU CYREG_B1_UDB09_ST

/* Tx_1 */
Tx_1__0__INTTYPE EQU CYREG_PICU12_INTTYPE7
Tx_1__0__MASK EQU 0x80
Tx_1__0__PC EQU CYREG_PRT12_PC7
Tx_1__0__PORT EQU 12
Tx_1__0__SHIFT EQU 7
Tx_1__AG EQU CYREG_PRT12_AG
Tx_1__BIE EQU CYREG_PRT12_BIE
Tx_1__BIT_MASK EQU CYREG_PRT12_BIT_MASK
Tx_1__BYP EQU CYREG_PRT12_BYP
Tx_1__DM0 EQU CYREG_PRT12_DM0
Tx_1__DM1 EQU CYREG_PRT12_DM1
Tx_1__DM2 EQU CYREG_PRT12_DM2
Tx_1__DR EQU CYREG_PRT12_DR
Tx_1__INP_DIS EQU CYREG_PRT12_INP_DIS
Tx_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
Tx_1__MASK EQU 0x80
Tx_1__PORT EQU 12
Tx_1__PRT EQU CYREG_PRT12_PRT
Tx_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
Tx_1__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
Tx_1__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
Tx_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
Tx_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
Tx_1__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
Tx_1__PS EQU CYREG_PRT12_PS
Tx_1__SHIFT EQU 7
Tx_1__SIO_CFG EQU CYREG_PRT12_SIO_CFG
Tx_1__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
Tx_1__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
Tx_1__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
Tx_1__SLW EQU CYREG_PRT12_SLW

/* Pin_1 */
Pin_1__0__INTTYPE EQU CYREG_PICU2_INTTYPE3
Pin_1__0__MASK EQU 0x08
Pin_1__0__PC EQU CYREG_PRT2_PC3
Pin_1__0__PORT EQU 2
Pin_1__0__SHIFT EQU 3
Pin_1__AG EQU CYREG_PRT2_AG
Pin_1__AMUX EQU CYREG_PRT2_AMUX
Pin_1__BIE EQU CYREG_PRT2_BIE
Pin_1__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Pin_1__BYP EQU CYREG_PRT2_BYP
Pin_1__CTL EQU CYREG_PRT2_CTL
Pin_1__DM0 EQU CYREG_PRT2_DM0
Pin_1__DM1 EQU CYREG_PRT2_DM1
Pin_1__DM2 EQU CYREG_PRT2_DM2
Pin_1__DR EQU CYREG_PRT2_DR
Pin_1__INP_DIS EQU CYREG_PRT2_INP_DIS
Pin_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
Pin_1__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Pin_1__LCD_EN EQU CYREG_PRT2_LCD_EN
Pin_1__MASK EQU 0x08
Pin_1__PORT EQU 2
Pin_1__PRT EQU CYREG_PRT2_PRT
Pin_1__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Pin_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Pin_1__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Pin_1__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Pin_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Pin_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Pin_1__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Pin_1__PS EQU CYREG_PRT2_PS
Pin_1__SHIFT EQU 3
Pin_1__SLW EQU CYREG_PRT2_SLW

/* Pin_2 */
Pin_2__0__INTTYPE EQU CYREG_PICU2_INTTYPE4
Pin_2__0__MASK EQU 0x10
Pin_2__0__PC EQU CYREG_PRT2_PC4
Pin_2__0__PORT EQU 2
Pin_2__0__SHIFT EQU 4
Pin_2__AG EQU CYREG_PRT2_AG
Pin_2__AMUX EQU CYREG_PRT2_AMUX
Pin_2__BIE EQU CYREG_PRT2_BIE
Pin_2__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Pin_2__BYP EQU CYREG_PRT2_BYP
Pin_2__CTL EQU CYREG_PRT2_CTL
Pin_2__DM0 EQU CYREG_PRT2_DM0
Pin_2__DM1 EQU CYREG_PRT2_DM1
Pin_2__DM2 EQU CYREG_PRT2_DM2
Pin_2__DR EQU CYREG_PRT2_DR
Pin_2__INP_DIS EQU CYREG_PRT2_INP_DIS
Pin_2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
Pin_2__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Pin_2__LCD_EN EQU CYREG_PRT2_LCD_EN
Pin_2__MASK EQU 0x10
Pin_2__PORT EQU 2
Pin_2__PRT EQU CYREG_PRT2_PRT
Pin_2__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Pin_2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Pin_2__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Pin_2__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Pin_2__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Pin_2__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Pin_2__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Pin_2__PS EQU CYREG_PRT2_PS
Pin_2__SHIFT EQU 4
Pin_2__SLW EQU CYREG_PRT2_SLW

/* Pin_3 */
Pin_3__0__INTTYPE EQU CYREG_PICU2_INTTYPE5
Pin_3__0__MASK EQU 0x20
Pin_3__0__PC EQU CYREG_PRT2_PC5
Pin_3__0__PORT EQU 2
Pin_3__0__SHIFT EQU 5
Pin_3__AG EQU CYREG_PRT2_AG
Pin_3__AMUX EQU CYREG_PRT2_AMUX
Pin_3__BIE EQU CYREG_PRT2_BIE
Pin_3__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Pin_3__BYP EQU CYREG_PRT2_BYP
Pin_3__CTL EQU CYREG_PRT2_CTL
Pin_3__DM0 EQU CYREG_PRT2_DM0
Pin_3__DM1 EQU CYREG_PRT2_DM1
Pin_3__DM2 EQU CYREG_PRT2_DM2
Pin_3__DR EQU CYREG_PRT2_DR
Pin_3__INP_DIS EQU CYREG_PRT2_INP_DIS
Pin_3__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
Pin_3__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Pin_3__LCD_EN EQU CYREG_PRT2_LCD_EN
Pin_3__MASK EQU 0x20
Pin_3__PORT EQU 2
Pin_3__PRT EQU CYREG_PRT2_PRT
Pin_3__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Pin_3__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Pin_3__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Pin_3__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Pin_3__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Pin_3__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Pin_3__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Pin_3__PS EQU CYREG_PRT2_PS
Pin_3__SHIFT EQU 5
Pin_3__SLW EQU CYREG_PRT2_SLW

/* Pin_4 */
Pin_4__0__INTTYPE EQU CYREG_PICU2_INTTYPE6
Pin_4__0__MASK EQU 0x40
Pin_4__0__PC EQU CYREG_PRT2_PC6
Pin_4__0__PORT EQU 2
Pin_4__0__SHIFT EQU 6
Pin_4__AG EQU CYREG_PRT2_AG
Pin_4__AMUX EQU CYREG_PRT2_AMUX
Pin_4__BIE EQU CYREG_PRT2_BIE
Pin_4__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Pin_4__BYP EQU CYREG_PRT2_BYP
Pin_4__CTL EQU CYREG_PRT2_CTL
Pin_4__DM0 EQU CYREG_PRT2_DM0
Pin_4__DM1 EQU CYREG_PRT2_DM1
Pin_4__DM2 EQU CYREG_PRT2_DM2
Pin_4__DR EQU CYREG_PRT2_DR
Pin_4__INP_DIS EQU CYREG_PRT2_INP_DIS
Pin_4__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
Pin_4__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Pin_4__LCD_EN EQU CYREG_PRT2_LCD_EN
Pin_4__MASK EQU 0x40
Pin_4__PORT EQU 2
Pin_4__PRT EQU CYREG_PRT2_PRT
Pin_4__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Pin_4__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Pin_4__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Pin_4__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Pin_4__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Pin_4__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Pin_4__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Pin_4__PS EQU CYREG_PRT2_PS
Pin_4__SHIFT EQU 6
Pin_4__SLW EQU CYREG_PRT2_SLW

/* Pin_EN */
Pin_EN__0__INTTYPE EQU CYREG_PICU2_INTTYPE0
Pin_EN__0__MASK EQU 0x01
Pin_EN__0__PC EQU CYREG_PRT2_PC0
Pin_EN__0__PORT EQU 2
Pin_EN__0__SHIFT EQU 0
Pin_EN__AG EQU CYREG_PRT2_AG
Pin_EN__AMUX EQU CYREG_PRT2_AMUX
Pin_EN__BIE EQU CYREG_PRT2_BIE
Pin_EN__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Pin_EN__BYP EQU CYREG_PRT2_BYP
Pin_EN__CTL EQU CYREG_PRT2_CTL
Pin_EN__DM0 EQU CYREG_PRT2_DM0
Pin_EN__DM1 EQU CYREG_PRT2_DM1
Pin_EN__DM2 EQU CYREG_PRT2_DM2
Pin_EN__DR EQU CYREG_PRT2_DR
Pin_EN__INP_DIS EQU CYREG_PRT2_INP_DIS
Pin_EN__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
Pin_EN__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Pin_EN__LCD_EN EQU CYREG_PRT2_LCD_EN
Pin_EN__MASK EQU 0x01
Pin_EN__PORT EQU 2
Pin_EN__PRT EQU CYREG_PRT2_PRT
Pin_EN__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Pin_EN__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Pin_EN__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Pin_EN__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Pin_EN__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Pin_EN__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Pin_EN__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Pin_EN__PS EQU CYREG_PRT2_PS
Pin_EN__SHIFT EQU 0
Pin_EN__SLW EQU CYREG_PRT2_SLW

/* UART_1 */
UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB10_11_ACTL
UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB10_11_CTL
UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB10_11_CTL
UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB10_11_CTL
UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB10_11_CTL
UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB10_11_MSK
UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB10_11_MSK
UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB10_11_MSK
UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB10_11_MSK
UART_1_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB10_ACTL
UART_1_BUART_sRX_RxBitCounter__CONTROL_REG EQU CYREG_B1_UDB10_CTL
UART_1_BUART_sRX_RxBitCounter__CONTROL_ST_REG EQU CYREG_B1_UDB10_ST_CTL
UART_1_BUART_sRX_RxBitCounter__COUNT_REG EQU CYREG_B1_UDB10_CTL
UART_1_BUART_sRX_RxBitCounter__COUNT_ST_REG EQU CYREG_B1_UDB10_ST_CTL
UART_1_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
UART_1_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
UART_1_BUART_sRX_RxBitCounter__PERIOD_REG EQU CYREG_B1_UDB10_MSK
UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB10_11_ACTL
UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG EQU CYREG_B1_UDB10_11_ST
UART_1_BUART_sRX_RxBitCounter_ST__MASK_REG EQU CYREG_B1_UDB10_MSK
UART_1_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
UART_1_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
UART_1_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB10_ACTL
UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG EQU CYREG_B1_UDB10_ST_CTL
UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B1_UDB10_ST_CTL
UART_1_BUART_sRX_RxBitCounter_ST__STATUS_REG EQU CYREG_B1_UDB10_ST
UART_1_BUART_sRX_RxShifter_u0__16BIT_A0_REG EQU CYREG_B1_UDB08_09_A0
UART_1_BUART_sRX_RxShifter_u0__16BIT_A1_REG EQU CYREG_B1_UDB08_09_A1
UART_1_BUART_sRX_RxShifter_u0__16BIT_D0_REG EQU CYREG_B1_UDB08_09_D0
UART_1_BUART_sRX_RxShifter_u0__16BIT_D1_REG EQU CYREG_B1_UDB08_09_D1
UART_1_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB08_09_ACTL
UART_1_BUART_sRX_RxShifter_u0__16BIT_F0_REG EQU CYREG_B1_UDB08_09_F0
UART_1_BUART_sRX_RxShifter_u0__16BIT_F1_REG EQU CYREG_B1_UDB08_09_F1
UART_1_BUART_sRX_RxShifter_u0__A0_A1_REG EQU CYREG_B1_UDB08_A0_A1
UART_1_BUART_sRX_RxShifter_u0__A0_REG EQU CYREG_B1_UDB08_A0
UART_1_BUART_sRX_RxShifter_u0__A1_REG EQU CYREG_B1_UDB08_A1
UART_1_BUART_sRX_RxShifter_u0__D0_D1_REG EQU CYREG_B1_UDB08_D0_D1
UART_1_BUART_sRX_RxShifter_u0__D0_REG EQU CYREG_B1_UDB08_D0
UART_1_BUART_sRX_RxShifter_u0__D1_REG EQU CYREG_B1_UDB08_D1
UART_1_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB08_ACTL
UART_1_BUART_sRX_RxShifter_u0__F0_F1_REG EQU CYREG_B1_UDB08_F0_F1
UART_1_BUART_sRX_RxShifter_u0__F0_REG EQU CYREG_B1_UDB08_F0
UART_1_BUART_sRX_RxShifter_u0__F1_REG EQU CYREG_B1_UDB08_F1
UART_1_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB08_09_ACTL
UART_1_BUART_sRX_RxSts__16BIT_STATUS_REG EQU CYREG_B1_UDB08_09_ST
UART_1_BUART_sRX_RxSts__3__MASK EQU 0x08
UART_1_BUART_sRX_RxSts__3__POS EQU 3
UART_1_BUART_sRX_RxSts__4__MASK EQU 0x10
UART_1_BUART_sRX_RxSts__4__POS EQU 4
UART_1_BUART_sRX_RxSts__5__MASK EQU 0x20
UART_1_BUART_sRX_RxSts__5__POS EQU 5
UART_1_BUART_sRX_RxSts__MASK EQU 0x38
UART_1_BUART_sRX_RxSts__MASK_REG EQU CYREG_B1_UDB08_MSK
UART_1_BUART_sRX_RxSts__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB08_ACTL
UART_1_BUART_sRX_RxSts__STATUS_REG EQU CYREG_B1_UDB08_ST
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG EQU CYREG_B0_UDB08_09_A0
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG EQU CYREG_B0_UDB08_09_A1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG EQU CYREG_B0_UDB08_09_D0
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG EQU CYREG_B0_UDB08_09_D1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB08_09_ACTL
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG EQU CYREG_B0_UDB08_09_F0
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG EQU CYREG_B0_UDB08_09_F1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG EQU CYREG_B0_UDB08_A0_A1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG EQU CYREG_B0_UDB08_A0
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG EQU CYREG_B0_UDB08_A1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG EQU CYREG_B0_UDB08_D0_D1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG EQU CYREG_B0_UDB08_D0
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG EQU CYREG_B0_UDB08_D1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG EQU CYREG_B0_UDB08_ACTL
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG EQU CYREG_B0_UDB08_F0_F1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG EQU CYREG_B0_UDB08_F0
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG EQU CYREG_B0_UDB08_F1
UART_1_BUART_sTX_TxShifter_u0__16BIT_A0_REG EQU CYREG_B0_UDB09_10_A0
UART_1_BUART_sTX_TxShifter_u0__16BIT_A1_REG EQU CYREG_B0_UDB09_10_A1
UART_1_BUART_sTX_TxShifter_u0__16BIT_D0_REG EQU CYREG_B0_UDB09_10_D0
UART_1_BUART_sTX_TxShifter_u0__16BIT_D1_REG EQU CYREG_B0_UDB09_10_D1
UART_1_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB09_10_ACTL
UART_1_BUART_sTX_TxShifter_u0__16BIT_F0_REG EQU CYREG_B0_UDB09_10_F0
UART_1_BUART_sTX_TxShifter_u0__16BIT_F1_REG EQU CYREG_B0_UDB09_10_F1
UART_1_BUART_sTX_TxShifter_u0__A0_A1_REG EQU CYREG_B0_UDB09_A0_A1
UART_1_BUART_sTX_TxShifter_u0__A0_REG EQU CYREG_B0_UDB09_A0
UART_1_BUART_sTX_TxShifter_u0__A1_REG EQU CYREG_B0_UDB09_A1
UART_1_BUART_sTX_TxShifter_u0__D0_D1_REG EQU CYREG_B0_UDB09_D0_D1
UART_1_BUART_sTX_TxShifter_u0__D0_REG EQU CYREG_B0_UDB09_D0
UART_1_BUART_sTX_TxShifter_u0__D1_REG EQU CYREG_B0_UDB09_D1
UART_1_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB09_ACTL
UART_1_BUART_sTX_TxShifter_u0__F0_F1_REG EQU CYREG_B0_UDB09_F0_F1
UART_1_BUART_sTX_TxShifter_u0__F0_REG EQU CYREG_B0_UDB09_F0
UART_1_BUART_sTX_TxShifter_u0__F1_REG EQU CYREG_B0_UDB09_F1
UART_1_BUART_sTX_TxSts__0__MASK EQU 0x01
UART_1_BUART_sTX_TxSts__0__POS EQU 0
UART_1_BUART_sTX_TxSts__1__MASK EQU 0x02
UART_1_BUART_sTX_TxSts__1__POS EQU 1
UART_1_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB09_10_ACTL
UART_1_BUART_sTX_TxSts__16BIT_STATUS_REG EQU CYREG_B0_UDB09_10_ST
UART_1_BUART_sTX_TxSts__2__MASK EQU 0x04
UART_1_BUART_sTX_TxSts__2__POS EQU 2
UART_1_BUART_sTX_TxSts__3__MASK EQU 0x08
UART_1_BUART_sTX_TxSts__3__POS EQU 3
UART_1_BUART_sTX_TxSts__MASK EQU 0x0F
UART_1_BUART_sTX_TxSts__MASK_REG EQU CYREG_B0_UDB09_MSK
UART_1_BUART_sTX_TxSts__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB09_ACTL
UART_1_BUART_sTX_TxSts__STATUS_REG EQU CYREG_B0_UDB09_ST
UART_1_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
UART_1_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
UART_1_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
UART_1_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
UART_1_IntClock__INDEX EQU 0x01
UART_1_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
UART_1_IntClock__PM_ACT_MSK EQU 0x02
UART_1_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
UART_1_IntClock__PM_STBY_MSK EQU 0x02

/* Clock_1 */
Clock_1__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
Clock_1__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
Clock_1__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
Clock_1__CFG2_SRC_SEL_MASK EQU 0x07
Clock_1__INDEX EQU 0x00
Clock_1__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_1__PM_ACT_MSK EQU 0x01
Clock_1__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_1__PM_STBY_MSK EQU 0x01

/* Pin_LN1 */
Pin_LN1__0__INTTYPE EQU CYREG_PICU0_INTTYPE0
Pin_LN1__0__MASK EQU 0x01
Pin_LN1__0__PC EQU CYREG_PRT0_PC0
Pin_LN1__0__PORT EQU 0
Pin_LN1__0__SHIFT EQU 0
Pin_LN1__AG EQU CYREG_PRT0_AG
Pin_LN1__AMUX EQU CYREG_PRT0_AMUX
Pin_LN1__BIE EQU CYREG_PRT0_BIE
Pin_LN1__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Pin_LN1__BYP EQU CYREG_PRT0_BYP
Pin_LN1__CTL EQU CYREG_PRT0_CTL
Pin_LN1__DM0 EQU CYREG_PRT0_DM0
Pin_LN1__DM1 EQU CYREG_PRT0_DM1
Pin_LN1__DM2 EQU CYREG_PRT0_DM2
Pin_LN1__DR EQU CYREG_PRT0_DR
Pin_LN1__INP_DIS EQU CYREG_PRT0_INP_DIS
Pin_LN1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Pin_LN1__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Pin_LN1__LCD_EN EQU CYREG_PRT0_LCD_EN
Pin_LN1__MASK EQU 0x01
Pin_LN1__PORT EQU 0
Pin_LN1__PRT EQU CYREG_PRT0_PRT
Pin_LN1__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Pin_LN1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Pin_LN1__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Pin_LN1__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Pin_LN1__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Pin_LN1__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Pin_LN1__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Pin_LN1__PS EQU CYREG_PRT0_PS
Pin_LN1__SHIFT EQU 0
Pin_LN1__SLW EQU CYREG_PRT0_SLW

/* Pin_LN2 */
Pin_LN2__0__INTTYPE EQU CYREG_PICU0_INTTYPE7
Pin_LN2__0__MASK EQU 0x80
Pin_LN2__0__PC EQU CYREG_PRT0_PC7
Pin_LN2__0__PORT EQU 0
Pin_LN2__0__SHIFT EQU 7
Pin_LN2__AG EQU CYREG_PRT0_AG
Pin_LN2__AMUX EQU CYREG_PRT0_AMUX
Pin_LN2__BIE EQU CYREG_PRT0_BIE
Pin_LN2__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Pin_LN2__BYP EQU CYREG_PRT0_BYP
Pin_LN2__CTL EQU CYREG_PRT0_CTL
Pin_LN2__DM0 EQU CYREG_PRT0_DM0
Pin_LN2__DM1 EQU CYREG_PRT0_DM1
Pin_LN2__DM2 EQU CYREG_PRT0_DM2
Pin_LN2__DR EQU CYREG_PRT0_DR
Pin_LN2__INP_DIS EQU CYREG_PRT0_INP_DIS
Pin_LN2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Pin_LN2__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Pin_LN2__LCD_EN EQU CYREG_PRT0_LCD_EN
Pin_LN2__MASK EQU 0x80
Pin_LN2__PORT EQU 0
Pin_LN2__PRT EQU CYREG_PRT0_PRT
Pin_LN2__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Pin_LN2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Pin_LN2__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Pin_LN2__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Pin_LN2__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Pin_LN2__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Pin_LN2__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Pin_LN2__PS EQU CYREG_PRT0_PS
Pin_LN2__SHIFT EQU 7
Pin_LN2__SLW EQU CYREG_PRT0_SLW

/* isr_uart_rx */
isr_uart_rx__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_uart_rx__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_uart_rx__INTC_MASK EQU 0x01
isr_uart_rx__INTC_NUMBER EQU 0
isr_uart_rx__INTC_PRIOR_NUM EQU 7
isr_uart_rx__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
isr_uart_rx__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_uart_rx__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 18
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 18
CYDEV_CHIP_MEMBER_4D EQU 13
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 19
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 17
CYDEV_CHIP_MEMBER_4I EQU 23
CYDEV_CHIP_MEMBER_4J EQU 14
CYDEV_CHIP_MEMBER_4K EQU 15
CYDEV_CHIP_MEMBER_4L EQU 22
CYDEV_CHIP_MEMBER_4M EQU 21
CYDEV_CHIP_MEMBER_4N EQU 10
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 20
CYDEV_CHIP_MEMBER_4Q EQU 12
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 11
CYDEV_CHIP_MEMBER_4T EQU 9
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 16
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 24
CYDEV_CHIP_MEMBER_FM3 EQU 28
CYDEV_CHIP_MEMBER_FM4 EQU 29
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 26
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 27
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_Disallowed
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x200
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000001
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */