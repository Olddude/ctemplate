    for (int i = 0; i < num_threads; i++) {
                pthread_join(threads[i], NULL);
                    }
    free(queue.lines);
    }

int main(int argc, char* argv[]) {
        if (argc < 4) {
                    printf("Usage: %s <csv file> <number of threads> <queue size>\n", argv[0]);
                            return 1;
                                }

            read_csv_file(argv[1], atoi(argv[2]), atoi(argv[3]));
                return 0;
}

