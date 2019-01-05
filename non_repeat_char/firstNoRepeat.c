#include <cs50.h>
#include <stdio.h>
#include <string.h>

char firstNoRepeat(char*);

int main(void)
{
    char* newString = "ababi";
    char result = firstNoRepeat(newString);
}

char firstNoRepeat(char* alpha)
{
    for (int i = 0; alpha[i] != '\0'; i++)
    {
        //compare two characters
        printf("%c", alpha[i]);

    }
    printf("\n");
    return '_';
}