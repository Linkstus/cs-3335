#include <stdio.h>
#include <string.h>

#define G 678
#define S "hello"
#define F "F"
#define L 234.567

int main()
{
    int x = 12345;
    float y = 123.4567;
    char z = 'W';
    char st[] = "Hello World";

    printf("The global int constant is %d\n", G);
    printf("The global string contant is %s\n", S);
    printf("The global character constant %s\n", F);
    printf("The global float constant is %f\n", L);
    printf("Int is %3i, float is %4.2f, and Char is %c\n", x, y, z);
    printf("String is %s\n", st);

    return 0;
}