#include <stdio.h>
#include <stdlib.h>

#include "worker.h"

int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        perror("Usage ./bin/ctemplate-cli <csv file path> <num of threads> <queue length>");
        return 1;
    }
    FILE *csv_file = fopen(argv[1], "r");
    if (!csv_file)
    {
        perror("fopen");
        return 2;
    }
    char line[1024];
    if (fgets(line, sizeof(line), csv_file)) {
        printf("columns are: %s", line);
    }
    read_csv_file(csv_file, atoi(argv[2]), atoi(argv[3]));
    return 0;
}
