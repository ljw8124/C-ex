//
// Created by asoosoft10 on 2023-04-17.
//
#include <stdio.h>
struct data {
    int x;
    int y;
};

typedef struct data DATA;

void main() {
    DATA d = {1, 2};
    printf("d.x = %d, d.y = %d\n", d.x, d.y);
}
