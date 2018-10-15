#include <Stdio.h>

int main()
{
    int readnum;
    char grade;

    while (scanf("%d", &readnum) == 1)
    {
        if (readnum >= 90)
            grade = 'A';
        else if (readnum >= 80)
            grade = 'B';
        else if (readnum >= 70)
            grade = 'C' else if (readnum >= 60)
                grade = 'D';
        else
            grade = 'F';

        printf("Score: %d\t Grade: %c\n", readnum, grade);
    }
    return 0;
}