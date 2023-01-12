#include "logger.h"

void log_message(enum LogLevel level, const char* message) {
    const char* level_str;
    switch (level) {
        case DEBUG:
            level_str = "DEBUG";
            break;
        case INFO:
            level_str = "INFO";
            break;
        case WARNING:
            level_str = "WARNING";
            break;
        case ERROR:
            level_str = "ERROR";
            break;
    }
    printf("[%s] %s\n", level_str, message);
}
