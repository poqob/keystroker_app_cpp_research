#include "../include/app.h"
#include "iostream"
using namespace std;
int main()
{
    Logger *logger = new Logger();
    App *app = new App(logger);

    app->Call();
    cout << "done\n";

    delete app;
    delete logger;
    return 0;
}