#include <stdio.h>
#include <stdlib.h>

#include "worker.h"

int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        printf("Usage %s <csv file path> <num of threads> <queue length>", argv[0]);
        return 1;
    }
    read_csv_file(argv[1], atoi(argv[2]), atoi(argv[3]));
    return 0;
}
