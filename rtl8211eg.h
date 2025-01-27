/**
  ******************************************************************************
  * @file    rtl8211eg.h
  * @author  MCD Application Team
  * @brief   This file contains all the functions prototypes for the
  *          rtl8211eg.c PHY driver.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef RTL8211EG_H
#define RTL8211EG_H

#ifdef __cplusplus
 extern "C" {
#endif   
   
/* Includes ------------------------------------------------------------------*/
#include <stdint.h>

/** @addtogroup BSP
  * @{
  */ 

/** @addtogroup Component
  * @{
  */
    
/** @defgroup RTL8211EG
  * @{
  */    
/* Exported constants --------------------------------------------------------*/
/** @defgroup RTL8211EG_Exported_Constants RTL8211EG Exported Constants
  * @{
  */ 
  
/** @defgroup RTL8211EG_Registers_Mapping RTL8211EG Registers Mapping
  * @{
  */ 
#define RTL8211EG_BMCR                  ((uint16_t)0x0000U)
#define RTL8211EG_BMSR                  ((uint16_t)0x0001U)
#define RTL8211EG_PHYID1                ((uint16_t)0x0002U)
#define RTL8211EG_PHYID2                ((uint16_t)0x0003U)
#define RTL8211EG_ANAR                  ((uint16_t)0x0004U)
#define RTL8211EG_ANLPAR                ((uint16_t)0x0005U)
#define RTL8211EG_ANER                  ((uint16_t)0x0006U)
#define RTL8211EG_ANNPTR                ((uint16_t)0x0007U)
#define RTL8211EG_ANNPRR                ((uint16_t)0x0008U)
#define RTL8211EG_GBCR                  ((uint16_t)0x0009U)
#define RTL8211EG_GBSR                  ((uint16_t)0x000AU)
#define RTL8211EG_MMDACR                ((uint16_t)0x000DU)
#define RTL8211EG_MMDAADR               ((uint16_t)0x000EU)
#define RTL8211EG_GBESR                 ((uint16_t)0x000FU)

 /**
  * @}
  */

/** @defgroup RTL8211EG_BMCR_Bit_Definition RTL8211EG Basic Mode Control Register Bit Definition
  * @{
  */  
#define RTL8211EG_BMCR_RESET            ((uint16_t)0x8000U)
#define RTL8211EG_BMCR_LOOPBACK         ((uint16_t)0x4000U)
#define RTL8211EG_BMCR_SPEED_SEL_LSB    ((uint16_t)0x2000U)
#define RTL8211EG_BMCR_AN_EN            ((uint16_t)0x1000U)
#define RTL8211EG_BMCR_POWER_DOWN       ((uint16_t)0x0800U)
#define RTL8211EG_BMCR_ISOLATE          ((uint16_t)0x0400U)
#define RTL8211EG_BMCR_RESTART_AN       ((uint16_t)0x0200U)
#define RTL8211EG_BMCR_DUPLEX_MODE      ((uint16_t)0x0100U) 
#define RTL8211EG_BMCR_COL_TEST         ((uint16_t)0x0080U)
#define RTL8211EG_BMCR_SPEED_SEL_MSB    ((uint16_t)0x0040U)
/**
  * @}
  */

/** @defgroup RTL8211EG_BMSR_Bit_Definition RTL8211EG Basic Mode Status Register Bit Definition
  * @{
  */   
#define RTL8211EG_BMSR_100BT4        	((uint16_t)0x8000U)
#define RTL8211EG_BMSR_100BTX_FD     	((uint16_t)0x4000U)
#define RTL8211EG_BMSR_100BTX_HD     	((uint16_t)0x2000U)
#define RTL8211EG_BMSR_10BT_FD       	((uint16_t)0x1000U)
#define RTL8211EG_BMSR_10BT_HD           (((uint16_t)0x0800U)
#define RTL8211EG_BMSR_10BT2_FD         ((uint16_t)0x0400U)
#define RTL8211EG_BMSR_10BT2_HD         ((uint16_t)0x0200U)
#define RTL8211EG_BMSR_EXTENDED_STATUS   ((uint16_t)0x0100U)
#define RTL8211EG_BMSR_PREAMBLE_SUPPR    ((uint16_t)0x0040U)
#define RTL8211EG_BMSR_AN_COMPLETE       ((uint16_t)0x0020U)
#define RTL8211EG_BMSR_REMOTE_FAULT      ((uint16_t)0x0010U)
#define RTL8211EG_BMSR_AN_CAPABLE        ((uint16_t)0x0008U)
#define RTL8211EG_BMSR_LINK_STATUS       ((uint16_t)0x0004U)
#define RTL8211EG_BMSR_JABBER_DETECT     ((uint16_t)0x0002U)
#define RTL8211EG_BMSR_EXTENDED_CAPABLE  ((uint16_t)0x0001U)
/**
  * @}
  */

