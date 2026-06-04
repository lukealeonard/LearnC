//I want to be able to divide, multiply, add, subtract, and square numbers.
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int sleepClear(int time){
        sleep(time);
        system("clear");
        return time;
}


float square(float num1){
        float squared = num1 * num1;
        return squared;
}


float divide(float num1, float num2){
        float divided = num1 / num2;
        return divided;
}


int main(){

        system("clear");
        printf("New Calculator\n");

        sleepClear(3);

        printf("please choose an operator. your choices are: + - * / ^\n");
        char operator = '\0';
        scanf("%c", &operator);

        sleepClear(3);

        switch (operator){
                case '+':
                        printf("please put in");
                        break;
                case '-':
                        break;
                case '*':
                        break;
                case '/':
                        break;
                case '^':
                        break;
        }
        
}


