#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(){

        printf("NUMBERS IN WORDS\n");
        printf("This will print whatever integer you input in word form, into the thousands.\n");

        sleep(3);
        system("clear");

        int numinput = 10000;
        printf("please input a number:\n");

        while (numinput > 9999 || numinput < -9999){
                scanf("%d", &numinput);
                if (numinput > 9999 || numinput < -9999){
                        printf("please input an integer in the range of -9999 to 9999.\n");
                }
        }

        system("clear");
        sleep(1);
        printf("your number is...\n");
        sleep(1);
        system("clear");
        
        int absolute_value = abs(numinput);
        int thousands = absolute_value / 1000;
        int hundreds = (absolute_value - (thousands * 1000)) / 100;
        int tens = (absolute_value - (thousands * 1000) - (hundreds * 100)) / 10;
        int ones = (absolute_value - (thousands * 1000) - (hundreds * 100) - (tens * 10));

        if (numinput < 0){
                printf("negative ");
        }

        if (numinput == 0){
                printf("zero");
        }

        switch (thousands){
                case 1:
                        printf("one thousand ");
                        break;
                case 2:
                        printf("two thousand ");
                        break;
                case 3:
                        printf("three thousand ");
                        break;
                case 4:
                        printf("four thousand ");
                        break;
                case 5:
                        printf("five thousand ");
                        break;
                case 6:
                        printf("six thousand ");
                        break;
                case 7:
                        printf("seven thousand ");
                        break;
                case 8:
                        printf("eight thousand ");
                        break;
                case 9:
                        printf("nine thousand ");
                        break;
        }

        switch (hundreds){
                case 1:
                        printf("one hundred ");
                        break;
                case 2:
                        printf("two hundred ");
                        break;
                case 3:
                        printf("three hundred ");
                        break;
                case 4:
                        printf("four hundred ");
                        break;
                case 5:
                        printf("five hundred ");
                        break;
                case 6:
                        printf("six hundred ");
                        break;
                case 7:
                        printf("seven hundred ");
                        break;
                case 8:
                        printf("eight hundred ");
                        break;
                case 9:
                        printf("nine hundred ");
                        break;
        }

        if (tens != 1){
                switch (tens){
                        case 2:
                                printf("twenty-");
                                break;
                        case 3:
                                printf("thirty-");
                                break;
                        case 4:
                                printf("forty-");
                                break;
                        case 5:
                                printf("fifty-");
                                break;
                        case 6:
                                printf("sixty-");
                                break;
                        case 7:
                                printf("seventy-");
                                break;
                        case 8:
                                printf("eighty-");
                                break;
                        case 9:
                                printf("ninety-");
                                break;
                }
        }

        else {                
                switch (ones){
                        case 1:
                                printf("eleven");
                                break;
                        case 2:
                                printf("twelve");
                                break;
                        case 3:
                                printf("thirteen");
                                break;
                        case 4:
                                printf("fourteen");
                                break;
                        case 5:
                                printf("fifteen");
                                break;
                        case 6:
                                printf("sixteen");
                                break;
                        case 7:
                                printf("seventeen");
                                break;
                        case 8: 
                                printf("eighteen");
                                break;
                        case 9:
                                printf("nineteen");
                                break;
                }
        }

        if (tens != 1){
                switch (ones){
                        case 1:
                                printf("one");
                                break;
                        case 2:
                                printf("two");
                                break;
                        case 3:
                                printf("three");
                                break;
                        case 4:
                                printf("four");
                                break;
                        case 5:
                                printf("five");
                                break;
                        case 6:
                                printf("six");
                                break;
                        case 7:
                                printf("seven");
                                break;
                        case 8:
                                printf("eight");
                                break;
                        case 9:
                                printf("nine");
                                break;
                }
        }

        printf("\n");
        printf("(%d)\n", numinput);

        return 0;

}
