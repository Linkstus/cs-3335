#include <stdio.h>
#include <stdlib.h>

void mymethod(int nums[])
{
    printf("From method: size of array = %d\n", sizeof(nums));
    nums[0] = 7;
    return;
}

int main()
{
    int numbers[5] = {11, 17, 23, 33, 38};
    printf("From main: size of array = %d\n", sizeof(numbers));

    mymethod(numbers);

    int i;
    for(i = 0; i < 5; i++)
    {
        printf("Array element: %d is: %d\n", i, numbers[i]);
    }
    return 0;
}