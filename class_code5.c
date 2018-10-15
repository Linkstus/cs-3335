#include <stdio.h>

int main()
{
    int n;
    //int numbs[n]; //this causes it to break with segmentation
    puts("Enter n: ");
    scanf("%d", &n);
    int numbs[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter position %d number: \n", i);
        scanf("%d", &numbs[i]);
        printf("Number entered %d\n", numbs[i]);
    }
    return 0;
}