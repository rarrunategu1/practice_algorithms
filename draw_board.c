#include <cs50.h>
#include <stdio.h>

char drawBoard();

int main(void)
{
    char letsPlay = drawBoard();

}

char drawBoard()
{
    char boardBuild[3] = {'+', '-', '|'};
    int i;

    for (i = 0; i < 3; i++)

    {
        printf("%c", boardBuild[i]);
    }
    printf("\n");
    return '_';
}