/** @defgroup RTL8211EG_PHYI1R_Bit_Definition RTL8211EG PHY identifier 1 Register Bit Definition
  * @{
  */
#define RTL8211EG_PHYID1_OUI_MSB           ((uint16_t)0xFFFFU)
#define RTL8211EG_PHYID1_OUI_MSB_DEFAULT   ((uint16_t)0x001CU)
/**
  * @}
  */

/** @defgroup RTL8211EG_PHYID2_Bit_Definition RTL8211EG PHY identifier 2 Register Bit Definition
  * @{
  */

#define RTL8211EG_PHYID2_OUI_LSB           	   ((uint16_t)0xFC00U)
#define RTL8211EG_PHYID2_OUI_LSB_DEFAULT       ((uint16_t)0xC800U)
#define RTL8211EG_PHYID2_MODEL_NUM             ((uint16_t)0x03F0U)
#define RTL8211EG_PHYID2_MODEL_NUM_DEFAULT     ((uint16_t)0x0110U)
#define RTL8211EG_PHYID2_REVISION_NUM          ((uint16_t)0x000FU)
#define RTL8211EG_PHYID2_REVISION_NUM_DEFAULT  ((uint16_t)0x0005U)
/**
  * @}
  */

/** @defgroup RTL8211EG_ANAR_Bit_Definition RTL8211EG Auto-Negotiation Advertisement register Bit Definition
  * @{
  */
#define RTL8211EG_ANAR_NEXT_PAGE               ((uint16_t)0x8000U)
#define RTL8211EG_ANAR_REMOTE_FAULT            ((uint16_t)0x2000U)
#define RTL8211EG_ANAR_ASYM_PAUSE              ((uint16_t)0x0800U)
#define RTL8211EG_ANAR_PAUSE                   ((uint16_t)0x0400U)
#define RTL8211EG_ANAR_100BT4                  ((uint16_t)0x0200U)
#define RTL8211EG_ANAR_100BTX_FD               ((uint16_t)0x0100U)
#define RTL8211EG_ANAR_100BTX_HD               ((uint16_t)0x0080U)
#define RTL8211EG_ANAR_10BT_FD                 ((uint16_t)0x0040U)
#define RTL8211EG_ANAR_10BT_HD                 ((uint16_t)0x0020U)
#define RTL8211EG_ANAR_SELECTOR                ((uint16_t)0x001FU)
#define RTL8211EG_ANAR_SELECTOR_DEFAULT        ((uint16_t)0x0001U)
/**
  * @}
  */

/** @defgroup RTL8211EG_ANLPAR_Bit_Definition RTL8211EG Auto-Negotiation Link Partner Ability register Bit Definition
  * @{
  */
#define RTL8211EG_ANLPAR_NEXT_PAGE              ((uint16_t)0x8000U)
#define RTL8211EG_ANLPAR_ACK                    ((uint16_t)0x4000U)
#define RTL8211EG_ANLPAR_REMOTE_FAULT           ((uint16_t)0x2000U)

#define RTL8211EG_ANLPAR_ABILITY_FIELD          ((uint16_t)0x0FE0U)
#define RTL8211EG_ANLPAR_ABILITY_FIELD_DEFAULT  ((uint16_t)0x0000U)

 #define RTL8211EG_ANLPAR_SELECTOR              ((uint16_t)0x001FU)
#define RTL8211EG_ANLPAR_SELECTOR_DEFAULT       ((uint16_t)0x0000U)
/**
  * @}
  */

/** @defgroup RTL8211EG_ANER_Bit_Definition RTL8211EG Auto-Negotiation Expansion register Bit Definition
  * @{
  */
#define RTL8211EG_ANER_PAR_DETECT_FAULT      ((uint16_t)0x0010U)
#define RTL8211EG_ANER_LP_NEXT_PAGE_ABLE     ((uint16_t)0x0008U)
#define RTL8211EG_ANER_NEXT_PAGE_ABLE        ((uint16_t)0x0004U)
#define RTL8211EG_ANER_PAGE_RECEIVED         ((uint16_t)0x0002U)
#define RTL8211EG_ANER_LP_AN_ABLE            ((uint16_t)0x0001U)
/**
  * @}
  */

