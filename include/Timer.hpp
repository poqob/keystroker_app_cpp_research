#if !defined(TIMER)
#define TIMER

#include <iostream>
#include <chrono>
#include <ctime>
#include <cmath>

class Timer
{

private:
    std::chrono::time_point<std::chrono::system_clock> m_StartTime;
    std::chrono::time_point<std::chrono::system_clock> m_EndTime;
    bool m_bRunning = false;

public:
    Timer();
    void start();

    void stop();

    double elapsedMilliseconds();

    double elapsedSeconds();

    ~Timer();
};

#endif // TIMER
