// xutils.h

#ifndef __XUTILS_H__
#define __XUTILS_H__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include <stdarg.h>
#include <stdio.h>

#define RED "\x1b[0;91m"
#define GREEN "\x1b[0;92m"
#define YELLOW "\x1b[0;93m"
#define BLUE "\x1b[0;94m"
#define MAGENTA "\x1b[0;95m"
#define CYAN "\x1b[0;96m"
#define ITALIC "\x1b[3m"
#define BOLD "\x1b[1m"
#define RESET "\x1b[0m"

#define X_LOCATION(...) x_location(__FILE__, __LINE__, __func__, __VA_ARGS__)
#define X_PRINTF(...) x_printf(__FILE__, __LINE__, __func__, __VA_ARGS__)
#define X_FPRINTF(f, ...)                                                      \
    x_fprintf(__FILE__, __LINE__, __func__, f, __VA_ARGS__)

extern void x_location(const char *file, unsigned int line,
                       const char *function);
extern void x_printf(const char *file, unsigned int line, const char *function,
                     const char *format, ...);
extern void x_fprintf(const char *file, unsigned int line, const char *function,
                      FILE *stream, const char *format, ...);

extern void integer_to_binary(unsigned int number);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __XUTILS_H__
