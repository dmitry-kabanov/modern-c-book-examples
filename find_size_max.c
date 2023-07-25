#include <stdio.h>
#include <stdint.h>


int main(int argc, char *argv[])
{
    printf("Largest integer on this computer is %zu\n", SIZE_MAX);
    printf("Integer type takes %zu bytes in memory\n", sizeof(int));
    return 0;
}
