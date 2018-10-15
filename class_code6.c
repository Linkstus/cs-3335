#include <stdio.h>

#define SIZE 5

void Hi_low(int A[], int *high, int *low);

int main()
{
    int A[SIZE], n, high, low;

    //fill A with your choies of distinct numbers

    Hi_low(A, &high, &low);

    printf("High is: %d, and Low is: %d", high, low);

    return 0;
}

void Hi_low(int A[], int *high, int *low)
{
    int user;

    for(int i = 0; i < SIZE; i++)
    {
        puts("Enter a number: ");
        scanf("%d", &A[i]);
    }

    *high = A[0];

    *low = A[0];

    for(int i = 0; i < SIZE; i++){
        if(A[i] > *high)
        {
            *high = A[i];
        }
        if(A[i] < *low)
        {
            *low = A[i];
        }
    }
}