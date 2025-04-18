// demo.c

#include "xutils.h"
#include <stdio.h>

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;

    integer_to_binary(21);
    integer_to_binary(1);
    integer_to_binary(0);
    integer_to_binary(-1021);
    integer_to_binary(21000000);
    integer_to_binary(17);

    return 0;
}
