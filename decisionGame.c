#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define WIN "You Win"
#define LOSE "You Lose"
#define TIED "You Tied"

int boolean = 0, win = 0, lost = 0;
char *choices[] = {"Air", "Scissors", "Rock", "Paper", "Fire", "Water", "Sponge"};
char *airWeak[] = {"Paper", "Scissors", "Sponge"};
char *scissorWeak[] = {"Rock", "Fire", "Water"};
char *rockWeak[] = {"Paper", "Water", "Air"};
char *paperWeak[] = {"Scissors", "Fire", "Sponge"};
char *fireWeak[] = {"Rock", "Water", "Air"};
char *waterWeak[] = {"Paper", "Air", "Sponge"};
char *spongeWeak[] = {"Rock", "Fire", "Scissors"};

void winner(char user[20], char computer[20])
{
    if (strcmp(computer, "Scissors") == 0)
        for (int i = 0; i < sizeof(scissorWeak) / sizeof(scissorWeak[0]); i++)
        {
            if (strcmp(user, scissorWeak[i]) == 0)
                boolean = 1;
        }
    else if (strcmp(computer, "Rock") == 0)
        for (int i = 0; i < sizeof(rockWeak) / sizeof(rockWeak[0]); i++)
        {
            if (strcmp(user, rockWeak[i]) == 0)
                boolean = 1;
        }
    else if (strcmp(computer, "Paper") == 0)
        for (int i = 0; i < sizeof(paperWeak) / sizeof(paperWeak[0]); i++)
        {
            if (strcmp(user, paperWeak[i]) == 0)
                boolean = 1;
        }
    else if (strcmp(computer, "Fire") == 0)
        for (int i = 0; i < sizeof(fireWeak) / sizeof(fireWeak[0]); i++)
        {
            if (strcmp(user, fireWeak[i]) == 0)
                boolean = 1;
        }
    else if (strcmp(computer, "Water") == 0)
        for (int i = 0; i < sizeof(waterWeak) / sizeof(waterWeak[0]); i++)
        {
            if (strcmp(user, waterWeak[i]) == 0)
                boolean = 1;
        }
    else if (strcmp(computer, "Air") == 0)
        for (int i = 0; i < sizeof(airWeak) / sizeof(airWeak[0]); i++)
        {
            if (strcmp(user, airWeak[i]) == 0)
                boolean = 1;
        }
    else if (strcmp(computer, "Sponge") == 0)
        for (int i = 0; i < sizeof(spongeWeak) / sizeof(spongeWeak[0]); i++)
        {
            if (strcmp(user, spongeWeak[i]) == 0)
                boolean = 1;
        }
}

void tied(char user[20], char computer[20])
{
    if (strcmp(computer, user) == 0)
        printf("\t\t%s\n", TIED);
    else
    {
        printf("\t\t%s\n", LOSE);
        lost++;
    }
}

int computerChoice()
{
    srand(time(NULL));

    return rand() % 8;
}

int checkInput(char user[20])
{
    for (int i = 0; i < strlen(user); i++)
    {
        if (user[i] >= 'A' && user[i] <= 'Z' || user[i] >= 'a' && user[i] <= 'z')
            continue;
        else
        {
            return 1;
        }
    }
    return 0;
}

void toLowerCase(char str[20])
{
    for (int i = 1; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {

            str[i] = str[i] + 32;
        }
    }
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
}

void main()
{
    char user[20];
    int choice;

    while (strcmp(user, "end") != 0)
    {
        boolean = 0;
        printf("Type 'end' to close the program otherwise type a desicion: ");
        scanf("%s", &user);
        if (strcmp(user, "end") == 0)
            return;
        else if (checkInput(user) != 0)
            printf("Sorry that is not a proper input plz try again!\n\n");
        else
        {

            toLowerCase(user);

            choice = computerChoice();

            printf("\nYou chose %s\t\t computer chose %s \n", user, choices[choice]);

            winner(user, choices[choice]);

            if (boolean == 1)
            {
                printf("\t\t%s\n", WIN);
                win++;
            }
            else if (boolean == 0)
                tied(user, choices[choice]);

            printf("\n\tYour score is %d wins and %d loses\n\n", win, lost);
        }
    }
}