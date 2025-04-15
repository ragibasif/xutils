// demo.c

#include "xdlog.h"
#include <stdio.h>

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;
    printf("Testing xdlog printf macro!\n");
    fprintf(stderr, "Testing xdlog fprintf macro!\n");
    return 0;
}
