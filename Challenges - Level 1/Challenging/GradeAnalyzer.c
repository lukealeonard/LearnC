//FINISHED
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define NUM_GRADES 5

int main(){

        system("clear");
        printf("This is a grade analyzer program. You will soon be prompted to input five grades.\n");
        sleep(3);

        float grades[] = {0, 0, 0, 0, 0};

        for (int i = 0; i < NUM_GRADES; i++){
                int a = i + 1;
                printf("Please input grade #%d\n", a);
                scanf("%f", &grades[i]);
        }

        system("clear");
        printf("these are your grades\n");

        for (int i = 0; i < NUM_GRADES; i++){
                int a = i + 1;
                printf("%d: %.2f\n", a, grades[i]);
        }

        sleep(3);
        system("clear");

        for (int i = 0; i < NUM_GRADES; i++){    
                if (grades[i] < 60){
                        printf("your letter grade is F.\n");
                }

                else if (grades[i] < 70){
                        printf("your letter grade is D.\n");
                }

                else if (grades[i] < 80){
                        printf("your letter grade is C.\n");
                }

                else if (grades[i] < 90){
                        printf("your letter grade is B.\n");
                }

                else if (grades[i] <= 100){
                        printf("your letter grade is A.\n");
                }       
        }

        sleep(3);
        system("clear");

        float sum = 0;
        for (int i = 0; i < NUM_GRADES; i++){
                sum += grades[i];
        }

        float average = sum / NUM_GRADES;
        printf("your average grade is %.2f\n", average);

        sleep(3);
        system("clear");

        if (average < 60){
                        printf("your average letter  grade is F.\n");
        }

        else if (average < 70){
                        printf("your average letter grade is D.\n");
        }

        else if (average < 80){
                        printf("your average letter grade is C.\n");
        }

        else if (average < 90){
                        printf("your average letter grade is B.\n");
        }

        else if (average <= 100){
                        printf("your average letter grade is A.\n");
        }       

        return 0;

}
