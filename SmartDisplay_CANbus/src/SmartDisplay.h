
/* File generated by gen_cfile.py. Should not be modified. */

#ifndef SMARTDISPLAY_H
#define SMARTDISPLAY_H

#include "data.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Prototypes of function provided by object dictionnary */
UNS32 SmartDisplay_valueRangeTest (UNS8 typeValue, void * value);
const indextable * SmartDisplay_scanIndexOD (CO_Data *d, UNS16 wIndex, UNS32 * errorCode);

/* Master node data struct */
extern CO_Data SmartDisplay_Data;
extern UNS8 Obj01_type;		/* Mapped at index 0x2000, subindex 0x01 */
extern UNS8 Obj01_reserve1;		/* Mapped at index 0x2000, subindex 0x02 */
extern INTEGER16 Obj01_posX;		/* Mapped at index 0x2000, subindex 0x03 */
extern INTEGER16 Obj01_posY;		/* Mapped at index 0x2000, subindex 0x04 */
extern UNS16 Obj01_style;		/* Mapped at index 0x2000, subindex 0x05 */
extern INTEGER16 Obj01_reserve2;		/* Mapped at index 0x2000, subindex 0x06 */
extern UNS16 Obj01_setValue;		/* Mapped at index 0x2000, subindex 0x07 */
extern UNS16 Obj01_getValue;		/* Mapped at index 0x2000, subindex 0x08 */
extern UNS8 Obj01_buffer[10];		/* Mapped at index 0x2000, subindex 0x09 */
extern UNS8 Obj02_type;		/* Mapped at index 0x2001, subindex 0x01 */
extern UNS8 Obj02_reserve1;		/* Mapped at index 0x2001, subindex 0x02 */
extern INTEGER16 Obj02_posX;		/* Mapped at index 0x2001, subindex 0x03 */
extern INTEGER16 Obj02_posY;		/* Mapped at index 0x2001, subindex 0x04 */
extern UNS16 Obj02_style;		/* Mapped at index 0x2001, subindex 0x05 */
extern INTEGER16 Obj02_reserve2;		/* Mapped at index 0x2001, subindex 0x06 */
extern UNS16 Obj02_setValue;		/* Mapped at index 0x2001, subindex 0x07 */
extern UNS16 Obj02_getValue;		/* Mapped at index 0x2001, subindex 0x08 */
extern UNS8 Obj02_buffer[10];		/* Mapped at index 0x2001, subindex 0x09 */
extern UNS8 Obj03_type;		/* Mapped at index 0x2002, subindex 0x01 */
extern UNS8 Obj03_reserve1;		/* Mapped at index 0x2002, subindex 0x02 */
extern INTEGER16 Obj03_posX;		/* Mapped at index 0x2002, subindex 0x03 */
extern INTEGER16 Obj03_posY;		/* Mapped at index 0x2002, subindex 0x04 */
extern UNS16 Obj03_style;		/* Mapped at index 0x2002, subindex 0x05 */
extern INTEGER16 Obj03_reserve2;		/* Mapped at index 0x2002, subindex 0x06 */
extern UNS16 Obj03_setValue;		/* Mapped at index 0x2002, subindex 0x07 */
extern UNS16 Obj03_getValue;		/* Mapped at index 0x2002, subindex 0x08 */
extern UNS8 Obj03_buffer[10];		/* Mapped at index 0x2002, subindex 0x09 */
extern UNS8 Obj04_type;		/* Mapped at index 0x2003, subindex 0x01 */
extern UNS8 Obj04_reserve1;		/* Mapped at index 0x2003, subindex 0x02 */
extern INTEGER16 Obj04_posX;		/* Mapped at index 0x2003, subindex 0x03 */
extern INTEGER16 Obj04_posY;		/* Mapped at index 0x2003, subindex 0x04 */
extern UNS16 Obj04_style;		/* Mapped at index 0x2003, subindex 0x05 */
extern INTEGER16 Obj04_reserve2;		/* Mapped at index 0x2003, subindex 0x06 */
extern UNS16 Obj04_setValue;		/* Mapped at index 0x2003, subindex 0x07 */
extern UNS16 Obj04_getValue;		/* Mapped at index 0x2003, subindex 0x08 */
extern UNS8 Obj04_buffer[10];		/* Mapped at index 0x2003, subindex 0x09 */
extern UNS8 Obj05_type;		/* Mapped at index 0x2004, subindex 0x01 */
extern UNS8 Obj05_reserve1;		/* Mapped at index 0x2004, subindex 0x02 */
extern INTEGER16 Obj05_posX;		/* Mapped at index 0x2004, subindex 0x03 */
extern INTEGER16 Obj05_posY;		/* Mapped at index 0x2004, subindex 0x04 */
extern UNS16 Obj05_style;		/* Mapped at index 0x2004, subindex 0x05 */
extern INTEGER16 Obj05_reserve2;		/* Mapped at index 0x2004, subindex 0x06 */
extern UNS16 Obj05_setValue;		/* Mapped at index 0x2004, subindex 0x07 */
extern UNS16 Obj05_getValue;		/* Mapped at index 0x2004, subindex 0x08 */
extern UNS8 Obj05_buffer[10];		/* Mapped at index 0x2004, subindex 0x09 */
extern UNS8 Obj06_type;		/* Mapped at index 0x2005, subindex 0x01 */
extern UNS8 Obj06_reserve1;		/* Mapped at index 0x2005, subindex 0x02 */
extern INTEGER16 Obj06_posX;		/* Mapped at index 0x2005, subindex 0x03 */
extern INTEGER16 Obj06_posY;		/* Mapped at index 0x2005, subindex 0x04 */
extern UNS16 Obj06_style;		/* Mapped at index 0x2005, subindex 0x05 */
extern INTEGER16 Obj06_reserve2;		/* Mapped at index 0x2005, subindex 0x06 */
extern UNS16 Obj06_setValue;		/* Mapped at index 0x2005, subindex 0x07 */
extern UNS16 Obj06_getValue;		/* Mapped at index 0x2005, subindex 0x08 */
extern UNS8 Obj06_buffer[10];		/* Mapped at index 0x2005, subindex 0x09 */
extern UNS8 Obj07_type;		/* Mapped at index 0x2006, subindex 0x01 */
extern UNS8 Obj07_reserve1;		/* Mapped at index 0x2006, subindex 0x02 */
extern INTEGER16 Obj07_posX;		/* Mapped at index 0x2006, subindex 0x03 */
extern INTEGER16 Obj07_posY;		/* Mapped at index 0x2006, subindex 0x04 */
extern UNS16 Obj07_style;		/* Mapped at index 0x2006, subindex 0x05 */
extern INTEGER16 Obj07_reserve2;		/* Mapped at index 0x2006, subindex 0x06 */
extern UNS16 Obj07_setValue;		/* Mapped at index 0x2006, subindex 0x07 */
extern UNS16 Obj07_getValue;		/* Mapped at index 0x2006, subindex 0x08 */
extern UNS8 Obj07_buffer[10];		/* Mapped at index 0x2006, subindex 0x09 */
extern UNS8 Obj08_type;		/* Mapped at index 0x2007, subindex 0x01 */
extern UNS8 Obj08_reserve1;		/* Mapped at index 0x2007, subindex 0x02 */
extern INTEGER16 Obj08_posX;		/* Mapped at index 0x2007, subindex 0x03 */
extern INTEGER16 Obj08_posY;		/* Mapped at index 0x2007, subindex 0x04 */
extern UNS16 Obj08_style;		/* Mapped at index 0x2007, subindex 0x05 */
extern INTEGER16 Obj08_reserve2;		/* Mapped at index 0x2007, subindex 0x06 */
extern UNS16 Obj08_setValue;		/* Mapped at index 0x2007, subindex 0x07 */
extern UNS16 Obj08_getValue;		/* Mapped at index 0x2007, subindex 0x08 */
extern UNS8 Obj08_buffer[10];		/* Mapped at index 0x2007, subindex 0x09 */
extern UNS8 Obj09_type;		/* Mapped at index 0x2008, subindex 0x01 */
extern UNS8 Obj09_reserve1;		/* Mapped at index 0x2008, subindex 0x02 */
extern INTEGER16 Obj09_posX;		/* Mapped at index 0x2008, subindex 0x03 */
extern INTEGER16 Obj09_posY;		/* Mapped at index 0x2008, subindex 0x04 */
extern UNS16 Obj09_style;		/* Mapped at index 0x2008, subindex 0x05 */
extern INTEGER16 Obj09_reserve2;		/* Mapped at index 0x2008, subindex 0x06 */
extern UNS16 Obj09_setValue;		/* Mapped at index 0x2008, subindex 0x07 */
extern UNS16 Obj09_getValue;		/* Mapped at index 0x2008, subindex 0x08 */
extern UNS8 Obj09_buffer[10];		/* Mapped at index 0x2008, subindex 0x09 */
extern UNS8 Obj10_type;		/* Mapped at index 0x2009, subindex 0x01 */
extern UNS8 Obj10_reserve1;		/* Mapped at index 0x2009, subindex 0x02 */
extern INTEGER16 Obj10_posX;		/* Mapped at index 0x2009, subindex 0x03 */
extern INTEGER16 Obj10_posY;		/* Mapped at index 0x2009, subindex 0x04 */
extern UNS16 Obj10_style;		/* Mapped at index 0x2009, subindex 0x05 */
extern INTEGER16 Obj10_reserve2;		/* Mapped at index 0x2009, subindex 0x06 */
extern UNS16 Obj10_setValue;		/* Mapped at index 0x2009, subindex 0x07 */
extern UNS16 Obj10_getValue;		/* Mapped at index 0x2009, subindex 0x08 */
extern UNS8 Obj10_buffer[10];		/* Mapped at index 0x2009, subindex 0x09 */
extern UNS8 Background;		/* Mapped at index 0x2100, subindex 0x00*/
extern UNS8 Backlight;		/* Mapped at index 0x2101, subindex 0x00*/
extern UNS8 Buzzer_Cycle;		/* Mapped at index 0x2102, subindex 0x01 */
extern UNS8 Buzzer_High;		/* Mapped at index 0x2102, subindex 0x02 */
extern UNS8 Buzzer_Low;		/* Mapped at index 0x2102, subindex 0x03 */
extern UNS8 Buzzer_Active;		/* Mapped at index 0x2102, subindex 0x04 */
extern UNS8 Page_Count;		/* Mapped at index 0x2103, subindex 0x01 */
extern UNS8 Page_Index;		/* Mapped at index 0x2103, subindex 0x02 */
extern UNS8 Mode_View;		/* Mapped at index 0x2104, subindex 0x01 */
extern UNS32 EnteringBootMode;		/* Mapped at index 0x3000, subindex 0x00*/
extern UNS32 EnterTestMode;		/* Mapped at index 0x3001, subindex 0x00*/
extern INTEGER32 Features_features;		/* Mapped at index 0x5000, subindex 0x01 */
extern INTEGER32 Features_reserve1;		/* Mapped at index 0x5000, subindex 0x02 */
extern INTEGER32 Features_reserve2;		/* Mapped at index 0x5000, subindex 0x03 */
extern INTEGER32 Features_reserve3;		/* Mapped at index 0x5000, subindex 0x04 */

#ifdef __cplusplus
}
#endif

#endif // SMARTDISPLAY_H
