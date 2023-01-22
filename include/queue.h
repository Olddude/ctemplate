#ifndef WORKER_H
#define WORKER_H

#include <stdio.h>

typedef struct
{
    char **lines;
    int head;
    int tail;
    int size;
    int count;
} QUEUE;

void init_queue(int size);

void enqueue(char *line);

char *dequeue();

void *queue_thread(void *thread_arg);

void queue_from_csv(FILE *file, int num_threads, int queue_size);

#endif
