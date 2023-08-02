#include <stdio.h>
#include <tgmath.h>


int main(int argc, char *argv[])
{
    double complex z = 0.5 + 2.0*I;
    printf("Imaginary unit is %f + %fi\n", creal(I), cimag(I));
    printf("Its square is %f + %fi\n", creal(I*I), cimag(I*I));
    printf("Complex number z = %f + %fi\n", creal(z), cimag(z));
    printf("Its square is z^2 = %f + %fi\n", creal(z*z), cimag(z*z));
    return 0;
}
