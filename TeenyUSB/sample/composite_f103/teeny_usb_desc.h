/*
 * Name   :  teeny_usb_desc.h
 * Author :  admin@xtoolbox.org
 * Date   :  2020-11-09 11:55:51

 * Desc   :  This file is auto generate by the TeenyDT
 *           Visit http://dt.tusb.org for more info
 */

/*
  Input source name:  composite_desc.lua
  
  Content type is lua script:
  ------------- lua script begin ------------
--[[
Descripttion : 
version      : 
Author       : Kevincoooool
Date         : 2020-11-06 18:22:50
LastEditors  : Kevincoooool
LastEditTime : 2020-11-09 11:55:47
FilePath     : \TeenyUSB\sample\composite_f103\composite_desc.lua
--]]
return Device {
    strManufacturer = "KSDIY",
    strProduct = "KSDIY CMSIS-DAP DEMO",
    strSerial = "996-996-996",
    idVendor = 0x0483,
    idProduct = 0x0011,
    prefix = "COMP",
    Config {
        USB_HID{
            ReadEp = EndPoint(IN(2),  Interrupt, 16),
            WriteEp = EndPoint(OUT(2), Interrupt, 16),
            report = HID_InOut(16),
        },
        CDC_ACM{
            EndPoint(IN(5),  Interrupt, 16),
            EndPoint(IN(1), BulkDouble, 32),
            EndPoint(OUT(1),  BulkDouble, 32),
        },
        Interface{
            WCID=WinUSB,
            strInterface = "CMSIS-DAP WinUSB",
            GUID="{1D4B2365-4749-48EA-B38A-7C6FDDDD7E26}",
            EndPoint(IN(3),  BulkDouble, 32),
            EndPoint(OUT(3), BulkDouble, 32),
        },
        Interface{
            bInterfaceClass = 0x08,        -- MSC
            bInterfaceSubClass = 0x06,     -- SCSI
            bInterfaceProtocol = 0x50,     -- BOT
            EndPoint(IN(4),  BulkDouble, 64),
            EndPoint(OUT(4), BulkDouble, 64),
        },
   }
}

  ------------- lua script end   ------------
 */
#ifndef __COMP_TEENY_USB_DESC_H__
#define __COMP_TEENY_USB_DESC_H__

#include "teeny_usb_device.h"
extern const tusb_descriptors_t COMP_descriptors;
#endif

