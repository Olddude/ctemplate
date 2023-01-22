#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"

int init_list(LIST *list) {
    list->length = 0;
    for (int i = 0; i < MAX_STRING_LENGTH; i++) {
        list->values[i] = (char *)malloc(sizeof(char) * MAX_STRING_LENGTH);
    }
    return 0;
}

void add_to_list(LIST *list, char *item) {
    if (list->length < MAX_STRING_LENGTH) {
        strcpy(list->values[list->length], item);
        list->length++;
    } else {
        perror("Error: list is full!\n");
    }
}

void print_list(LIST *list) {
    printf("list length is: %d\n", list->length);
    printf("list values are:\n");
    for (int i = 0; i < list->length; i++) {
        printf("\t%s\n", list->values[i]);
    }
}
