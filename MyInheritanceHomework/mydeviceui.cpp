#include "mydeviceui.h"

MyDeviceUI::MyDeviceUI()
{

}

MyDeviceUI::~MyDeviceUI()
{
    delete objectDeviceMouse;
    delete objectDeviceTouchPad;
    delete objectDeviceDisplay;
}

void MyDeviceUI::uiShowMenu()
{
    cout << endl;
    cout << "DEVICE MENU" << endl;
    cout << "===========" << endl;
    cout << "1: Set Mouse Information" << endl;
    cout << "2: Set Touch Pad Information" << endl;
    cout << "3: Set Display Information" << endl;
    cout << "4: Show Devices Information" << endl;
    cout << "5: Finish" << endl;
    cout << endl;
}

void MyDeviceUI::uiSetMouseInformation()
{
    cout << "SET MOUSE INFORMATION" << endl;
    cout << "=====================" << endl;
    cout << "Set Device ID: ";
    objectDeviceMouse->setDeviceID();
    cout << "Set PrimaryButton: ";
    objectDeviceMouse->setPrimaryButton();
}

void MyDeviceUI::uiSetTouchPadInformation()
{
    cout << "SET TOUCH PAD INFORMATION" << endl;
    cout << "=========================" << endl;
    cout << "Set Device ID: ";
    objectDeviceTouchPad->setDeviceID();
    cout << "Set Touchpad Sensitivity: ";
    objectDeviceTouchPad->setTouchPadSensitivity();
}

void MyDeviceUI::uiSetDisplayInformation()
{
    cout << "SET DISPLAY INFORMATION" << endl;
    cout << "=========================" << endl;
    cout << "Set Device ID: ";
    objectDeviceDisplay->setDeviceID();
    cout << "Set Display Resolution: ";
    objectDeviceDisplay->setDisplayResolution();
}

void MyDeviceUI::uiShowDeviceInformation()
{
    cout << "DEVICES INFORMATION" << endl;
    cout << "===================" << endl;
    cout << "Device Mouse ID: ";
    cout << objectDeviceMouse->getDeviceID() << endl;
    cout << "Device Mouse Primary Button: ";
    cout << objectDeviceMouse->getPrimaryButton() << endl;
    cout << "Device Touch Pad ID: ";
    cout << objectDeviceTouchPad->getDeviceID() << endl;
    cout << "Device Touch Pad Sensitivity";
    cout << objectDeviceTouchPad->getTouchPadSensitivity() << endl;
    cout << "Device Display ID: ";
    cout << objectDeviceDisplay->getDeviceID() << endl;
    cout << "Device Display Resolution: ";
    cout << objectDeviceDisplay->getDisplayResolution() << endl;
}
