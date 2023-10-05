#if !defined(INTERVAL)
#define INTERVAL
#include "Timer.hpp"
class Interval
{

public:
    static Timer *timer;
    Interval();
    ~Interval();
    static void run(int perSeconds, void (*callbackFunction)(), int limit = -1);
};

#endif // INTERVAL
