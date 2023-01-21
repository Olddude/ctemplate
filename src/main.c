#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "main.h"
#include "queue.h"

int validate(int argc, char* argv[]) {
    if (argc < 4)
    {
        perror("Usage ./bin/ctemplate-cli <csv file path> <num of threads> <queue length>");
        return 1;
    }
    return 0;
}

clock_t start() {
    clock_t time = clock();
    return time;
}

void measure_elapsed_time(clock_t start_time) {
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
}

int main(int argc, char *argv[])
{
    int valid = validate(argc, argv);
    clock_t start_time = start();
    FILE *csv_file = fopen(argv[1], "r");
    if (!csv_file)
    {
        perror("fopen");
        return 2;
    }
    char line[BUFFER_SIZE];
    if (fgets(line, sizeof(line), csv_file)) {
        printf("columns are: %s", line);
    }
    int num_threads = atoi(argv[2]);
    int queue_size = atoi(argv[3]);
    queue_from_csv(csv_file, num_threads, queue_size);
    measure_elapsed_time(start_time);
    return 0;
}
