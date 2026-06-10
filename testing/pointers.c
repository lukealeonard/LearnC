#include <stdio.h>


void birthday(int *age){
        age++;
}


int main(void){

        int age = 25;
        int *pAge = &age;

        printf("%p\n", &age);
        printf("%p\n", pAge);

        birthday(pAge);

        printf("You are %d years old\n", age);

        return 0;

}

