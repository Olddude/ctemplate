#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("size char pointer %lu\n", sizeof(char*));
    printf("size char %lu\n", sizeof(char));
    perror("not implemented");
    return 1;
}
