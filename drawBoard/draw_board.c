#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define ROW 5
#define COLUMN 2
#define FIRSTPLAYER 1
#define SECONDPLAYER 2


char drawBoard();
void importBoard (string[]);


char boardPlace[9] = {'0','1','2','3','4','5','6','7','8'};


int main(void)
{
    char firstPlayerMove;
    char secondPlayerMove;
    int i = 0;

    //do until board is filled with X's and O's or game is won
    do
    {
        firstPlayerMove = get_char("Player 1 enter an unused number position from 0-8 to place your move: ");

    }
    while ((firstPlayerMove < 48 || firstPlayerMove > 56 )&& (boardPlace[i] == 'X' || boardPlace[i] == 'O'));

    for(i = 0; i < 9; i++)
    {
        if(boardPlace[i] == firstPlayerMove)
        {
            boardPlace[i] = 'X';
        }

    }

       char letsPlay = drawBoard();

        do
    {
        secondPlayerMove = get_char("Player 2 enter a number position from 0-8 to place your move: ");

    }
    while ((secondPlayerMove < 48 || secondPlayerMove > 56) && (boardPlace[i] == 'X' || boardPlace[i] == 'O'));

    for(i = 0; i < 9; i++)
    {
        if(boardPlace[i] == secondPlayerMove )
        {
            boardPlace[i] = 'O';
        }
    }

    letsPlay = drawBoard();






}

char drawBoard()
{

    int i;
    int j;

    printf("\n");

    for (i = 0; i <= 4; i++)
    {
        for(j = 0; j < 1; j++)
        {

            if (i == 0)
            {
                printf("     %c|%c|%c \n", boardPlace[0], boardPlace[1], boardPlace[2]);
            }
            else if (i % 2 == 1)
            {
                printf("     -+-+-\n");
            }
            else if (i == 2)
            {
                printf("     %c|%c|%c \n", boardPlace[3], boardPlace[4], boardPlace[5]);
            }
            else if (i == 4)
            {
                printf("     %c|%c|%c \n\n", boardPlace[6], boardPlace[7], boardPlace[8]);
            }



        }

    }

    return '_';
}