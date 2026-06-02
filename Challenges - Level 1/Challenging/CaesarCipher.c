//FINISHED (this one was so satisfying to figure out)
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#define SHIFT 3


int main(){ 
        system("clear");
        printf("CAESAR CIPHER\n");
        printf("you will soon be prompted to input a word or sentence. The program will shift each letter up the alphabet 3 times.\n");

        sleep(4);
        system("clear");

        char string[100] = "";
        printf("please input a sentence or word:\n");
        fgets(string, sizeof(string), stdin);
        int length = strlen(string);

        for (int i = 0; i < length; i++){                         
                if (string[i] <= 'Z' && string[i] >= 'A'){        
                        int alphabet = string[i] - 'A';
                        alphabet += SHIFT;
                        alphabet %= 26;
                        alphabet += 'A';
                        printf("%c", alphabet);
                }

                else if (string[i] <= 'z' && string[i] >= 'a'){   
                        int alphabet = string[i] - 'a';
                        alphabet += SHIFT;
                        alphabet %= 26;
                        alphabet += 'a';
                        printf("%c", alphabet);
                }

                else {
                        printf("%c", string[i]);
                }       
        }

        printf("\n");

        return 0;
}
