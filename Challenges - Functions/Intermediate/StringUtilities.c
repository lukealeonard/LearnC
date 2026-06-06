#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int fixString(char string[100]){

        int repetitions = 0;

        while (string[repetitions] != '\n'){
                repetitions++;
        }

        return repetitions;
}


int strLen(char str[]){

        int repetitions = 0;

        while (str[repetitions] != '\0'){
                repetitions++;
        }

        return repetitions;

}


int main(void){
        
        system("clear");

        char string[100] = "";
        fgets(string, sizeof(string), stdin);

        string[fixString(string)] = '\0';

        int length = strLen(string);
        printf("%d\n", strLen(string));


}


