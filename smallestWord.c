#include <stdio.h>
#include <string.h>

int main()
{
    char word[10], temp[10];
    char array[10][10];

    puts("Type 'zyzy' to end");

    int i = 0;
    while (strcmp(word, "zyzy") != 0)
    {
        printf("Enter a word: \n");
        scanf("%s", &word);
        scanf("%s", &temp);

        if (strcmp(word, temp) < 0)
        {
            array[i++];
        }
    }

    for (int i = 0; i < strlen(array[0]); i++)
    {
        printf("The word %s\t", array[i]);
    }
}