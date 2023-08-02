#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[argc + 1])
{
    size_t const len = strlen(argv[0]);   // Compute the length of program name   
    char name[len+1];   // creates VLA

    memcpy(name, argv[0], len);
    name[len] = 0;

    if (!strcmp(name, argv[0])) {
        printf("Program name \"%s\" successfully copied.\n", name);
    } else {
        printf("Copying \"%s\" lead to different string \"%s\"\n",
                argv[0], name);
    }
    return 0;
}

