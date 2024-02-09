#include <iostream>
#include "mydeviceui.h"

using namespace std;

int main()
{
    MyDeviceUI deviceUI;
    bool isRunning = true;

    do{
        deviceUI.uiShowMenu();
        int userSelect;
        cout << "Choose: ";
        cin >> userSelect;

        switch(userSelect){
        case 1:
            deviceUI.uiSetMouseInformation();
            break;
        case 2:
            deviceUI.uiSetTouchPadInformation();
            break;
        case 3:
            deviceUI.uiSetDisplayInformation();
            break;
        case 4:
            deviceUI.uiShowDeviceInformation();
            break;
        case 5:
            isRunning = false;
            break;
        }

    } while(isRunning);

    return 0;
}
