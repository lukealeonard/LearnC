#include <stdio.h>
#include <stdlib.h>

int main(){

        system("clear");

        FILE *pF = fopen("/home/luke/.config/nvim/init.lua", "r");

        if(pF == NULL){
                
                printf("could not locate file.\n");

        }

        char buffer[255];

        while(fgets(buffer, 255, pF) != NULL){

                printf("%s", buffer);

        }

        fclose(pF);

        char end = '\0';
        while(end != '\0'){

                getchar();

        }



        return 0;

}

