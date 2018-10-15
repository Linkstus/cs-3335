#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*void signUp()
{
    puts("Test signUp");

    FILE *file;

    file = fopen("Documents\\paul_info.txt", "a+");

    char user_name[13];

    char temp[14];

    char password[8] = "3Wg546f9";

    puts("Enter a username between 1 - 12 characters ");
    scanf("%s", &temp);

    while (fscanf(file, "%s", user_name) != EOF)
    {
        if(strcmp(temp, user_name)
        {
            puts("Error, name is already in use, plz try again");
            signUp();
        }
    }

    strcpy(user_name, temp);

    fprintf(file, "%s : %s", user_name, password);
    
    fclose(file);

}*/

void random_number()
{

    srand(time(NULL));

    int start, end;

    puts("Enter a starting number: ");
    scanf("%d", &start);

    puts("\nEnter a ending number - starting number: ");
    scanf("%d", &end);

    printf("%d is your random number", rand() % end + start);
}

void open()
{
    char user[50];
    char start[] = "start ";

    puts("What program would you like to open: ");
    getchar();
    fgets(user, sizeof(user), stdin);

    char temp[strlen(start) + strlen(user)];

    strcpy(temp, start);
    strcat(temp, user);

    system(temp);
}

void count_string(char str[])
{
    printf("%d is the length of %s", strlen(str) - 1, str);
}

void search()
{
    char google[] = "start ";

    char first_half[] = "https:www.google.com/search?q=";
    char user[100];
    int pos = 0;

    puts("What would you like to search? ");
    getchar();
    fgets(user, sizeof(user), stdin);

    while (user[pos] != '\0')
    {
        if (user[pos] == ' ')
        {
            user[pos] = '+';
        }
        pos++;
    }

    char temp[strlen(google) + strlen(user) - 1];

    strcpy(temp, google);
    strcat(temp, first_half);
    strcat(temp, user);

    system(temp);
}

int main()
{
    /*char login[9];

    puts("Greetings, login or register");
    scanf("%s", &login);

    if(strcmp(login, "register"))
    {
        signUp();
    }
    else if(strcmp(login, "login"))
        login();

    else{
        puts("Sorry that is not a registered command");
    }*/

    char in[20];

    puts("Greetings User!");

    while (strcmp(in, "end") != 0)
    {

        puts("\nEnter a word");
        scanf("%s", &in);

        if (strcmp(in, "random_number") == 0)
            random_number();
        else if (strcmp(in, "open") == 0)
            open();
        else if (strcmp(in, "countstr") == 0)
        {
            char str[50];
            puts("Enter a word to count: ");

            getchar();
            fgets(str, 50, stdin);

            count_string(str);
        }
        else if (strcmp(in, "google") == 0)
        {
            search();
        }
        else
        {
            printf("Sorry that is now one of my commands\n");
        }
    }

    return 0;
}