#include <stdio.h>

int main() {
//    char toothless = 0;
//    short hiccup = 1;
//    int astrid = 2;
//    long gobber = 3;
//    float fishlegs = 4;
//    double stoic = 5;
//
//    char b = 'b';
//    char e = 'e';
//    char r = 'r';
//    char k = 'k';
//
//    int dragons [3] = {1, 2, 3};
//    char berk [4] = {b, e, r, k};
//
//    int *dragons_p = (int *) &dragons;
//    char *berk_p = (char *) &berk;
//
//
//
//    char *toothless_p = &toothless;
//    short *hiccup_p = &hiccup;
//    int *astrid_p = &astrid;
//    long *gobber_p = &gobber;
//    float *fishlegs_p = &fishlegs;
//    double *stoic_p = &stoic;
//
//    printf ("%p\n", toothless_p);
//    printf ("%p\n", hiccup_p);
//    printf ("%p\n", astrid_p);
//    printf ("%p\n", gobber_p);
//    printf ("%p\n", fishlegs_p);
//    printf ("%p\n", stoic_p);
//
//    for (int i = 0; i < 3; ++i){
//        printf ("dragons: %p\n", dragons_p[i]);
//    }
//
//    for (int i = 0; i < 4; ++i){
//        printf ("berk: %p\n", berk_p[i]);
//    }

    int userInput [5];

    printf ("Give me 5 numbers\n");

    for (int i = 0; i < 5; ++i){
        scanf ("%d", &userInput[i]);
    }


    for (int i = 0; i < 5; ++i){
        for (int j = 0; j < 4; ++i){
            if ((userInput[j] > userInput[j + 1])){
                int temp = userInput[j];
                userInput[j] = userInput[j + 1];
                userInput[j + 1] = temp;
            }
        }
    }

    printf("Your input sorted:\n");

    for (int i = 0; i < 5; ++i){
        printf ("%d\n", &userInput[i]);
    }

    return 0;
}
