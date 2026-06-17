#include <stdio.h>
#include <stdlib.h>


void swap(int *a, int *b);


int main(void){

        system("clear");
        int a = 10;
        int b = 15;

        printf("%d %d\n", a, b);

        int *pa = &a;
        int *pb = &b;

        swap(pa, pb);

        printf("%d %d\n", *pa, *pb);

}


void swap(int *a, int *b){

        int na = *b;
        int nb = *a;

        *a = na;
        *b = nb;

}
