#include <stdio.h>

int main()
{
    int y = 4;

    int *x = &y;

    printf("the address of y is %d\n", &y);
    printf("the pionter of x is %d\n", *x);
    printf("the incorrect pointer of x is %d\n", &x);

    return 0;
}