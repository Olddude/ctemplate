#include <stdio.h>
#include <time.h>

#include "benchmark.h"

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
