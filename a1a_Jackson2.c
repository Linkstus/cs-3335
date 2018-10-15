#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define HUNDRED 100;

int main()
{
    BMI();

    return 0;
}

void BMI()
{
    int current_weight, height_inches;
    float bmi;
    char stage;
    char category[] = {"Underweight", "Normal", "Overweight", "Obese"};

    puts("C means child, A means adult");
    puts("Are c or a");
    scanf("%c", &stage);

    stage = tolower(stage);
    if(stage == 'c')
    {
        puts("is child");
    }
    else if(stage == 'a')
    {
        puts("is adult");
    }
    else{
        puts("not recognized");
    }

}