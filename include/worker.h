#ifndef WORKER_H
#define WORKER_H

struct line_queue
{
    char **lines;
    int head;
    int tail;
    int size;
    int count;
};

void init_queue(int size);

void enqueue(char *line);

char *dequeue();

void *worker_thread_func(void *arg);

void read_csv_file(FILE *file, int num_threads, int queue_size);

#endif
