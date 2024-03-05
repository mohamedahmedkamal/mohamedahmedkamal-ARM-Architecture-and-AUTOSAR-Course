 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Mohamed Ahmed Kamal
 ******************************************************************************/

#include "Port.h"

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

/* PB structure used with Port_Init API */
const Port_ConfigType Port_Configuration = {
                                            /* PortA All Pins configurations */
                PortConf_PORTA_NUM , PortConf_pin0_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTA_NUM , PortConf_pin1_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTA_NUM , PortConf_pin2_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTA_NUM , PortConf_pin3_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTA_NUM , PortConf_pin4_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTA_NUM , PortConf_pin5_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTA_NUM , PortConf_pin6_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTA_NUM , PortConf_pin7_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
                                           /* PortB All Pins configurations */
		PortConf_PORTB_NUM , PortConf_pin0_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTB_NUM , PortConf_pin1_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTB_NUM , PortConf_pin2_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTB_NUM , PortConf_pin3_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTB_NUM , PortConf_pin4_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTB_NUM , PortConf_pin5_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTB_NUM , PortConf_pin6_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTB_NUM , PortConf_pin7_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
                                           /* PortC All Pins configurations */
		PortConf_PORTC_NUM  , PortConf_pin0_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTC_NUM  , PortConf_pin1_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTC_NUM  , PortConf_pin2_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTC_NUM  , PortConf_pin3_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTC_NUM  , PortConf_pin4_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTC_NUM  , PortConf_pin5_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTC_NUM  , PortConf_pin6_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTC_NUM  , PortConf_pin7_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
                                           /* PortD All Pins configurations */
		PortConf_PORTD_NUM , PortConf_pin0_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTD_NUM , PortConf_pin1_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTD_NUM , PortConf_pin2_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTD_NUM , PortConf_pin3_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTD_NUM , PortConf_pin4_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTD_NUM , PortConf_pin5_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTD_NUM , PortConf_pin6_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTD_NUM , PortConf_pin7_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
                                          /* PortE All Pins configurations */
		PortConf_PORTE_NUM , PortConf_pin0_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTE_NUM , PortConf_pin1_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTE_NUM , PortConf_pin2_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTE_NUM , PortConf_pin3_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTE_NUM , PortConf_pin4_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTE_NUM , PortConf_pin5_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
                                          /* PortF All Pins configurations */
		PortConf_PORTF_NUM , PortConf_pin0_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW , MODE_DIO , STD_ON, STD_ON,
		PortConf_PORTF_NUM , PortConf_pin1_CHANNEL_NUM, PORT_PIN_OUT,OFF, LEVEL_LOW, MODE_DIO , STD_ON, STD_ON,  /* Led */
		PortConf_PORTF_NUM , PortConf_pin2_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW, MODE_DIO , STD_ON, STD_ON,   
		PortConf_PORTF_NUM , PortConf_pin3_CHANNEL_NUM, PORT_PIN_IN, OFF, LEVEL_LOW, MODE_DIO , STD_ON, STD_ON,  
		PortConf_PORTF_NUM , PortConf_pin4_CHANNEL_NUM, PORT_PIN_IN, PULL_UP, LEVEL_LOW,  MODE_DIO , STD_ON, STD_ON,  /* SW */
};