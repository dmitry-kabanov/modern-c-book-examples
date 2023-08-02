#include <stdio.h>


void delay(double secs) {
    double const magic = 4E8;
    unsigned long long const nano = secs * magic;
    for (unsigned long volatile count = 0; count < nano; ++count) {
        // Nothing here.
    }
}


int main(int argc, char *argv[argc + 1])
{
    for (unsigned i = 0; i < 10; ++i) {
        fputc('|', stdout); 
        fflush(stdout);
        delay(0.25);
        fputc('\b', stdout);
        fputc('-', stdout);
        fflush(stdout);
        delay(0.25);
        fputc('\b', stdout);
    }
    return 0;
}
