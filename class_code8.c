#include <stdio.>

void printarray(int j[3][4])
{
    int a, b;
    for(a = 0; a < 3; a++)
    {
        for(b = 0; b < 4; b++)
        {
            printf("%d\t", j[a][b]);
        }
        printf("\n");
    }

    int main()
    {
        int arr[3][4] = {{1, 2, 3, 4, 5}, {0, 1, 2}, {3, 6, 7, 8}};

        printarray(arr);

        return 0;
    }
}