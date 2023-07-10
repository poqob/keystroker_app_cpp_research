#include "../include/Logger.h"

Logger::Logger()
{
}

Logger::~Logger()
{
}

void Logger::logging(string message)
{
    this->log = new Log(message);
    this->showLog(log);
}

void Logger::showLog(Log *log)
{
    cout << log->message << endl;
}

void Logger::destroyLog(Log *log)
{
    delete log;
}