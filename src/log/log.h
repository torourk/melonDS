#ifndef LOG_H
#define LOG_H

#include <stdio.h>

#define LOG_LEVEL_NONE 0
#define LOG_LEVEL_ERROR 1
#define LOG_LEVEL_WARN 5
#define LOG_LEVEL_DEBUG 10
#define LOG_LEVEL_TRACE 20

#ifndef LOG_LEVEL
#define LOG_LEVEL LOG_LEVEL_DEBUG
#endif // LOG_LEVEL

#define log_error(fmt, ...)               \
    do                                    \
    {                                     \
        if (LOG_LEVEL >= LOG_LEVEL_ERROR) \
            printf(fmt, ##__VA_ARGS__);   \
    } while (0)

#define log_warn(fmt, ...)               \
    do                                   \
    {                                    \
        if (LOG_LEVEL >= LOG_LEVEL_WARN) \
            printf(fmt, ##__VA_ARGS__);  \
    } while (0)

#define log_debug(fmt, ...)               \
    do                                    \
    {                                     \
        if (LOG_LEVEL >= LOG_LEVEL_DEBUG) \
            printf(fmt, ##__VA_ARGS__);   \
    } while (0)

#define log_trace(fmt, ...)               \
    do                                    \
    {                                     \
        if (LOG_LEVEL >= LOG_LEVEL_TRACE) \
            printf(fmt, ##__VA_ARGS__);   \
    } while (0)

#endif // LOG_H
