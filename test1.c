#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define TRUE 1
#define FALSE 0

int linsearch(int *arr, int k)
{
    int *p = &arr[0];
    for (; p < &arr[SIZE]; p++)
    {
        if (*p == k)
            return TRUE;
    }
    return FALSE;
}

int main()
{
    int list[] = {3, 5, 6, 8, 7, 16, 11, 17, 23, 19};

    int sk;

    puts("Enter the key to be searched: ");
    scanf("%d", &sk);

    if (linsearch(list, sk))
        printf("The key %d is found in the list\n", sk);
    else
        printf("The key %d was not found in the list\n", sk);

    return 0;
}