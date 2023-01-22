#include <stdio.h>

#include "validator.h"

int validate(int argc, char* argv[]) {
    if (argc < 4)
    {
        perror("Usage ./bin/ctemplate-cli <csv file path> <num of threads> <queue length>");
        return 1;
    }
    return 0;
}
