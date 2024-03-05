/******************************************************************************
 *
 * Module: PORT
 *
 * File Name: Port_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Mohamed Ahmed Kamal
 ******************************************************************************/

#ifndef PORT_CFG_H
#define PORT_CFG_H

/*
 * Module Version 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION              (1U)
#define PORT_CFG_SW_MINOR_VERSION              (0U)
#define PORT_CFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION     (3U)

/* Pre-compile option for Development Error Detect */
#define PORT_DEV_ERROR_DETECT                (STD_ON)

/* Pre-compile option for SET_PIN_DIRECTION API*/
#define PORT_SET_PIN_DIRECTION_API           (STD_ON) 

/* Pre-compile option for Version Info API */
#define PORT_VERSION_INFO_API                (STD_ON)

/* Pre-compile option for SET_PIN_MODE_API */
#define PORT_SET_PIN_MODE_API                (STD_ON)
   
/* Number of the configured port_Channels */
#define PORT_CONFIGURED_CHANNLES              (43U)

/* PORT Configured Port ID's  */

#define PortConf_PORTA_NUM                (Port_PinType)0 /* PORTA */
#define PortConf_PORTB_NUM                (Port_PinType)1 /* PORTB */
#define PortConf_PORTC_NUM                (Port_PinType)2 /* PORTC */
#define PortConf_PORTD_NUM                (Port_PinType)3 /* PORTD */
#define PortConf_PORTE_NUM                (Port_PinType)4 /* PORTE */
#define PortConf_PORTF_NUM                (Port_PinType)5 /* PORTF */

/* PORT Configured Channel ID's */

#define PortConf_pin0_CHANNEL_NUM                 (Port_PinType)0 /* PIN0 */
#define PortConf_pin1_CHANNEL_NUM                 (Port_PinType)1 /* PIN1 */
#define PortConf_pin2_CHANNEL_NUM                 (Port_PinType)2 /* PIN2 */
#define PortConf_pin3_CHANNEL_NUM                 (Port_PinType)3 /* PIN3 */
#define PortConf_pin4_CHANNEL_NUM                 (Port_PinType)4 /* PIN4 */
#define PortConf_pin5_CHANNEL_NUM                 (Port_PinType)5 /* PIN5 */
#define PortConf_pin6_CHANNEL_NUM                 (Port_PinType)6 /* PIN6 */
#define PortConf_pin7_CHANNEL_NUM                 (Port_PinType)7 /* PIN7 */

#endif /* PORT_CFG_H */
                                                 
 

