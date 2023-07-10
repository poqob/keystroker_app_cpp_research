#if !defined(LOG)
#define LOG
#include "iostream"
using namespace std;
class Log
{
public:
    string message;
    Log(string);
    ~Log();
};

#endif // LOG
