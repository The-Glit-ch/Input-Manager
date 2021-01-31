#pragma once

#include <Windows.h>
#include <iostream>

using namespace std;

class KeyBoardController
{
public: void SimulateKeyPress(int HexKey,INPUT InputObject)
{
    InputObject.ki.wVk = HexKey;
    InputObject.ki.dwFlags = 0;
    SendInput(1, &InputObject, sizeof(InputObject));
}
};

