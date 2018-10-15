/*Name: James Jackson
  Course Name: cs-3335
  Semester: Fall 2018
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char crypt(char user[31], char temp[31], int ROT)
{
    for (int i = 0; i < strlen(user); i++)
    {
        if (user[i] >= 'A' && user[i] <= 'Z')
        {
            if (user[i] >= 'Z')
            {
                user[i] = (user[i] - 'Z' + 'A' - 1) + ROT;
            }
            else
                user[i] = user[i] + ROT;
        }
        else if (user[i] >= 'a' && user[i] <= 'z')
        {
            if (user[i] >= 'z')
            {
                user[i] = (user[i] - 'z' + 'a' - 1) + ROT;
            }
            else
                user[i] = user[i] + ROT;
        }
    }
    printf("\n\tOriginal word was: %s", temp);
    printf("\n\tCoded word is: %s", user);
}

int main()
{
    char user[31];
    int ROT;
    char temp[31];
    puts("\t\tCAESER CIPHER");

    printf("\nEnter a word/sentence: \t\t");
    fgets(user, sizeof(user), stdin);

    printf("\nEnter a number between 1-9 \t");
    scanf("%d", &ROT);

    strcpy(temp, user);

    crypt(user, temp, ROT);

    return 0;
}