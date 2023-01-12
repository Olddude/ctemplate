#include <stdio.h>
#include <logger.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s filename\n", argv[0]);
        return 1;
    }
    char *filename = argv[1];
    log_message(DEBUG, filename);
    return 0;
}
