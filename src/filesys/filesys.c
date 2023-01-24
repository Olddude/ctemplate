#include <stdio.h>
#include <string.h>

#include "filesys.h"

int write_text(const char* dest_path, char* text) {
    FILE *dest = fopen(dest_path, "w");
    if (dest == NULL) {
        perror("dest is null");
        return 1;
    }
    char buffer[BUFFER_SIZE];
    strcpy(buffer, text);
    fwrite(buffer, sizeof(char), sizeof(buffer), dest);
    fclose(dest);
    return 0;
}

