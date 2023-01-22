#ifndef CSV_H
#define CSV_H

#include <stdio.h>

#define BUFFER_SIZE 16384

FILE *read_csv(char *file_path);

void print_columns(FILE *csv_file);

#endif
