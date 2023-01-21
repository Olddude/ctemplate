#include <string.h>
#include <pthread.h>

void* worker_thread_func(void* arg) {
        char* line = (char*)arg;
            printf("Thread processing: %s", line);
                // Perform other operations with the line here
                //     return NULL;
                //     }
                //
                //     void read_csv_file(const char* file_path, void (*worker_thread)(char*)) {
                //         FILE* file = fopen(file_path, "r");
                //             if (!file) {
                //                     perror("fopen");
                //                             return;
                //                                 }
                //
                //                                     char line[1024];
                //                                         pthread_t thread;
                //                                             int rv;
                //                                                 while (fgets(line, sizeof(line), file)) {
                //                                                         if (pthread_create(&thread, NULL, worker_thread, strdup(line)) != 0) {
                //                                                                     perror("pthread_create");
                //                                                                                 break;
                //                                                                                         }
                //                                                                                                 pthread_join(thread, NULL);
                //                                                                                                     }
                //                                                                                                         fclose(file);
                //                                                                                                         }
                //                                                                                                         
