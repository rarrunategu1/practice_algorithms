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
        for(j = 0; j < 2; j++)
        {
            if(i % 2 == 0)
            {
                putchar('X');
                putchar('|' + (j/2));

                if (j == 1)
                {
                    putchar('O');
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