/** @defgroup RTL8211EG_ANNPTR_Bit_Definition RTL8211EG Auto-Negotiation Next Page Transmit register Bit Definition
  * @{
  */
#define RTL8211EG_ANNPTR_NEXT_PAGE           ((uint16_t)0x8000U)
#define RTL8211EG_ANNPTR_MSG_PAGE            ((uint16_t)0x2000U)
#define RTL8211EG_ANNPTR_ACK2                ((uint16_t)0x1000U)
#define RTL8211EG_ANNPTR_TOGGLE              ((uint16_t)0x0800U)
#define RTL8211EG_ANNPTR_MESSAGE             ((uint16_t)0x07FFU)
#define RTL8211EG_ANNPTR_MESSAGE_DEFAULT     ((uint16_t)0x0001U)
/**
  * @}
  */

/** @defgroup RTL8211EG_ANNPRR_Bit_Definition RTL8211EG Auto-Negotiation Next Page Receive register Bit Definition
  * @{
  */
#define RTL8211EG_ANNPRR_NEXT_PAGE           ((uint16_t)0x8000U)
#define RTL8211EG_ANNPRR_ACK                 ((uint16_t)0x4000U)
#define RTL8211EG_ANNPRR_MSG_PAGE            ((uint16_t)0x2000U)
#define RTL8211EG_ANNPRR_ACK2                ((uint16_t)0x1000U)
#define RTL8211EG_ANNPRR_TOGGLE              ((uint16_t)0x0800U)
#define RTL8211EG_ANNPRR_MESSAGE             ((uint16_t)0x07FFU)
/**
  * @}
  */

/** @defgroup RTL8211EG_1000Base_T_CR_Bit_Definition RTL8211EG 1000Base-T control register Bit Definition
  * @{
  */
#define RTL8211EG_GBCR_TEST_MODE             ((uint16_t)0xE000U)
#define RTL8211EG_GBCR_MS_MAN_CONF_EN        ((uint16_t)0x1000U)
#define RTL8211EG_GBCR_MS_MAN_CONF_VAL       ((uint16_t)0x0800U)
#define RTL8211EG_GBCR_PORT_TYPE             ((uint16_t)0x0400U)
#define RTL8211EG_GBCR_1000BT_FD             ((uint16_t)0x0200U)
/**
  * @}
  */

/** @defgroup RTL8211EG_1000Base_T_SR_Bit_Definition RTL8211EG 1000Base-T status register Bit Definition
  * @{
  */
#define RTL8211EG_GBSR_MS_CONF_FAULT            ((uint16_t)0x8000U)
#define RTL8211EG_GBSR_MS_CONF_RES              ((uint16_t)0x4000U)
#define RTL8211EG_GBSR_LOCAL_RECEIVER_STATUS    ((uint16_t)0x2000U)
#define RTL8211EG_GBSR_REMOTE_RECEIVER_STATUS   ((uint16_t)0x1000U)
#define RTL8211EG_GBSR_LP_1000BT_FD             ((uint16_t)0x0800U)
#define RTL8211EG_GBSR_LP_1000BT_HD             ((uint16_t)0x0400U)
#define RTL8211EG_GBSR_IDLE_ERR_COUNT           ((uint16_t)0x00FFU)
/**
  * @}
  */

/** @defgroup RTL8211EG_MMDACR_Bit_Definition RTL8211EG MMD Access Control register Bit Definition
  * @{
  */
#define RTL8211EG_MMDACR_FUNCT                  ((uint16_t)0xC000U) 
#define RTL8211EG_MMDACR_DEVAD                  ((uint16_t)0x001FU)
/**
  * @}
  */

 /** @defgroup RTL8211EG_MMDAADR_Bit_Definition RTL8211EG MMD Access Address Data register Bit Definition
   * @{
   */
 #define RTL8211EG_MMDAADR_ADD_DATA             ((uint16_t)0xFFFFU)
 #define RTL8211EG_MMDAADR_ADD_DATA_DEFAULT     ((uint16_t)0x0000U)
 /**
   * @}
   */

