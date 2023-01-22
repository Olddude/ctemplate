#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "queue/queue.h"
#include "benchmark/benchmark.h"
#include "csv/csv.h"
#include "validator/validator.h"

int main(int argc, char *argv[])
{
    int valid = validate(argc, argv);
    clock_t start_time = start();
    char *file_path = argv[1];
    FILE *csv_file = read_csv(file_path);
    print_columns(csv_file);
    int num_threads = atoi(argv[2]);
    int queue_size = atoi(argv[3]);
    queue_from_csv(csv_file, num_threads, queue_size);
    measure_elapsed_time(start_time);
    return 0;
}
