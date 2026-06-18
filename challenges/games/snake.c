#include <ncurses.h>
#include <unistd.h>

#define BORDER 20


void moveRight(int *pt_x, int *pt_y)
{

        while(*pt_x != BORDER){
                move(*pt_y, (*pt_x)++);
                addch('#');
                refresh(); 
        } 

}


int main()
{

        initscr();
        refresh();

        int x = 0;
        int y = 0;

        int *pt_x = &x;
        int *pt_y = &y;

        curs_set(0);

        moveRight(pt_x, pt_y);

        endwin();

        return 0;

}

