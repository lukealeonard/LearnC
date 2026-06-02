#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
        system("clear");
        printf("FizzBuzzBoom\n");
        sleep(2);
        system("clear");

        int LOOPNUM = 1;
        while (LOOPNUM <= 100) {

                int _3REMAINDER = LOOPNUM % 3;
                int _5REMAINDER = LOOPNUM % 5;
                int _7REMAINDER = LOOPNUM % 7;

                if (_3REMAINDER == 0) {
                        printf("Fizz");
                }

                if (_5REMAINDER == 0) {
                        printf("Buzz");
                }

                if (_7REMAINDER == 0) {
                        printf("Boom");
                }

                if (_3REMAINDER != 0 && _5REMAINDER != 0 && _7REMAINDER != 0) {
                        printf("%d", LOOPNUM);
                }

                printf("\n");
                ++LOOPNUM;
                usleep(250000);

        }
}

