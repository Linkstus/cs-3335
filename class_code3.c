#include <stdio.h>

void myFunction(int *a, int *b)
{
    *a += 1;
    *b -= 1;
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    myFunction(&a, &b);

    printf("a is = %d, b is = %d\n", a, b);

    return 0;
}

//input 7, 8
//output ?