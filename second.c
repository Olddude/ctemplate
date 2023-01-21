nclude <string.h>
#include <pthread.h>
#include <queue>

std::queue<char*> lines_to_process;
pthread_mutex_t queue_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t queue_cond = PTHREAD_COND_INITIALIZER;

void* worker_thread_func(void* arg) {
        while (true) {
                    char* line;
                            pthread_mutex_lock(&queue_mutex);
                                    while (lines_to_process.empty()) {
                                                    pthread_cond_wait(&queue_cond, &queue_mutex);
                                                            }
                                            line = lines_to_process.front();
                                                    lines_to_process.pop();
                                                            pthread_mutex_unlock(&queue_mutex);

                                                                    printf("Thread processing: %s", line);
                                                                            // Perform other operations with the line here
                                                                            //         free(line);
                                                                            //             }
                                                                            //                 return NULL;
                                                                            //                 }
                                                                            //
                                                                            //                 void read_csv_file(const char* file_path, int num_threads) {
                                                                            //                     FILE* file = fopen(file_path, "r");
                                                                            //                         if (!file) {
                                                                            //                                 perror("fopen");
                                                                            //                                         return;
                                                                            //                                             }
                                                                            //
                                                                            //                                                 pthread_t threads[num_threads];
                                                                            //                                                     for (int i = 0; i < num_threads; i++) {
                                                                            //                                                             if (pthread_create(&threads[i], NULL, worker_thread_func, NULL) != 0) {
                                                                            //                                                                         perror("pthread_create");
                                                                            //                                                                                     break;
                                                                            //                                                                                             }
                                                                            //                                                                                                 }
                                                                            //
                                                                            //                                                                                                     char line[1024];
                                                                            //                                                                                                         while (fgets(line, sizeof(line), file)) {
                                                                            //                                                                                                                 pthread_mutex_lock(&queue_mutex);
                                                                            //                                                                                                                         lines_to_process.push(strdup(line));
                                                                            //                                                                                                                                 pthread_cond_signal(&queue_cond);
                                                                            //                                                                                                                                         pthread_mutex_unlock(&queue_mutex);
                                                                            //                                                                                                                                             }
                                                                            //
                                                                            //                                                                                                                                                 fclose(file);
                                                                            //                                                                                                                                                     for (int i = 0; i < num_threads; i++) {
                                                                            //                                                                                                                                                             pthread_join(threads[i], NULL);
                                                                            //                                                                                                                                                                 }
                                                                            //                                                                                                                                                                 }
                                                                            //
