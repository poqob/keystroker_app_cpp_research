#include "../include/app.h"
#include "../include/Timer.hpp"
#include "../include/Interval.h"
#include "iostream"
using namespace std;

void function()
{
    cout << "specified function called." << endl;
}

int main()
{
    Logger *logger = new Logger();
    App *app = new App(logger);
    Timer *timer = new Timer();
    app->Call();

    // Interval().run(1, function, 3);

    delete app;
    delete logger;
    delete timer;
    return 0;
}
