#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char user[50];

    puts("What would you like to do? ");
    
    getchar();
    fgets(user, 50 , stdin);

    printf("\n%c\n", user[0]);

    char str[3][20];

    int j = 0;
    int cnt = 0;

    for(int i = 0; i <= (strlen(user)); i++){

        if(user[i] == ' ' || user[i] == '\0'){

            str[cnt][j] = '\0';

            cnt++;
            
            j = 0;
        }

        else
        {
            str[cnt][j] = user[i];

            j++;
        }
    }

    printf("\nOriginal String is: %s", str);
    printf("\nStrings (words) after split by space:\n");

    for(int i = 0; i < cnt; i++){
        printf("%s ", str[i]);
    }
}