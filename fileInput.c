
//Template:
// ObjectFile > outputFile
//                  ^ redirection
//objectFile < inputFile

int main()
{
    char *names[5] = {"Alice", "Bob", "Charlie", "Dave", "Elli"};
    int nums[5] = {98, 89, 92, 78, 83};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Name: %s\t Score: %d\n", names[i], nums[i]);
    }
    return 0;
}