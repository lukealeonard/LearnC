#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(){

        system("clear");
        printf("REVERSE A STRING\n");
        printf("you will be prompted to enter a sentence.\n");

        sleep(3);
        system("clear");

        char sentence[100] = "";
        printf("please type a sentence:\n");
        fgets(sentence, sizeof(sentence), stdin);
        int length = strlen(sentence);

        sleep(1);
        system("clear");
        printf("Your string backwards is...\n");
        sleep(2);
        system("clear");

        for (int i = (--length); i == 0; i--){
                printf("%c", sentence[i]);
                usleep(250000);
        }

        printf("\n");

        return 0;
}

