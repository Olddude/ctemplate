#include "csv.h"

FILE *read_csv(char *file_path) {
    FILE *csv_file = fopen(file_path, "r");
    if (!csv_file)
    {
        perror("fopen");
        return NULL;
    }
    return csv_file;
}

void print_columns(FILE *csv_file) {
    char columns[BUFFER_SIZE];
    if (fgets(columns, sizeof(columns), csv_file)) {
        printf("columns are: %s", columns);
    }
}
