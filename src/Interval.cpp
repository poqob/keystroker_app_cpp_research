#include "../include/Interval.h"
// Initialize the static member variable
Timer *Interval::timer = nullptr;
void Interval::run(int perSeconds, void (*callbackFunction)(), int limit)
{
    Interval::timer = Interval::timer == nullptr ? new Timer() : Interval::timer;
    Interval::timer->start();

    int _val; // temporary value
    int val;  // real value

    while (true)
    {
        val = (int)Interval::timer->elapsedSeconds();
        if (val % perSeconds == 0 && val != _val)
        {
            callbackFunction();
            // std::cout << "value:" << val << std::endl;
            _val = val;
        }

        if (val == limit)
            break;
    }
}

Interval::Interval()
{
    Interval::timer = new Timer();
}

Interval::~Interval()
{
    delete Interval::timer;
}