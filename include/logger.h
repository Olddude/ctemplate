#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>

enum LogLevel {
    DEBUG,
    INFO,
    WARNING,
    ERROR
};

void log_message(enum LogLevel level, const char* message);

#endif
