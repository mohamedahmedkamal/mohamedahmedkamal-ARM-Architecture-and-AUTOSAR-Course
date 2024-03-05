 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: Mohamed Ahmed Kamal
 ******************************************************************************/

#ifndef PORT_H
#define PORT_H

/* Id for the company in the AUTOSAR
 * for example Mohamed's ID = 1000 :) */
#define PORT_VENDOR_ID    (1000U)

/* PORT Module Id */
#define PORT_MODULE_ID    (120U)

/* PORT Instance Id */
#define PORT_INSTANCE_ID  (0U)

/*
 * Module Version 1.0.0
 */
#define PORT_SW_MAJOR_VERSION           (1U)
#define PORT_SW_MINOR_VERSION           (0U)
#define PORT_SW_PATCH_VERSION           (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_AR_RELEASE_MAJOR_VERSION   (4U)
#define PORT_AR_RELEASE_MINOR_VERSION   (0U)
#define PORT_AR_RELEASE_PATCH_VERSION   (3U)

/*
 * Macros for PORT Status
 */
#define PORT_INITIALIZED                (1U)
#define PORT_NOT_INITIALIZED            (0U)

/* Standard AUTOSAR types */
#include "Std_Types.h"

/* AUTOSAR checking between Std Types and PORT Modules */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Std_Types.h does not match the expected version"
#endif

/* PORT Pre-Compile Configuration Header file */
#include "Port_Cfg.h"

/* AUTOSAR Version checking between Port_Cfg.h and Port.h files */
#if ((PORT_CFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Port_Cfg.h does not match the expected version"
#endif

/* Software Version checking between Port_Cfg.h and Port.h files */
#if ((PORT_CFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_CFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_CFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of Port_Cfg.h does not match the expected version"
#endif

/* Non AUTOSAR files */
#include "Common_Macros.h"

   /******************************************************************************
 *                      API Service Id Macros                                 *
 ******************************************************************************/

/*Service ID for Port_Init*/   
#define Port_Init_SID                                 (uint8)0x00
                       
/*Service ID for Port_SetPinDirection*/   
#define Port_SetPinDirection_SID                      (uint8)0x01
   
/*Service ID for Port_RefreshPortDirection*/
#define Port_RefreshPortDirection_SID                 (uint8)0x02
   
/*Service ID for Port_GetVersionInfo*/
#define Port_GetVersionInfo_SID                       (uint8)0x03
   
/*Service ID for  Port_SetPinMode*/
#define Port_SetPinMode_SID                           (uint8)0x04
/*******************************************************************************
 *                      DET Error Codes                                        *
 *******************************************************************************/
/* Invalid Port Pin ID requested */
#define PORT_E_PARAM_PIN                      (uint8)0x0A

/* Port Pin not configured as changeable */
#define PORT_E_DIRECTION_UNCHANGEABLE         (uint8)0x0B

/* API Port_Init service called with wrong parameter */
#define PORT_E_PARAM_CONFIG                   (uint8)0x0C

/* API Port_SetPinMode service called when mode is unchangeable */
#define PORT_E_PARAM_INVALID_MODE             (uint8)0x0D

/* API Port_SetPinMode service called when mode is unchangeable */
#define PORT_E_MODE_UNCHANGEABLE              (uint8)0x0E

/* API service called without module initialization */
#define PORT_E_UNINIT                         (uint8)0x0F
   
/*APIs called with a Null*/
#define PORT_E_PARAM_POINTER                  (uint8)0x1
   
/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/

/* Description: Data type for the symbolic name of a port pin API */
typedef uint8 Port_PinType;

/* Description: Data type for Different port pin modes API*/
typedef uint8 Port_PinModeType;

/* Description: Port Pin Level value from Port pin list */
typedef enum
{
	LEVEL_LOW,LEVEL_HIGH  
}Pin_LevelValue;

