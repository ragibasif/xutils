/**
 * @file dlog.h
 * @author [Ragib Asif](https://github.com/ragibasif)
 */

#ifndef __DLOG_H__
#define __DLOG_H__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include <stdio.h>
#include <stdarg.h>

#define RED "\033[0;91m"
#define GREEN "\033[0;92m"
#define YELLOW "\033[0;93m"
#define BLUE "\033[0;94m"
#define MAGENTA "\033[0;95m"
#define CYAN "\033[0;96m"
#define RESET "\033[0m"


extern void debugLog(const char *color, const char *file, unsigned int line, const char *function, const char *format, ...);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __DLOG_H__

#ifdef DLOG_IMPLEMENTATION

#include <stdio.h>

#define DLOG(...) debugLog(BLUE,__FILE__,__LINE__,__func__,__VA_ARGS__)
#define DLOG_ERROR(...) debugLog(RED,__FILE__,__LINE__,__func__,__VA_ARGS__)
#define DLOG_WARNING(...) debugLog(YELLOW,__FILE__,__LINE__,__func__,__VA_ARGS__)
#define DLOG_SUCCESS(...) debugLog(GREEN,__FILE__,__LINE__,__func__,__VA_ARGS__)

void debugLog(const char *color, const char *file, unsigned int line, const char *function, const char *format, ...) {
    va_list args;
    va_start(args, format);
    printf("(%s%s%s) ", MAGENTA, "DLOG",
            RESET);
    printf("[%s%s %u %s%s] ", CYAN, file, line,
            function, RESET);
    printf("%s", color);
    vprintf(format, args); // Print the actual message
    printf("%s", RESET);
    va_end(args);
}

#endif // DLOG_IMPLEMENTATION
