#ifndef LIST_H
#define LIST_H

#define MAX_STRING_LENGTH 16384

typedef struct {
    int length;
    char *values[MAX_STRING_LENGTH];
} LIST;

int init_list(LIST *list);

void add_to_list(LIST *list, char *item);

void print_list(LIST *list);

#endif
