#include <stdio.h>


int main(){

        int fives[] = {5, 10, 15, 20, 25, 30};
        int tens[] = {10, 20, 30, 40, 50, 60};
        int twentys[] = {20, 40, 60, 80, 100, 120};

        for (int i = 0; i < 6; i++){
                printf("%d ", fives[i]);
                printf("%d ", tens[i]);
                printf("%d ", twentys[i]);
                printf("\n");
        }

        return 0;
}
