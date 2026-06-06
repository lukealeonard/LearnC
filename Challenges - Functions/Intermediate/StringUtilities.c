#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void sleepClear(int time){

        sleep(time);
        system("clear");

}

int strLength(char str[100]){

        int reps = 0;

        while (str[reps] != '\0'){
                reps += 1;
        }

        reps--;

        return reps;
}

int main(void){

        system("clear");
        printf("STRING UTILITIES\n");

        sleepClear(3);

        char util = 'a';

        printf("please choose a utility to use:\n");
        printf("-- length (l) -- compare (c) -- reverse (r) --\n");
        scanf("%c", &util);
        while (getchar() != '\n');

        system("clear");
        
        char str[100] = "fun";

        switch (util){
                case 'l':
                        printf("please enter a string:\n");
                        fgets(str, sizeof(str), stdin);
                        int length = strLength(str);
                        printf("%d", length);
                        break;
                case 'c':
                        break;
                        printf("please enter a string:\n");
                        fgets(str, sizeof(str), stdin);
                case 'r':
                        break;
                        printf("please enter a string:\n");
                        fgets(str, sizeof(str), stdin);
        }
 
}
