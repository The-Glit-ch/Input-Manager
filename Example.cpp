#include <iostream>
#include "InputManager.cpp"


INPUT InputManager_KeyboardObject;
KeyBoardController InputManager_KeyboardClass;

int main()
{
    std::cout << "Hello World!\n";
    
    
    //Setting Up Stuff For KeyBoard
    InputManager_KeyboardObject.type = INPUT_KEYBOARD;
    InputManager_KeyboardObject.ki.wScan = 0;
    InputManager_KeyboardObject.ki.time = 0;
    InputManager_KeyboardObject.ki.dwExtraInfo = 0;

    /*
    * 
    * Keyboard Codes can be found here --->https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes?redirectedfrom=MSDN
    * 
    */

    Sleep(5000);
    while (1) {
        Sleep(5);
        InputManager_KeyboardClass.SimulateKeyPress(0x41,InputManager_KeyboardObject);
    }

}
