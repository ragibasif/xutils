/**
 * @file main.c
 * @author [Ragib Asif](https://github.com/ragibasif)
 */

#include <stdio.h>
#define XDLOG_IMPLEMENTATION
#include "xdlog.h"

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;
    XDLOG("XDLOG\n");
    XDLOG_SUCCESS("XDLOG SUCCESS\n");
    XDLOG_WARNING("XDLOG WARNING\n");
    XDLOG_ERROR("XDLOG ERROR\n");
    printf("Hello, world!\n");
    return 0;
}
