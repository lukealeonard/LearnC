#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void stripNewline(char string[100]){

        int repetitions = 0;

        while (string[repetitions] != '\n'){
                repetitions++;
        }

        string[repetitions] = '\0';

}


int stringLength(char string[]){

        int repetitions = 0;

        while (string[repetitions] != '\0'){
                repetitions++;
        }

        return repetitions;

}


void stringReverse(char string[]){

        int repetitions = stringLength(string);

        while (repetitions > -1){

                printf("%c", string[repetitions]);
                repetitions--;

        }

        printf("\n");


}


int main(void){
        
        system("clear");

        char string[100] = "";
        fgets(string, sizeof(string), stdin);


        int length = stringLength(string);
        printf("%d\n", stringLength(string));

        stringReverse(string);

}