/* Description: Enum to hold PIN direction API */
typedef enum
{
    PORT_PIN_IN,PORT_PIN_OUT
}Port_PinDirectionType;

/* Description: Enum to hold internal resistor type for PIN */
typedef enum
{
    OFF,PULL_UP,PULL_DOWN
}Port_InternalResistor;

/* Supproted Modes list for use with Port_Init() function */
typedef enum
{
	MODE_ADC,            /* Analog Digital Converter Mode */
	MODE_ALT1,           /* Alternative mode 1*/
	MODE_ALT2,           /* Alternative mode 2*/
	MODE_ALT3,           /* Alternative mode 3*/
	MODE_ALT4,           /* Alternative mode 4*/
	MODE_ALT5,           /* Alternative mode 5*/
	MODE_ALT6,           /* Alternative mode 6*/
	MODE_ALT7,           /* Alternative mode 7*/
	MODE_ALT8,           /* Alternative mode 8*/
	MODE_ALT9,           /* Alternative mode 9*/
        MODE_ALT14 = 14,     /* Alternative mode 14*/
	MODE_DIO,            /* DIO mode */
}Pin_InitialMode;

/* Description: Structure to configure each individual PIN:
 *	1. the PORT Which the pin belongs to. 0, 1, 2, 3, 4 or 5
 *	2. the number of the pin in the PORT.
 *      3. the direction of pin --> INPUT or OUTPUT
 *      4. the internal resistor --> Disable, Pull up or Pull down
 *      5. initial port pin value --> (high, low)
 *      6. initial port pin mode --> (ADC, DIO, 9 ALTERNATIVE MODES)
 *      7. pin direction changeable --> (TRUE, FALSE)
 *      8. pin mode changeable --> (TRUE,FALSE)
 */
typedef struct 
{
    uint8 port_num;                     /* number of port A,B,C,D,E,F */
    uint8 pin_num;                      /* number of pin */
    Port_PinDirectionType direction;       /* direction of pin (INPUT/OUTPUT) */
    Port_InternalResistor resistor;   /*Activation of internal pull-ups (OFF/PULL_UP/PULL_DOWN) - optional parameter*/
    Pin_LevelValue initial_value;    /*inital value of pin (LOW/HIGH)*/
    Pin_InitialMode Mode;           /* Modes : DIO/ADC/ 9 ALTERNATIVE MODES */
   uint8 pin_dir_changeable;			/* STD_ON,STD_OFF 							*/
    uint8 pin_mode_changeable;			/* STD_ON,STD_OFF 							*/
}Port_ConfigChannels;

/* Data Structure required for initializing the Port Driver API*/
typedef struct Port_ConfigType
{
	Port_ConfigChannels Port_Channels[PORT_CONFIGURED_CHANNLES];  /* Array of 43 strucutres each struct contian config of 1 pin */
} Port_ConfigType;

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

/* Description: Initializes the Port Driver module API*/
void Port_Init(const Port_ConfigType *ConfigPtr);

/* Description: Sets the port pin direction API*/
#if (PORT_SET_PIN_DIRECTION_API == STD_ON)
void Port_SetPinDirection(Port_PinType Pin, Port_PinDirectionType Direction);
#endif
/* Description: Refreshes port direction API */
void Port_RefreshPortDirection(void);

/* Description: Returns the version information of this module API */
#if (PORT_VERSION_INFO_API == STD_ON)
void Port_GetVersionInfo( Std_VersionInfoType* versioninfo);
#endif 

/* Description: Sets the port pin mode API*/
#if (PORT_SET_PIN_MODE_API == STD_ON)
void Port_SetPinMode(Port_PinType Pin, Port_PinModeType Mode);
#endif 
/*******************************************************************************
 *                       External Variables                                    *
 *******************************************************************************/

/* Extern PB structures to be used by Port and other modules */
extern const Port_ConfigType Port_Configuration;

#endif /* PORT_H */
