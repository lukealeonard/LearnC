#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int strLen(char string[])
{
        int length = 0;
        while(string[length] != '\0'){
                length++;
        }

        return length;
}


bool strCmp(char stringa[], char stringb[])
{
        int i = 0;
        while(stringa[i] != '\0' || stringb[i] != '\0'){
                printf("%c %c\n", stringa[i], stringb[i]);

                if(stringa[i] != stringb[i]){

                        return false;
                }
                
                i++;
        }

        return true;
}


char strRev(char string[]){

}


int main(void)
{
        char string[] = "fun";
        char compstring[] = "funcr";
        printf("%d\n", strLen(string));
        printf("%d\n", strCmp(string, compstring));

        return 0;
}
