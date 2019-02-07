#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void drawBoard();
char importBoard(char []);
bool isValidMove(char);
bool isGameover();
bool didWin();


char boardPlace[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};

int exitGame = 0;

int main(void)
{
    drawBoard();
    char load[9] = {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'};
    importBoard(load);
    drawBoard();
    char playerMove = boardPlace[4];
    isValidMove(playerMove);
    isGameover();
    didWin();
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

//Checks if move made is a valid move on the tic tac toe board
bool isValidMove(char move)
{
    bool makeMove = false;

    if(!isalpha(move))
    {
        makeMove = true;
        printf("Nice Move!\n");
    }
    else
    {
        printf("Sorry, that spot is taken. Please try again.\n");
    }
    return makeMove;
}

// isGameover()
// the function should check the state of the board and determine if the game is over (not by winning for the moment).
// function should return boolean
bool isGameover()
{
    int i = 0;
    bool endGame = false;

    for(i = 0; i < 9; i++)
    {
        //if boardPlace is equal to only alpha
        if(boardPlace[i] == ' ')
        {
            printf("%i %c\n",i, boardPlace[i]);
            endGame = false;
            break;
        }
        else
        {
            endGame = true;
        }
    }

    fputs(endGame ? "Game Over: true\n" : "Game Over: false\n", stdout);
    return endGame;
}
// this function should check the state of the board and for today MVP it should at least check 3 out of the 8 win conditions.
// Consider what you should return here for this function. There is a very obvious item you would return. However, could you return something else that would give the same result along with additional information?

//checks if the board is in a win state or not
bool didWin()
{
    // char xToken = 'X';
    // char oToken = 'O';

    bool win = false;

    // int i = 0;
    // int j = 0;

    // for (i = 0; i < 8; i++)
    // {
    //     for(j = 0; j < 1; j++)
    //     {
    //         printf("I: %c, J: %c\n", boardPlace[i], boardPlace[j]);

    //     }
    // }



    // //}
    return win;
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


