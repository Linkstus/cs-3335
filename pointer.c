#include <stdio.h>

int main()
{
    int a[] = {1, 3, 8, 4, 5, 6, 7, 8, 9};

    int *p = a;

    printf("\n thing pointer %d", *p);

    *p++;

    printf("\n thing pointer %d", *p);

    *--p;

    printf("\n thing pointer %d", *p);
    printf("\n thing array %d", a[0]);
    *(p++);
    printf("\n thing array %d", a[0]);
    printf("\n thing pointer %d", *p);

    printf("\n------------------------");

    printf("\n thing pointer %d", *p);
    printf("\n thing array %d", a[0]);
    (*p++);
    printf("\n thing array %d", a[0]);
    printf("\n thing pointer %d", *p);

    printf("\n------------------------");

    printf("\n thing pointer %d", *p);
    printf("\n thing array %d", a[0]);
    *p++ = 5;
    printf("\n thing array %d", a[3]);
    printf("\n thing pointer %d", *p);
}