//1000Base-T Extended Status register
#define RTL8211EG_GBESR_1000BX_FD               ((uint16_t)0x8000U) 
#define RTL8211EG_GBESR_1000BX_HD               ((uint16_t)0x4000U) 
#define RTL8211EG_GBESR_1000BT_FD               ((uint16_t)0x2000U) 
#define RTL8211EG_GBESR_1000BT_HD               ((uint16_t)0x1000U) 

//PHY Specific Control register
#define RTL8211EG_PHYCR_RXC_DISABLE            ((uint16_t)0x8000U)
#define RTL8211EG_PHYCR_FPR_FAIL               ((uint16_t)0x7000U)
#define RTL8211EG_PHYCR_CRS_ON_TRANSMIT        ((uint16_t)0x0800U)
#define RTL8211EG_PHYCR_FORCE_LINK_GOOD        ((uint16_t)0x0400U)
#define RTL8211EG_PHYCR_CROSS_ENABLE           ((uint16_t)0x0040U)
#define RTL8211EG_PHYCR_MDI_MODE               ((uint16_t)0x0020U)
#define RTL8211EG_PHYCR_CLK_DISABLE            ((uint16_t)0x0010U)
#define RTL8211EG_PHYCR_JABBER_DISABLE         ((uint16_t)0x0001U)

//PHY Specific Status register
#define RTL8211EG_PHYSR_SPEED                   ((uint16_t)0xC000U)
#define RTL8211EG_PHYSR_SPEED_10MBPS            ((uint16_t)0x0000U) 
#define RTL8211EG_PHYSR_SPEED_100MBPS           ((uint16_t)0x4000U)
#define RTL8211EG_PHYSR_SPEED_1000MBPS          ((uint16_t)0x8000U)
#define RTL8211EG_PHYSR_DUPLEX                  ((uint16_t)0x2000U)
#define RTL8211EG_PHYSR_PAGE                    ((uint16_t)0x1000U)
#define RTL8211EG_PHYSR_SPEED_DUPLEX            ((uint16_t)0x0800U)
#define RTL8211EG_PHYSR_LINK                    ((uint16_t)0x0400U)
#define RTL8211EG_PHYSR_MDI_CROSSOVER_STATUS    ((uint16_t)0x0040U)
#define RTL8211EG_PHYSR_PRE_LINK_OK             ((uint16_t)0x0002U)
#define RTL8211EG_PHYSR_JABBER                  ((uint16_t)0x0001U) 

//Interrupt Enable register
#define RTL8211EG_INER_AN_ERROR                 ((uint16_t)0x8000U)
#define RTL8211EG_INER_PAGE_RECEIVED            ((uint16_t)0x1000U)
#define RTL8211EG_INER_AN_COMPLETE              ((uint16_t)0x0800U)
#define RTL8211EG_INER_LINK_STATUS              ((uint16_t)0x0400U)
#define RTL8211EG_INER_SYMBOL_ERROR             ((uint16_t)0x0200U)
#define RTL8211EG_INER_FALSE_CARRIER            ((uint16_t)0x0100U)
#define RTL8211EG_INER_JABBER                   ((uint16_t)0x0001U)

//Interrupt Status register
#define RTL8211EG_INSR_AN_ERROR                 ((uint16_t)0x8000U)
#define RTL8211EG_INSR_PAGE_RECEIVED            ((uint16_t)0x1000U)
#define RTL8211EG_INSR_AN_COMPLETE              ((uint16_t)0x0800U)
#define RTL8211EG_INSR_LINK_STATUS              ((uint16_t)0x0400U)
#define RTL8211EG_INSR_SYMBOL_ERROR             ((uint16_t)0x0200U)
#define RTL8211EG_INSR_FALSE_CARRIER            ((uint16_t)0x0100U)
#define RTL8211EG_INSR_JABBER                   ((uint16_t)0x0001U)

//Page Select register
#define RTL8211EG_PAGSR_PAGE_SEL                ((uint16_t)0x00FFU)
#define RTL8211EG_PAGSR_PAGE_SEL_DEFAULT        ((uint16_t)0x0000U)

/** @defgroup RTL8211EG_STATUS RTL8211EG Status
* @{
*/

