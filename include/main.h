#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 16384

int main(int argc, char *argv[]);

clock_t start();

void measure_elapsed_time(clock_t start_time);

int validate(int argc, char* argv[]);

#endif
