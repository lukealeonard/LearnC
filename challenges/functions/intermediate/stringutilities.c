#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>


int main(void){

        system("clear");

        char user_input = '\0';

        while (user_input != 'l' && user_input != 'r' && user_input != 'c'){
                printf("please choose a utility (l) (r) (c)\n");
                scanf("%c", &user_input);
        }

        {
                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF);
        }

        if (user_input == 'l'){

                char string[100];

                printf("please input a string:\n");
                fgets(string, sizeof(string), stdin); 

        }

        else if (user_input == 'r'){
                
                char string[100];

                printf("please input a string:\n");
                fgets(string, sizeof(string), stdin); 

        }

        else if (user_input == 'c'){

                char string[100];
                char compstring[100];

                printf("please input a string:\n");
                fgets(string, sizeof(string), stdin);

        {
                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF);
        }

                printf("please input a comparison string:\n");
                fgets(compstring, sizeof(compstring), stdin);

        }

        return 0;

}
