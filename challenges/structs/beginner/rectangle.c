#include <stdio.h>


int main(){

        typedef struct rectangle {
                int width;
                int height;
        } rectangle;

        rectangle r = {
                19,
                18
        };

        printf("%d\n", r.width * r.height);

        return 0;

}
