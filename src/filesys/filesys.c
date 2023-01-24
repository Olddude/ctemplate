#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "filesys.h"

int write_text(const char* dest_path, const char* text) {
    FILE *dest = fopen(dest_path, "w");
    if (dest == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(text, sizeof(char), strlen(text), dest);
    fclose(dest);
    return 0;
}
