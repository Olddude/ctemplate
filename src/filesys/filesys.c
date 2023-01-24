#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

#include "filesys.h"

int make_path(const char* file_path) {
    char* dir_path = strdup(file_path);
    char* p = strrchr(dir_path, '/');
    if (p) {
        *p = '\0';
        if (mkdir(dir_path, S_IRWXU) != 0 && errno != EEXIST) {
            int ret = make_path(dir_path);
            if (ret != 0) {
                free(dir_path);
                return ret;
            }
            if (mkdir(dir_path, S_IRWXU) != 0 && errno != EEXIST) {
                free(dir_path);
                return -1;
            }
        }
    }
    free(dir_path);
    return 0;
}

int write_text(const char* dest_path, const char* text) {
    if (make_path(dest_path) != 0) {
        printf("Could not make path!\n");
        return 2;
    }
    FILE *dest = fopen(dest_path, "w");
    if (dest == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(text, sizeof(char), strlen(text), dest);
    fclose(dest);
    return 0;
}
