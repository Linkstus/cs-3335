#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void convert_to_binary()
{
    int number = 0, user, base = 1;

    printf("Enter a integer: ");
    scanf("%d", &user);

    int n = user;
    
    while(n > 0)
    {
        number += (n % 2) * base;
        
        n /= 2;
        base *= 10;
    }

    printf("\nYour orginal number was %d and your binary number is %d", user, number);
    printf("\n");
}


void convert_to_integer()
{
    int user, num = 0, base = 1;

    printf("Enter a Binary: ");
    scanf("%d", &user);

    int n = user;

    while (n > 0){
         num += (n % 10) * base;

         n /= 10;
         base *= 2;
    }

    printf("\nYour orginal number was %d and your binary number is %d", user, num);
    printf("\n");
}

int main()
{
    char user[15];

    while(strcmp(user, "end") != 0)
    {
        puts("Type toBinary, toInteger, or end");
        scanf("%s", &user);

        if(strcmp(user, "toBinary") == 0){
            convert_to_binary();
        }
        else if(strcmp(user, "toInteger") == 0){
            convert_to_integer();
        }
    }

    return 0;
}