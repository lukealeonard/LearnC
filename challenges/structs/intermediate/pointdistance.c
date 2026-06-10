#include <stdio.h>
#include <math.h>


int main(void){

        typedef struct point {
                double x;
                double y;
        } point;

        point one = {
                1,
                2
        };

        point two = {
                10,
                20
        };

        double xdist = one.x - two.x;
        double ydist = one.y - two.y;

        double squarex = xdist * xdist;
        double squarey = ydist * ydist;

        double add = squarex + squarey;

        double final = sqrt(add);

        printf("%.5lf\n", final);

        return 0;

}
