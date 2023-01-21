#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "worker.h"

int main(int argc, char *argv[])
{
    clock_t start_time = clock();
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
    char line[16384];
    if (fgets(line, sizeof(line), csv_file)) {
        printf("columns are: %s", line);
    }
    read_csv_file(csv_file, atoi(argv[2]), atoi(argv[3]));
    clock_t end_time = clock();
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    if (elapsed_time < 60) {
        printf("Elapsed time: %f seconds\n", elapsed_time);
    }
    if (elapsed_time >= 60){
        double minutes = elapsed_time / 60;
        printf("Elapsed time: %f minutes\n", minutes);
    }
    if (elapsed_time >= 3600){
        double hours = elapsed_time / 3600;
        printf("Elapsed time: %f hours\n", hours);
    }
    return 0;
}
