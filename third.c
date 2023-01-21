#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

pthread_mutex_t queue_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t queue_cond = PTHREAD_COND_INITIALIZER;

struct line_queue {
        char** lines;
            int head;
                int tail;
                    int size;
                        int count;
};

struct line_queue queue;

void init_queue(int size) {
        queue.lines = (char**)malloc(sizeof(char*) * size);
            queue.head = 0;
                queue.tail = 0;
                    queue.size = size;
                        queue.count = 0;
}

void enqueue(char* line) {
        pthread_mutex_lock(&queue_mutex);
            while (queue.count == queue.size) {
                        pthread_cond_wait(&queue_cond, &queue_mutex);
                            }
                queue.lines[queue.tail] = line;
                    queue.tail = (queue.tail + 1) % queue.size;
                        queue.count++;
                            pthread_cond_signal(&queue_cond);
                                pthread_mutex_unlock(&queue_mutex);
}

char* dequeue() {
        pthread_mutex_lock(&queue_mutex);
            while (queue.count == 0) {
                        pthread_cond_wait(&queue_cond, &queue_mutex);
                            }
                char* line = queue.lines[queue.head];
                    queue.head = (queue.head + 1) % queue.size;
                        queue.count--;
                            pthread_cond_signal(&queue_cond);
                                pthread_mutex_unlock(&queue_mutex);
                                    return line;
}

void* worker_thread_func(void* arg) {
        while (true) {
                    char* line = dequeue();
                            printf("Thread processing: %s", line);
                                    // Perform other operations with the line here
                                    //         free(line);
                                    //             }
                                    //                 return NULL;
                                    //                 }
                                    //
                                    //                 void read_csv_file(const char* file_path, int num_threads, int queue_size) {
                                    //                     FILE* file = fopen(file_path, "r");
                                    //                         if (!file) {
                                    //                                 perror("fopen");
                                    //                                         return;
                                    //                                             }
                                    //
                                    //                                                 init_queue(queue_size);
                                    //                                                     pthread_t threads[num_threads];
                                    //                                                         for (int i = 0; i < num_threads; i++) {
                                    //                                                                 if (pthread_create(&threads[i], NULL, worker_thread_func, NULL) != 0) {
                                    //                                                                             perror("pthread_create");
                                    //                                                                                         break;
                                    //                                                                                                 }
                                    //                                                                                                     }
                                    //
                                    //                                                                                                         char line[1024];
                                    //                                                                                                             while (fgets(line, sizeof(line), file)) {
                                    //                                                                                                                     enqueue(strdup(line));
                                    //                                                                                                                         }
                                    //
                                    //                                                                                                                             fclose(file);
                                    //                                                                                                                                 for (int i = 0; i < num_threads
                                    //
