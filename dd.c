#include <stdio.h>
#include <string.h>

int main()
{
    char user[10];

    puts("Welcome traveler to the dungeons and dragons character sheet. For know only 5th edition works"
    "more editions and features will be added later on. \n\n");

    puts("Are you starting a new character or picking up on one left off?\n");
    
    scanf("%s", &user);

    if(strcmp(user, "yes")){
        puts("alright let me have a name so that I may fetch the character sheet: \n");
    }
    else if(strcmp(user, "no")){
        puts("alright lets get started! \n");
    }
    else{
        puts("command not found");
    }
    return 0;
}