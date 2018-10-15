//Each file
// ----- open
// ----- process (read, write)
// ----- close(imp for output file);
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *ifp, *ofp;
    char *mode = "r";
    char outputFilename[] = "letter.txt";
    char username[9]; //One extra for null char.
    int score;

    ifp = fopen("grade.txt", mode);

    if (ifp == NULL)
    {
        fprintf(stderr, "Can't open input file!\n");
        exit(1);
    }

    ofp = fopen(outputFilename, "w");

    if (ofp == NULL)
    {
        fprintf(stderr, "Can't open output file %s!\n", outputFilename);
        exit(1);
    }
}