#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user;
    int display = 0;
    char array[7];

    puts("Enter a integer no more then 6 digits");
    scanf("%6d", &user);

    int i = 0;
    while(user != 0)
    {
        display = user % 10;
        printf("Display is: %d\n", display);
        user = user / 10;
        printf("user is: %d\n", user);
        array [i++];
    }

    for(int i = 0; i < sizeof(array); i++){
        printf("Your number in reverse order is: %d", array[i]);
    }
}