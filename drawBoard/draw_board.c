#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void drawBoard();
char importBoard(char []);
bool isValid(char);


char boardPlace[9] = {'0','1','2','3','4','5','6','7','8'};


int exitGame = 0;

int main(void)
{
    drawBoard();
    char load[9] = {' ', 'X', 'O', ' ', ' ', 'X', ' ', 'O', ' '};
    importBoard(load);
    drawBoard();
    char playerMove = boardPlace[0];
    isValid(playerMove);
}



// board accepts an array of 9 characters that will be either be "" no token, "X" X token, or "O" O token
// the import board function should take this data and enter it into the 2 data structures
char importBoard(char boardstate[9])
{
    int i;
    char xToken = 'X';
    char oToken = 'O';


    //Go through import board array
    for(i = 0; i < 10; i++)
    {
        // //if it's an X or an O then assign the index of that character to the index of the boardPlace
        if(boardstate[i] == xToken || boardstate[i] == oToken)
        {
            boardPlace[i] = boardstate[i];
        }
    }

    printf("\n");
    return 0;
}

// this function should accept one parameter a TicTacToe cell to move. This may come in whatever way fits the data structures you created. String/int/char/int int/etc
// Your function should accept the move and determine if the move is valid. Be careful not to overthink this.
// This function should return True or False on if the move is a valid move or not.
bool isValid(char move)
{
    bool makeMove = false;
    int i = 0;

    for(i = 0; i < 9; i++)
    {

        if(!isalpha(boardPlace[i]))
        {
            makeMove = true;
            //printf("good move\n");
        }
    }

    return makeMove;

}


//Draws tic tac toe board
void drawBoard()
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

}


