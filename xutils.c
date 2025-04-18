#include "xutils.h"

void x_location(const char *file, unsigned int line, const char *function) {
    printf("[%s%sfile: %s line: %u function: %s%s] ", CYAN, ITALIC, file, line,
           function, RESET);
}

void x_printf(const char *file, unsigned int line, const char *function,
              const char *format, ...) {
    va_list args;
    va_start(args, format);
    printf("(%s%s%s%s) ", MAGENTA, BOLD, "printf", RESET);
    x_location(file, line, function);
    vprintf(format, args); // Print the actual message
    va_end(args);
}

void x_fprintf(const char *file, unsigned int line, const char *function,
               FILE *stream, const char *format, ...) {
    va_list args;
    va_start(args, format);
    printf("(%s%s%s%s) ", MAGENTA, BOLD, "fprintf", RESET);
    x_location(file, line, function);
    vfprintf(stream, format, args); // Print the actual message
    va_end(args);
}

extern void integer_to_binary(unsigned int number) {
    char str[9];
    size_t i;
    for (i = 8; i > 0; i--) {
        str[i - 1] = (number & 1) ? '1' : '0';
        number >>= 1;
    }
    str[8] = '\0';
    printf("%s\n", str);
}
