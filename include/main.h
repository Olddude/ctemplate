#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 16384

#include <stdio.h>

int validate(int argc, char* argv[]);

FILE *read_csv(char *file_path);

void print_columns(FILE *csv_file);

int main(int argc, char *argv[]);

#endif
