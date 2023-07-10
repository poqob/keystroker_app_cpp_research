#if !defined(LOGGER)
#define LOGGER
#include "iostream"
#include "Log.h"
using namespace std;
class Logger
{
private:
    Log *log;

public:
    Logger();
    ~Logger();
    // create new log
    void logging(string);

    // method private
private:
    void showLog(Log *log);
    void destroyLog(Log *log);
};

#endif // LOGGER
