#include "Includes.h"

int main(int argc, char **argv)
{
    if(argc != 2)
        panic("Usage: %s <Source File>\n", argv[0]);

    char *src = fileReadText(argv[1]);
    printf("src -\n%s\n", src);
    free(src);

    return 0;
}
