#include <cs50.h>
#include <stdio.h>

char drawBoard();

int main(void)
{
    char letsPlay = drawBoard();

}

char drawBoard()
{
    int i;
    int j;

    for (i = 0; i < 5; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==0 && j < 3)
            {
                putchar(' ');
                putchar('|' + (j/2));
                putchar(' ');
            }
            if(i == 1)
            {
                printf("\n");
                putchar(' ');
                putchar('-');
                putchar('+');
                putchar('-');
                putchar('+');
                putchar('-');
            }
        }
    }



    printf("\n");
    return '_';
}
