/**
 * @file dlog.c
 * @author [Ragib Asif](https://github.com/ragibasif)
 */

#include <stdio.h>
#include "dlog.h"

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


int main(int argc, char **argv) {
  (void)argc;
  (void)argv;
  DLOG("DLOG\n");
  DLOG_SUCCESS("DLOG SUCCESS\n");
  DLOG_WARNING("DLOG WARNING\n");
  DLOG_ERROR("DLOG ERROR\n");
  printf("Hello, world!\n");
  return 0;
}
