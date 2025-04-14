/**
 * @file main.c
 * @author [Ragib Asif](https://github.com/ragibasif)
 */

#include <stdio.h>
#define DLOG_IMPLEMENTATION
#include "dlog.h"

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
