#include <stdio.h>

int main() {
    char toothless = 0;
    short hiccup = 1;
    int astrid = 2;
    long gobber = 3;
    float fishlegs = 4;
    double stoic = 5;

    char b = 0;
    char e = 0;
    char r = 0;
    char k = 0;

    int *dragons [3] = {0, 1, 2};
    char *berk [4] = {b, e, r, k};

    int *dragons_p = dragons;
    char *berk_p = berk;



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

    for (int i = 0; i < 3; ++i){
        printf ("dragons: %p\n", dragons_p[i]);
    }

    for (int i = 0; i < 4; ++i){
        printf ("berk: %p\n", berk_p[i]);
    }


    return 0;
}
