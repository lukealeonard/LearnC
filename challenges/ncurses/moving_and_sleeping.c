#include <ncurses.h>


void printing();
void moving_and_sleeping();
void colouring();


int main()
{

        initscr();

        refresh();

        //printing();

        moving_and_sleeping();

        //colouring();

        addstr("\npress any key to exit...");
        refresh();

        getch();

        endwin();

        return 0;

}


void printing()
{
        
        addstr("this was printed using addsntr\n\n");
        refresh();

        addstr("the following letter was printed using addch: -");
        addch('a');
        refresh();

        printw("\nl\nThese numbers were printed using printw\n%d\n%f\n", 123, 456.789);
        refresh();

}


void moving_and_sleeping()
{

        int row = 5;
        int col = 0;

        curs_set(0);

        for(char c = 65; c <= 90; c++){
                move(row++, col++);
                addch(c);
                refresh();
                napms(100);
        }

        row = 5;
        col = 3;

        for(char c = 97; c <= 122; c++){
                mvaddch(row++, col++, c);
                refresh();
                napms(100);
        }

        curs_set(1);

        addch('\n');

}
