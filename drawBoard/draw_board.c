#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define ROW 5
#define COLUMN 2
#define FIRSTPLAYER 1
#define SECONDPLAYER 2
#define XMOVE X
#define YMOVE Y

char drawBoard();
void importBoard (string[]);

char empty = ' ';
char ex = 'X';
char oh = 'O';

char drawboard[9];


int main(void)
{

    char letsPlay = drawBoard();


}

char drawBoard()
{

    int i;
    int j;

    for (i = 0; i < ROW; i++)
    {
        for(j = 0; j < COLUMN; j++)
        {

            if (i % 2 == 0 && j == 0) {
                    drawboard[0] = 'X';
                    putchar(drawboard[0]);
                }
            else if (i % 2 == 0 && j == 1)
            {

                    drawboard[1] = 'O';
                    putchar(drawboard[1]);
            }
            else if (i % 2 == 0 && j == 2)
            {

                    drawboard[2] = 'W';
                    putchar(drawboard[2]);
            }

           if(i % 2 == 0)

            {
                //putchar(' ');
                putchar('|' + (j/2));

                if (j == 1)
                {
                    //putchar(' ');
                    printf("\n");
                }

            }
            if(i % 2 == 1)
            {
                putchar('-' + (j/2));
                putchar('+' + (j/2));

                if(j == 1)
                {
                    putchar('-');
                    printf("\n");
                }

            }

        }

    }



    printf("\n");
    return '_';
}