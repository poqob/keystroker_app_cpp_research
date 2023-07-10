#include "../include/app.h"

using namespace std;

// do the action
void App::Call()
{

    // Example using explicit key code value for 'D' key
    INPUT inputD;
    inputD.type = INPUT_KEYBOARD;
    inputD.ki.wVk = 0x44; // Replace VK_D with explicit value
    inputD.ki.dwFlags = 0;
    inputD.ki.time = 0;
    inputD.ki.dwExtraInfo = 0;

    // Rest of the code for sending input using SendInput

    this->logger->logging("Sending 'Win-D'\r\n");
    INPUT inputs[4] = {};
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = VK_LWIN;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = inputD.ki.wVk;

    inputs[2].type = INPUT_KEYBOARD;
    inputs[2].ki.wVk = inputD.ki.wVk;
    inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

    inputs[3].type = INPUT_KEYBOARD;
    inputs[3].ki.wVk = VK_LWIN;
    inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

    UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
    if (uSent != ARRAYSIZE(inputs))
    {
        this->logger->logging("error.");
    }
}

App::App(Logger *logger)
{
    this->logger = logger;
}

App::~App()
{
}