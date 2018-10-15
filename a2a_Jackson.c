#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digits[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int frequency[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int user; 
    long long leftover;

    printf("Please enter a whole number: ");
    scanf("%d", &user);

    while(user != '\0')
    {
        leftover = user % 10;

        user /= 10;

        printf("\nleftover: %d", leftover);

        frequency[leftover] += 1;
    }

    puts("\nDigits array is: ");
    for(int i = 0; i < sizeof(digits)/sizeof(digits[0]); i++)
    {
        printf("%d\t", digits[i]);
    }

    puts("\nFrequency array is: ");
    for(int i = 0; i < sizeof(frequency)/sizeof(frequency[0]); i++){
        printf("%d\t", frequency[i]);
    }

    return 0;
}