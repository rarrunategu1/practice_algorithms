#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void drawBoard();
char importBoard(char [3][3]);
bool isValidMove(char);
bool isGameover();
bool didWin();


char boardPlace[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

int exitGame = 0;

int main(void)
{
    drawBoard();
    char load[3][3] = {{'X', 'O', 'X'}, {'X', 'X', 'O'}, {'O', 'X', 'X'}};
    importBoard(load);
    drawBoard();
    char playerMove = boardPlace[0][1];
    isValidMove(playerMove);
    isGameover();
    didWin();
}

// board accepts an array of 9 characters that will be either be "" no token, "X" X token, or "O" O token
// the import board function should take this data and enter it into the 2 data structures
char importBoard(char boardstate[3][3])
{
    int i = 0;
    int j = 0;
    char xToken = 'X';
    char oToken = 'O';


    //Go through import board array
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
        // //if it's an X or an O then assign the index of that character to the index of the boardPlace
        if(boardstate[i][j] == xToken || boardstate[i][j] == oToken)
        {
            boardPlace[i][j] = boardstate[i][j];
        }
        }
    }

    printf("\n");
    return 0;
}

//Checks if move made is a valid move on the tic tac toe board
bool isValidMove(char move)
{
    bool makeMove = false;

    int i = 0;

    for (i = 0; i < 9; i++)
    {

    if(move != ' ')
    {
        printf("Please pick an unused position on the board\n");
        break;
    }


    if(move == 'X' || move == 'O')
        {
            makeMove = true;
            printf("Nice Move!\n");
        }
    else
    {
        //printf("Please pick an X or an O.\n");
    }
    }

    return makeMove;

}

// isGameover()
// the function should check the state of the board and determine if the game is over (not by winning for the moment).
// function should return boolean
bool isGameover()
{
    int i = 0;
    int j = 0;
    bool endGame = false;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
        //if boardPlace is equal to only alpha
        if(boardPlace[i][j] == ' ')
        {
            //printf("%i %c\n", i, boardPlace[i]);
            endGame = false;
            break;
        }
        else
        {
            endGame = true;
        }
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
    bool win = false;

    int position = 0;

        for(position = 0; position < 3; position++)
        {
            //checking rows for win
            if((boardPlace[position][0] == boardPlace[position][1]) && (boardPlace[position][0] == boardPlace[position][2]))
            {
                win = true;
                //printf("Win\n");
            }
            //checking columns for win
            if((boardPlace[0][position] == boardPlace[1][position]) && (boardPlace[0][position] == boardPlace[2][position]))
            {
                win = true;
                //printf("Win\n");
            }
        }
        if(boardPlace[0][0] == boardPlace[1][1] && boardPlace[0][0] == boardPlace[2][2])
            {
                win = true;
                printf("win\n");
            // printf("%c\n", boardPlace[1][position]);
            // printf("%c\n", boardPlace[0][position]);
            }
            if(boardPlace[0][2] == boardPlace[1][1] && boardPlace[0][2] == boardPlace[2][0])
            {
                 win = true;
            }

    printf("%d\n", win);

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
                printf("     %c|%c|%c \n", boardPlace[0][0], boardPlace[0][1], boardPlace[0][2]);
            }
            else if (i % 2 == 1)
            {
                printf("     -+-+-\n");
            }
            else if (i == 2)
            {
                printf("     %c|%c|%c \n", boardPlace[1][0], boardPlace[1][1], boardPlace[1][2]);
            }
            else if (i == 4)
            {
                printf("     %c|%c|%c \n\n", boardPlace[2][0], boardPlace[2][1], boardPlace[2][2]);
            }

        }

    }

}


