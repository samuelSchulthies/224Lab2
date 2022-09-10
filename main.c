#include <stdio.h>

int main() {
    char toothless = 0;
    short hiccup = 1;
    int astrid = 2;
    long gobber = 3;
    float fishlegs = 4;
    double stoic = 5;

    char *toothless_p = &toothless;
    short *hiccup_p = &hiccup;
    int *astrid_p = &astrid;
    long *gobber_p = &gobber;
    float *fishlegs_p = &fishlegs;
    double *stoic_p = &stoic;

    printf ("%p\n", toothless_p);
    printf ("%p\n", hiccup_p);
    printf ("%p\n", astrid_p);
    printf ("%p\n", gobber_p);
    printf ("%p\n", fishlegs_p);
    printf ("%p\n", stoic_p);


    return 0;
}
