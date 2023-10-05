#include "../include/Timer.hpp"
// start timer
void Timer::start()
{
    m_StartTime = std::chrono::system_clock::now();
    m_bRunning = true;
}

// stop timer
void Timer::stop()
{
    if (m_bRunning != false)
    {
        m_EndTime = std::chrono::system_clock::now();
        m_bRunning = false;
    }
}

double Timer::elapsedMilliseconds()
{
    std::chrono::time_point<std::chrono::system_clock> endTime;

    if (m_bRunning)
    {
        endTime = std::chrono::system_clock::now();
    }
    else
    {
        endTime = m_EndTime;
    }

    return std::chrono::duration_cast<std::chrono::milliseconds>(endTime - m_StartTime).count();
}

double Timer::elapsedSeconds()
{
    return elapsedMilliseconds() / 1000.0;
}

// constructor.
Timer::Timer()
{
    // start();
}

// destructor
Timer::~Timer()
{
    // stop();
    // std::cout << "elapsed time in seconds:" << elapsedSeconds() << std::endl;
}