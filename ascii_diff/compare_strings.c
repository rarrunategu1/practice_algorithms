#include <cs50.h>
#include <stdio.h>
#include <string.h>

char asciiDiff(char*,char*);

int main(void)
{
   char* firstString = "this";
   char* secondString = "bear";
   int result = asciiDiff(firstString,secondString);
   printf("The sum of the difference of my two strings is %i.\n", result);

}

char asciiDiff(char *first, char *second)
{
    int sum = 0;

    for(int i = 0; i < strlen(first); i++)
    {
        //printf("first: %c second: %c\n", first[i], second[j]);
        //printf("first - second = %i\n", first[i] - second[j]);
        // printf("i: %i\tj: %i\n", i, j);
        int difference = first[i] - second[i];
        sum += difference;

        //printf("%i ", difference);
        //printf("%i\n ", sum);

    }
    //printf("\n");
    //printf("%i\n ", sum);
    return sum;
}

