 /******************************************************************************
 *
 * Module: Det
 *
 * File Name: Det.c
 *
 * Description:  Det stores the development errors reported by other modules.
 *
 * Author: Mohamed Tarek
 ******************************************************************************/

#include "Det.h"

Std_ReturnType Det_ReportError( uint16 ModuleId,
                      uint8 InstanceId,
                      uint8 ApiId,
                      uint8 ErrorId )
{
    while(1)
    {

    }
    return E_OK;  /* Warning here is mandatory as it will never reach return as it is while(1) statment which is always true   */
}
