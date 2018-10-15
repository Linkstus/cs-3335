#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUM 32
#define DIVISION 5/9
typedef int WHOLE;


WHOLE math(WHOLE far)
{
    int celsius = (far - NUM) * DIVISION;

    return celsius;
}

WHOLE main()
{
    
    WHOLE farenheit;

    char in[1000];

    printf("The number of bytes that NUM uses is %d\n", sizeof(NUM));
    printf("The number of bytes in uses is: %d\n", sizeof(in));

    for(WHOLE i = 0; i < 5; i++)
    { 

        puts("Enter a number for farenheit: ");
        scanf("%d", &farenheit);

        WHOLE celsius = math(farenheit);

        if (celsius >= 90)
        {
            printf("Your degree in celsius is %d and it is burning up\n", celsius);
        }
        else if (celsius < 10)
        {
            printf("Your degree in celsius is %d and it is freezing\n", celsius);
        }
        else{
            printf("you r degree in celsius is %d\n", celsius);
        }
    }

    return 0;
}