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

        float quotient = num1 / num2;
        return quotient;

}


float multiply(float num1, float num2){

        float product = num1 * num2;
        return product;

}


float subtract(float num1, float num2){

        float difference = num1 - num2;
        return difference;

}


float add(float num1, float num2){

        float sum = num1 + num2;
        return sum;

}


int main(){

        system("clear");
        printf("New Calculator\n");

        sleepClear(3);

        printf("please choose an operator. your choices are: + - * / ^\n");
        char operator = '\0';
        scanf("%c", &operator);

        sleepClear(3);
        float num1 = 0;
        float num2 = 0;

        switch (operator){
                case '+':
                        printf("what is the first number?\n");
                        scanf("%f", &num1);
                        printf("what is the second number?\n");
                        scanf("%f", &num2);
                        printf("%f\n", add(num1, num2));
                        break;
                case '-':
                        printf("what is the first number?\n");
                        scanf("%f", &num1);
                        printf("what is the second number?\n");
                        scanf("%f", &num2);
                        printf("%f\n", subtract(num1, num2));  
                        break;
                case '*':
                        printf("what is the first number?\n");
                        scanf("%f", &num1);
                        printf("what is the second number?\n");
                        scanf("%f", &num2);
                        printf("%f\n", multiply(num1, num2));  
                        break;
                case '/':
                        printf("what is the first number?\n");
                        scanf("%f", &num1);
                        printf("what is the second number\n");
                        scanf("%f", &num2);
                        printf("%f\n", divide(num1, num2));
                        break;
                case '^':
                        printf("what number do you want to square?\n");
                        scanf("%f", &num1);
                        printf("%f\n", square(num1));
                        break;
        }

        return 0;
        
}


