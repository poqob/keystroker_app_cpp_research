#if !defined(APP)
#define APP
#define WINVER 0x0500

#include "windows.h"
#include "iostream"
#include "Logger.h"
#include "Winuser.h"
using namespace std;

class App
{
private:
    Logger *logger;

public:
    // constructor
    App(Logger *);

    // makes combination of keystrokes
    void Call();

    // destructor
    ~App();
};

#endif // APP
