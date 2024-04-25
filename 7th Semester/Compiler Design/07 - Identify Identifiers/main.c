#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trim_newline(char *str)
{
    int len = strlen(str);
    while (len > 0 && (str[len - 1] == '\n'))
    {
        str[len - 1] = '\0';
        len--;
    }
}

int main()
{
    FILE *file = fopen("Rules.txt", "r");
    char keyword[100], line[100];
    char *fileContents = NULL;
    int len = 0;

    // Read and store file contents
    while (fgets(line, sizeof(line), file))
    {
        trim_newline(line);
        int lineLen = strlen(line);
        fileContents = realloc(fileContents, len + lineLen + 1);
        strcpy(fileContents + len, line);
        len += lineLen;
        fileContents[len++] = '\n'; // Add newline to separate the words
    }
    fclose(file);

    // Get user input
    printf("Enter a keyword to search: ");
    scanf("%99s", keyword);

    // Search for keyword
    int found = 0;
    char *token = strtok(fileContents, "\n");
    while (token)
    {
        if (strcmp(token, keyword) == 0)
        {
            found = 1;
            break;
        }
        token = strtok(NULL, "\n");
    }

    // Output result
    printf(found ? "Found\n" : "Not Found\n");

    // Free allocated memory
    free(fileContents);
    return 0;
}
