#ifndef TESTS_H
#define TESTS_H

#include <setjmp.h>

#include "common.h"

bool list_test();

void exec_tests(jmp_buf buf);

int main(int argc, char *argv[]);

#endif
