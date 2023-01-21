#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("size char pointer %u\n", sizeof(char*));
    printf("size char %u\n", sizeof(char));
    perror("not implemented");
    return 1;
}
