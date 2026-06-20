#include <stdio.h>
#include <stdlib.h>


int main(void)
{

        system("clear");
        printf("please input a series of numbers.\n");

        int numbers[10];

        for(int i = 0; i != 10; i++){
                scanf("%d", &numbers[i]);
        }

        for(int i = 9; i >= 0; i--){
                printf("%d\n", numbers[i]);
        }

        return 0;

}


