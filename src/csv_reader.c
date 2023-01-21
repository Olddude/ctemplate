#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "csv_reader.h"

void read_csv_file(const char* file_path, void (*worker_thread)(char*)) {
    FILE* file = fopen(file_path, "r");
    if (!file) {
        perror("fopen");
        return;
    }
    char line[1024];
    while (fgets(line, sizeof(line), file)) {
        pthread_t thread;
        if (pthread_create(&thread, NULL, worker_thread, line) != 0) {
            perror("pthread_create");
            break;
        }
    }
    fclose(file);
}

