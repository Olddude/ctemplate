#include <stdio.h>
#include <csv_reader.h>

void* worker_thread_func(void* arg) {
    char* line = (char*) arg;
    printf("Thread processing: %s", line);
    // Perform other operations with the line here
    return NULL;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: %s <csv file>\n", argv[0]);
        return 1;
    }
    read_csv_file(argv[1], worker_thread_func);
    return 0;
}

