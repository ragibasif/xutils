/**
 * @file xdlog.h
 * @author [Ragib Asif](https://github.com/ragibasif)
 */

#ifndef __XDLOG_H__
#define __XDLOG_H__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include <stdio.h>
#include <stdarg.h>

#define RED "\x1b[0;91m"
#define GREEN "\x1b[0;92m"
#define YELLOW "\x1b[0;93m"
#define BLUE "\x1b[0;94m"
#define MAGENTA "\x1b[0;95m"
#define CYAN "\x1b[0;96m"
#define ITALIC "\x1b[3m"
#define BOLD "\x1b[1m"
#define RESET "\x1b[0m"

extern void debugLog(const char *prefix, const char *color, const char *file, unsigned int line, const char *function, const char *format, ...);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __XDLOG_H__

#ifdef XDLOG_IMPLEMENTATION

#include <stdio.h>

#define XDLOG(...) debugLog("LOG\0",BLUE,__FILE__,__LINE__,__func__,__VA_ARGS__)
#define XDLOG_ERROR(...) debugLog("ERROR\0",RED,__FILE__,__LINE__,__func__,__VA_ARGS__)
#define XDLOG_WARNING(...) debugLog("WARNING\0",YELLOW,__FILE__,__LINE__,__func__,__VA_ARGS__)
#define XDLOG_SUCCESS(...) debugLog("SUCCESS\0",GREEN,__FILE__,__LINE__,__func__,__VA_ARGS__)

void debugLog(const char *prefix, const char *color, const char *file, unsigned int line, const char *function, const char *format, ...) {
    va_list args;
    va_start(args, format);
    printf("(%s%s%s) ", MAGENTA, "DLOG",
            RESET);
    printf("%s%s%s %u %s%s ", CYAN, ITALIC, file, line,
            function, RESET);
	printf("[%s%s%s%s] ", color,BOLD,prefix,RESET);
    vprintf(format, args); // Print the actual message
    va_end(args);
}

#endif // DLOG_IMPLEMENTATION
