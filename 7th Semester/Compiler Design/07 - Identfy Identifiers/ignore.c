#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trim_newline(char *str)
{
    int len = strlen(str);
    while (len > 0 && (str[len - 1] == '\n' || str[len - 1] == '\r' || str[len - 1] == ' '))
    {
        str[len - 1] = '\0';
        len--;
    }
}

int main()
{
    FILE *file;
    char *filename = "Rules.txt";
    char keyword[100];
    char line[100];
    int found = 0;

    // Open file for reading
    file = fopen(filename, "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error opening file: %s\n", filename);
        return EXIT_FAILURE;
    }

    // Read file contents into a variable
    char *fileContents = NULL;
    size_t len = 0;
    while (fgets(line, sizeof(line), file))
    {
        trim_newline(line); // Remove newline and trailing spaces
        size_t lineLen = strlen(line);
        fileContents = realloc(fileContents, len + lineLen + 1);
        strcpy(fileContents + len, line);
        len += lineLen;
        fileContents[len++] = '\n'; // Re-add newline character for each line
    }

    // Close the file
    fclose(file);

    // Prompt user for a keyword
    printf("Enter a keyword to search: ");
    scanf("%99s", keyword);

    // Search for the keyword in the file contents
    char *token = strtok(fileContents, "\n");
    while (token != NULL)
    {
        if (strcmp(token, keyword) == 0)
        {
            found = 1;
            break;
        }
        token = strtok(NULL, "\n");
    }

    // Output result based on search
    if (found)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not Found\n");
    }

    // Free allocated memory
    free(fileContents);

    return EXIT_SUCCESS;
}
