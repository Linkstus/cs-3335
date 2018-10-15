#include <stdio.h>
#include <string.h>

char *str[12] = {"1.)Hello, ", "2.)End, ", "3.)Print integer, ", "4.)add, ", "5.)subtract, ", 
                "6.)multiply, ", "7.)divide, ", "8.)check if odd or even, ", " 9.)Check if vowel, ", "10.)Leap year, ",
                "11.)sum digits, ", "12.)Factorial, "};

void Hello_World()
{
    puts("Hello World");
}

void print_Integer()
{
    int user;

    puts("\nEnter a number: ");
    scanf("%d", &user);

    printf("\nThe number you entered was: %d ", user);
}

void add_Number()
{
    int fNum;
    int secNum;

    puts("\nEnter the first number: ");
    scanf("%d", &fNum);

    puts("\nEnter the Second number: ");
    scanf("%d", &secNum);

    int total = fNum + secNum;

    printf("%d + %d = %d", fNum, secNum, total);
}

void subtract_number()
{
    int fNum;
    int secNum;

    puts("\nEnter the first number: ");
    scanf("%d", &fNum);

    puts("\nEnter the second number: ");
    scanf("%d", &secNum);

    int total = fNum - secNum;

    printf("%d - %d = %d", fNum, secNum, total);
}

void mutliply_number()
{
    int fNum;
    int secNum;

    puts("\nEnter the first number: ");
    scanf("%d", &fNum);

    puts("\nEnter the second number: ");
    scanf("%d", &secNum);

    int total = fNum * secNum;

    printf("%d x %d = %d", fNum, secNum, total);
}

void divide_number()
{
    int fNum;
    int secNum;

    puts("\nEnter the first number: ");
    scanf("%d", &fNum);

    puts("\nEnter the second number: ");
    scanf("%d", &secNum);

    int total = fNum / secNum;

    printf("%d / %d = %d", fNum, secNum, total);
}

void odd_Even()
{
    int num;

    puts("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("%d is even", num);
    }
    else{
        printf("%d is odd", num);
    }
}

void check_vowel()
{
    char letter;

    puts("Enter a single letter: ");
    scanf("%2s", &letter);

    if(letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z'){
        switch(letter){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%c is a vowel", letter);
                break;
            default:
                printf("%c is not a vowel", letter);
        }
    }
    else{
        printf("%c is not a letter", letter);
    }
}

void leap_year()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year%400 == 0){
        printf("%d is a leap year", year);
    }
    else if (year%100 == 0){
        printf("%d is not a leap year", year);
    }
    else if (year%4 == 0){
        printf("%d is a leap year", year);
    }
    else{
        printf("%d is not a leap year", year);
    }
}

void sum_Digits()
{
    int user_number, sum = 0, temp_number, num;
    
    puts("Enter a number: ");
    scanf("%d", &user_number);
    
    num = user_number;

    while (user_number != 0){
        temp_number = user_number % 10;
        sum += temp_number;
        user_number /= 10;
    }

    printf("%d sum of digits is: %d", num, sum);
}

void factorial()
{
    int sum = 1, user_number;

    puts("Enter a number: ");
    scanf("%d", &user_number);

    for(int i = 1; i <= user_number; i++){
        
        sum *= i;
        
    }

    printf("\n%d factorial equals: %d", user_number, sum);
}

int main()
{
    int input;
    
    printf("Things you are able to do is: ");

    for(int i = 0; i < 12; i++){
        printf("%s", str[i]);
    }

    while (input != 2)
    {
        puts("\nWhat would you like to do: ");
        scanf("%d", &input);

        if (input == 1){ 
            Hello_World();
        }
        else if (input == 3){
            print_Integer();
        }
        else if (input == 4){
            add_Number();
        }
        else if (input == 5){
            subtract_number();
        }
        else if (input == 6){
            mutliply_number();
        }
        else if (input == 7){
            divide_number();
        }
        else if (input == 8){
            odd_Even();
        }
        else if(input == 9){
            check_vowel();
        }
        else if(input == 10){
            leap_year();
        }
        else if(input == 11){
            sum_Digits();
        }
        else if(input == 12){
            factorial();
        }
        
    }
    
    return 0;
}
