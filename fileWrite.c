#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    i = atoi(argv[1]);
    if (i < 1 || i > 15)
        fprintf(stderr, "Invalid number\n");
    else
        fprintf(stdout, "Valid number: %d\n", i);
}