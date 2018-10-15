/*Name: James Jackson
  Course Name: cs-3335
  Semester: Fall 2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checkArg(int n)
{

    if (n < 0 || n > 15 || n % 2 == 0)
    {
        puts("Invalid input. Must be between 1-15 and odd");

        return 0;
    }
    else
    {
        return 1;
    }
}
void fillBox(int n)
{
    int magicBox[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            magicBox[i][j] = 0;
        }
    }

    magicBox[0][n / 2] = 1;
    int row = n - 1, column = (n / 2) + 1;

    for (int i = 2; i <= n * n;)
    {
        if (row < 0 && column == n)
        {
            row += 2;
            column = n - 1;
        }
        else if (row < 0)
            row = n - 1;
        else if (column == n)
            column = 0;
        if (magicBox[row][column] != 0)
        {
            row += 2;
            column--;
        }
        magicBox[row][column] = i++;
        row--;
        column++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d      ", magicBox[i][j]);
        }
        printf("\n");
    }

    int sum = (n * (pow(n, 2) + 1) / 2);

    printf("n = %d (magic value = %d)", n, sum);
}

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);

    if (checkArg(n))
    {
        fillBox(n);
    }

    return 0;
}