#define  RTL8211EG_STATUS_100MBITS_READ_AGAIN   ((int32_t)-6)
#define  RTL8211EG_STATUS_READ_ERROR            ((int32_t)-5)
#define  RTL8211EG_STATUS_WRITE_ERROR           ((int32_t)-4)
#define  RTL8211EG_STATUS_ADDRESS_ERROR         ((int32_t)-3)
#define  RTL8211EG_STATUS_RESET_TIMEOUT         ((int32_t)-2)
#define  RTL8211EG_STATUS_ERROR                 ((int32_t)-1)
#define  RTL8211EG_STATUS_OK                    ((int32_t) 0)
#define  RTL8211EG_STATUS_LINK_DOWN             ((int32_t) 1)
#define  RTL8211EG_STATUS_100MBITS_FULLDUPLEX   ((int32_t) 2)
#define  RTL8211EG_STATUS_100MBITS_HALFDUPLEX   ((int32_t) 3)
#define  RTL8211EG_STATUS_10MBITS_FULLDUPLEX    ((int32_t) 4)
#define  RTL8211EG_STATUS_10MBITS_HALFDUPLEX    ((int32_t) 5)
#define  RTL8211EG_STATUS_AUTONEGO_NOTDONE      ((int32_t) 6)
#define  RTL8211EG_STATUS_1000MBITS_FULLDUPLEX  ((int32_t) 7)
#define  RTL8211EG_STATUS_1000MBITS_HALFDUPLEX  ((int32_t) 8)
/**
* @}
*/

/* Exported types ------------------------------------------------------------*/ 
/** @defgroup RTL8211EG_Exported_Types RTL8211EG Exported Types
  * @{
  */
typedef int32_t  (*rtl8211eg_Init_Func) (void); 
typedef int32_t  (*rtl8211eg_DeInit_Func) (void);
typedef int32_t  (*rtl8211eg_ReadReg_Func) (uint32_t, uint32_t, uint32_t *);
typedef int32_t  (*rtl8211eg_WriteReg_Func) (uint32_t, uint32_t, uint32_t);
typedef int32_t  (*rtl8211eg_GetTick_Func) (void);

typedef struct 
{                   
  rtl8211eg_Init_Func      Init; 
  rtl8211eg_DeInit_Func    DeInit;
  rtl8211eg_WriteReg_Func  WriteReg;
  rtl8211eg_ReadReg_Func   ReadReg; 
  rtl8211eg_GetTick_Func   GetTick;   
} rtl8211eg_IOCtx_t;  

  
typedef struct 
{
  uint32_t            DevAddr;
  uint32_t            Is_Initialized;
  rtl8211eg_IOCtx_t    IO;
  void               *pData;
} rtl8211eg_Object_t;
/**
  * @}
  */ 

/* Exported macro ------------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/
/** @defgroup RTL8211EG_Exported_Functions RTL8211EG Exported Functions
  * @{
  */
int32_t RTL8211EG_RegisterBusIO(rtl8211eg_Object_t *pObj, rtl8211eg_IOCtx_t *ioctx);
int32_t RTL8211EG_Init(rtl8211eg_Object_t *pObj);
int32_t RTL8211EG_DeInit(rtl8211eg_Object_t *pObj);
int32_t RTL8211EG_DisablePowerDownMode(rtl8211eg_Object_t *pObj);
int32_t RTL8211EG_EnablePowerDownMode(rtl8211eg_Object_t *pObj);
int32_t RTL8211EG_StartAutoNego(rtl8211eg_Object_t *pObj);
int32_t RTL8211EG_GetLinkState(rtl8211eg_Object_t *pObj);
int32_t RTL8211EG_SetLinkState(rtl8211eg_Object_t *pObj, uint32_t LinkState);
int32_t RTL8211EG_EnableLoopbackMode(rtl8211eg_Object_t *pObj);
int32_t RTL8211EG_DisableLoopbackMode(rtl8211eg_Object_t *pObj);
int32_t RTL8211EG_EnableIT(rtl8211eg_Object_t *pObj, uint32_t Interrupt);
int32_t RTL8211EG_DisableIT(rtl8211eg_Object_t *pObj, uint32_t Interrupt);
int32_t RTL8211EG_ClearIT(rtl8211eg_Object_t *pObj, uint32_t Interrupt);
int32_t RTL8211EG_GetITStatus(rtl8211eg_Object_t *pObj, uint32_t Interrupt);
/**
  * @}
  */ 

#ifdef __cplusplus
}
#endif
#endif /* RTL8211EG_H */


/**
  * @}
  */ 

/**
  * @}
  */

/**
  * @}
  */ 

/**
  * @}
  */       
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
