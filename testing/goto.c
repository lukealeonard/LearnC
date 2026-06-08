#include <stdio.h>


int main(void){
        
        int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        for (int repetitions = 0; repetitions == 10; repetitions++){
                printf("%d", numbers[repetitions]);
                if (repetitions == 5){
                        break;
                }
        }
        goto end;

        printf("fun");
        printf("fun");
        printf("fun");
        printf("fun");
        printf("fun");
        printf("fun");
        printf("fun");
        printf("fun");
        printf("fun");
        printf("fun");
        printf("fun");
        printf("fun");
        printf("fun");
        printf("fun");
        printf("fun");

end:    printf("I hate C.\n");

        return 0;

}
