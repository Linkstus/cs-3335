#include <stdio.h>
#include <string.h>

char *str[5] = {"+, ", "-, ", "*, ", "/, ", "~"};
int fNum, secNum;

void Add(int Num1, int Num2)
{
    printf("%d + %d = %d", Num1, Num2, Num1 + Num2);
}

void Subtract(int Num1, int Num2)
{
    printf("%d - %d = %d", Num1, Num2, Num1 - Num2); 
}

void Multiply(int Num1, int Num2)
{
    printf("%d * %d = %d", Num1, Num2, Num1 * Num2);
}

void Divide(int Num1, int Num2)
{
    printf("%d / %d = %d", Num1, Num2, Num1 / Num2);
}

int main()
{
    char in[3];
    
    puts("Things you are able to do: ");
    
    for(int i = 0; i < 5; i++){
        printf("%s", str[i]);
    }
    
    while(strcmp(in, "~") != 0){

        puts("\nWhat would you like to do? ");
        scanf("%2s", &in);

        if(strcmp(in, "+") == 0){
            
            puts("\nEnter first number: ");
            scanf("%d", &fNum);

            puts("\nEnter Second number: ");
            scanf("%d", &secNum);

            Add(fNum, secNum);
        }
        else if(strcmp(in, "-") == 0){
            
            puts("\nEnter first number: ");
            scanf("%d", &fNum);

            puts("\nEnter Second number: ");
            scanf("%d", &secNum);

            Subtract(fNum, secNum);
        }
        else if(strcmp(in, "*") == 0){
            
            puts("\nEnter first number: ");
            scanf("%d", &fNum);

            puts("\nEnter Second number: ");
            scanf("%d", &secNum);

            Multiply(fNum, secNum);
        }
        else if(strcmp(in, "/") == 0){
            
            puts("\nEnter first number: ");
            scanf("%d", &fNum);

            puts("\nEnter Second number: ");
            scanf("%d", &secNum);

            Divide(fNum, secNum);
        }
        else if(strcmp(in, "~") != 0 ){
            puts("Sorry I do not recognize that command.");
        }
    }

    return 0;
}