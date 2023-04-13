//
// Created by asoosoft10 on 2023-04-13.
//

#include <stdio.h>
void main() {
    char *cp = "COMPUTER";
    int i = 0;

    do {
        printf("*(cp + %d): %c\n", i, *(cp + i));
    } while (*(cp + i++) != 0);

    static int a[] = {10, 20, 30, 40, 50};
    int *pt, b, c, d;
    pt = a;
    b = *pt + *(pt + 3);
    pt++;
    c= *pt + *(pt + 3);
    d = *pt + 3;

    printf("b = %d, c = %d, d = %d\n", b, c, d);

    static int g[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *cpt;

    cpt = g[0];
    while(*cpt != 9) {
        printf("%d\n", *cpt);
        cpt++;
    }

    char A[] = "ARRAY";
    char *p = "POINTER";

    for(i = 0; i < 5; i++) {
        printf("*(A+%d): %c\n", i, *(A+i));
    }
    for(i = 0; i < 7; i++) {
        printf("p[%d]: %c\n", i, p[i]);
    }

    int z[] = {1, 2, 3, 4};
    int y[] = {5, 6, 7, 8};

    int *PA[2];

    PA[0] = z;
    PA[1] = y;

    printf("*(PA[0]) = %d\n", *PA[0]);
    printf("*(PA[0] + 1) = %d\n", *PA[0] + 1);
    printf("*(PA[1]) = %d\n", *PA[1]);
    printf("*(PA[1] + 15) = %d\n", *PA[1]+ 15);

    // 이중포인터
    char C = 'A', *ep, **epp;
    ep = &C;
    epp = &ep;
    printf("**epp = %c", **epp);
}