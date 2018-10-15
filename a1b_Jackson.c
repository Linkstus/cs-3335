/*
  Name: James Jackson
  Course: Cs-3335
  Year: Fall 2018
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ATTEMPTS 10
#define SUCCESS "Congrats you got the right number!"
#define FAILURE "I'm sorry you did not guess the right number within the allotted attempts. The correct number was"
#define TOOLOW "Your guess was to low"
#define TOOHIGH "Your guess was to high"

void guessing(int new_attempts, int rn)
{
    printf("\n\nThe number of attempts you have left: %d", new_attempts);
    
    if(new_attempts == 0)
    {
      printf("\n%s %d", FAILURE, rn);
    }
    else
    {
      int user;

      puts("\nEnter a number between 0-100");
      scanf("%d", &user);

      if(user < rn)
      {
        printf("%s", TOOLOW);
        
        new_attempts--;

        guessing(new_attempts, rn);
      }
      else if(user > rn)
      {
        printf("%s", TOOHIGH);

        new_attempts--;

        guessing(new_attempts, rn);
      }
      else
      {
        printf("%s", SUCCESS);
      }
    }
}


int main()
{
    srand(time(NULL));  

    int random_number = rand() % 101;

    guessing(ATTEMPTS, random_number);

    return 0;
}

