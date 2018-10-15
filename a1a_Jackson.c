#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


/*
    Name: James Jackson
    Course: CS-3335
    Semester: Fall 2018
*/
void BMI()
{
    int height_feet, height_inches, weight;
    float height_inch, BMI;
    char *categories[] = {"Underweight", "Normal", "Overweight"};

    puts("What is your current weight?");
    scanf("%d", &weight);

    puts("Example of height: 5foot 10inches");

    puts("What is your height in feet?");
    scanf("%d", &height_feet);

    puts("What about inches?" );
    scanf("%d", &height_inches);

    height_inch = height_feet * 12 + height_inches;

    BMI = (weight) / (pow(height_inch, 2)) * 703;

    printf("Your BMI is: %.2f\n", BMI);

    if(BMI < 18.5)
    {
        printf("You are %s", categories[0]);
    }
    else if(BMI >= 18.5 && BMI < 24.9)
    {
        printf("You are %s", categories[1]);
    }
    else
    {
        printf("You are %s", categories[2]);
    }
}

void IBW()
{
    char gender;
    int height_inches, height_feet;
    float IBW, height_inch, LBS;

    puts("Are you M or F");
    scanf(" %c", &gender);

    if(gender >= 'A' && gender <= 'Z')
    {
        gender = tolower(gender);
    }

    if(gender == 'm')
    {
        puts("Example of height: 5foot 10inches");

        puts("What is your height in feet?");
        scanf("%d", &height_feet);

        puts("What about inches?");
        scanf("%d", &height_inches);

        if(height_feet > 5)
        {
            height_inch = ((height_feet - 5) * 12) + height_inches;

            IBW = 50 + (2.3 * height_inch);

            LBS = IBW * 2.2046;

            printf("Your Ideal Body Weight is: %.2f\n", LBS);
        }
        else
        {
            IBW = 50 + (2.3 * height_inches);

            LBS = IBW * 2.2046;

            printf("Your Ideal Body Weight is: %.2f\n", LBS);            
        }
    }

    else if(gender == 'f')
    {
        puts("Example of height: 5foot 10inches");

        puts("What is your height in feet?");
        scanf("%d", &height_feet);

        puts("What about inches?");
        scanf("%d", &height_inches);

        if(height_feet > 5)
        {
            height_inch = ((height_feet - 5) * 12) + height_inches;

            IBW = 45.5 + (2.3 * height_inch);

            LBS = IBW * 2.2046;

            printf("Your Ideal Body Weight is: %.2f\n", LBS);
        }
        else
        {
            IBW = 45.5 + (2.3 * height_inches);

            LBS = IBW * 2.2046;

            printf("Your Ideal Body Weight is: %.2f\n", LBS);            
        }
    }

}

int main()
{
    int count;
    char user[4];

    printf("BMI Calculator,\nhow many times do you want to run this? ");
    scanf("%d", &count);

    for(int i = 0; i < count; i++)
    {
        puts("\nWhat would you like to look at? BMI or IBW(Ideal body weight)");
        scanf("%s", &user);

        for(int i = 0; i < sizeof(user); i++)
        {
            user[i] = tolower(user[i]);
        }

        if(strcmp(user, "bmi") == 0)
        {
            BMI();
        }
        else if(strcmp(user, "ibw") == 0)
        {
            IBW();
        }
    }

     return 0;       
}