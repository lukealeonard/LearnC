#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main(){
        system("clear");

        printf("This is a simple calculator.\n");
        sleep(2);
        system("clear");

        char OPERATOR = ' ';

        printf("Choose an operator.\n");
        printf("Please choose one of the following: +, -, *, /\n");
        scanf("%c", &OPERATOR);

        switch (OPERATOR){
                case '+':
                        float plusNUM1 = 0;
                        float plusNUM2 = 0;
                        printf("What is your first number?\n");
                        scanf("%f", &plusNUM1);
                        printf("What is your second number?\n");
                        scanf("%f", &plusNUM2);
                        float plusANSWER = plusNUM1 + plusNUM2;
                        sleep(1);
                        printf("Your answer is %f.\n", plusANSWER);
                        break;         
                case '-':
                        float minusNUM1 = 0;
                        float minusNUM2 = 0;
                        printf("What is your first number?\n");
                        scanf("%f", &minusNUM1);
                        printf("What is your second number?\n");
                        scanf("%f", &minusNUM2);
                        float minusANSWER = minusNUM1 - minusNUM2;
                        sleep(1);
                        printf("Your answer is %f.\n", minusANSWER);
                        break; 
                case '*':
                        float multiplyNUM1 = 0;
                        float multiplyNUM2 = 0;
                        printf("What is your first number?\n");
                        scanf("%f", &multiplyNUM1);
                        printf("What is your second number?\n");
                        scanf("%f", &multiplyNUM2);
                        float multiplyANSWER = multiplyNUM1 * multiplyNUM2;
                        sleep(1);
                        printf("Your answer is %f.\n", multiplyANSWER);
                        break;
                case '/':
                        float divideNUM1 = 0;
                        float divideNUM2 = 0;
                        printf("What is your first number?\n");
                        scanf("%f", &divideNUM1);
                        printf("What is your second number?\n");
                        scanf("%f", &divideNUM2);
                        float divideANSWER = divideNUM1 / divideNUM2;
                        sleep(1);
                        if (divideANSWER == INFINITY){
                                printf("You cannot divide by zero.\n");
                                break;
                        }
                        printf("Your answer is %f.\n", divideANSWER);
                        break;
        }

}
