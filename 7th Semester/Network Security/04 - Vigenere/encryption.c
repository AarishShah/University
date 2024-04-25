#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to perform Vigenère encryption
void vigenereEncrypt(char *text, const char *key)
{
    int keyLength = strlen(key);
    int j = 0; // key index

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            char caseOffset = isupper(text[i]) ? 'A' : 'a';
            int shift = key[j % keyLength] - 'A';
            text[i] = (text[i] - caseOffset + shift + 26) % 26 + caseOffset;
            j++; // increment only for alphabetic characters
        }
    }
}

int main()
{
    char text[100];
    char key[100];
    int choice;

    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0; // remove newline character

    printf("Enter the key: ");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = 0; // remove newline character

    // Validate and convert key to uppercase
    for (int i = 0; key[i] != '\0'; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Invalid key! Only alphabetic characters are allowed.\n");
            return 1;
        }
        key[i] = toupper(key[i]);
    }

        vigenereEncrypt(text, key);
        printf("\nEncrypted Text: %s\n", text);

    return 0;
}