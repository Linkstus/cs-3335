#include <stdio.h>

int main()
{
    char str[] = "mango";

    char *food = str;

    printf("%c\n", food[3]);

    food[0] = 'M';

    printf("%s\n", food);
    
    return 0;
}