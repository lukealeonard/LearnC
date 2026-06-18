#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>


void printing();
void moving_and_sleeping();
void colouring();


int main(void)
{

        initscr();

        printing();

        addstr("\npress any key to exit...");

        getch();

        endwin();

        return 0;

}


void printing()
{

        addstr("This was printed using addstr\n\n");
        refresh();

        addstr("The following leeter was printed using addch:- ");
        addch('a');
        refresh();

        printw("\n\nThese numbers were printed using printw\n%d\n%f\n", 123, 456.789);
        refresh();

}
