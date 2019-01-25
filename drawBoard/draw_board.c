#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define ROW 5
#define COLUMN 2
#define FIRSTPLAYER 1
#define SECONDPLAYER 2

char drawBoard();
void importBoard (string[]);

char empty = ' ';
char ex = 'X';
char oh = 'O';

char boardPlace[9] = {'0','1','2','3','4','5','6','7','8'};


int main(void)
{
    boardPlace[0] = ex;

    char letsPlay = drawBoard();



}

char drawBoard()
{

    int i;
    int j;

    for (i = 0; i <= 4; i++)
    {
        for(j = 0; j < 1; j++)
        {

            if (i == 0)
            {
                printf("%c|%c|%c \n", boardPlace[0], boardPlace[1], boardPlace[2]);
            }
            else if (i % 2 == 1)
            {
                printf("-+-+-\n");
            }
            else if (i == 2)
            {
                printf("%c|%c|%c \n", boardPlace[3], boardPlace[4], boardPlace[5]);
            }
            else if (i == 4)
            {
                printf("%c|%c|%c \n", boardPlace[6], boardPlace[7], boardPlace[8]);
            }



        }

    }

    return '_';
}