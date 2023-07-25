#include <stdlib.h>

#include <stdio.h>
#include <tgmath.h>


double dsqrt(double x) {
    return 1 / (2 * sqrt(x));
}


int main(int argc, char *argv[])
{
    if (argc != 3) {
        puts("USAGE: prog func-number x");
        return EXIT_FAILURE;
    }
    int func_num = strtod(argv[1], NULL);
    double x = strtod(argv[2], NULL);

    double f, df;
    switch (func_num) {
        case 1:
            f = sqrt(x);
            df = dsqrt(x);
            break;
        case 2:
            f = sin(x);
            df = cos(x);
            break;
        default:
            puts("ERROR: unknown function requested");
            printf("Entered integer number is %d\n", func_num);
            return EXIT_FAILURE;
    }

    printf("f(x) = %f, f'(x) = %f\n", f, df);
    return 0;
}
