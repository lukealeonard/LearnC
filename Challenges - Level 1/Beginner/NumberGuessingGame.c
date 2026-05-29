#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
        srand(time(NULL));
        int ANSWER = (rand() %100) + 1;
        int GUESS = 0;

        system("clear");
        printf("This is a number guessing game.\n");
        sleep(1);
        system("clear");
        printf("You have to guess a number between 1 and 100.\n");
        sleep(1);
        system("clear");

        while (GUESS != ANSWER){
                printf("What is your guess?\n");
                scanf("%d", &GUESS);
                if (GUESS > ANSWER){
                        printf("Your guess was higher.\n");
                }
                else if (GUESS < ANSWER){
                        printf("Your guess was lower.\n");
                }
        }
        printf("YOU GUESSED RIGHT!!\n");
}
