#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H
#include "devicemouse.h"
#include "devicetouchpad.h"
#include "devicedisplay.h"

class MyDeviceUI
{
public:
    MyDeviceUI();
    ~MyDeviceUI();

    void uiShowMenu();
    void uiSetMouseInformation();
    void uiSetTouchPadInformation();
    void uiSetDisplayInformation();
    void uiShowDeviceInformation();
private:
    DeviceMouse *objectDeviceMouse = new DeviceMouse;
    DeviceTouchPad *objectDeviceTouchPad = new DeviceTouchPad;
    DeviceDisplay *objectDeviceDisplay = new DeviceDisplay;
};

#endif // MYDEVICEUI_H
