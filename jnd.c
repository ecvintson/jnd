#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char const* const fileName = "jnlist.txt";
    FILE* file = fopen(fileName, "r"); 
    char line[50];
    char *nameList[50];
    int i = 0;

    while (fgets(line, sizeof(line), file)) {
        nameList[i] = strdup(line);
        printf("%s\n", nameList[i] );
        i = i +1;
    }

    printf("%s\n", nameList[1]);
    printf("%s\n", nameList[2]);
    fclose(file);

    return 0;
}