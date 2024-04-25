#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to encrypt a message using Rail Fence Row Transformation
void railFenceEncrypt(char *plaintext, int rails)
{
    int len = strlen(plaintext);
    char *ciphertext = malloc(len + 1);

    int k = 0;
    for (int i = 0; i < rails; ++i)
    {
        for (int j = i; j < len; j += rails)
        {
            ciphertext[k++] = plaintext[j];
        }
    }

    ciphertext[len] = '\0';
    strcpy(plaintext, ciphertext);
    free(ciphertext);
}

// Function to decrypt a message using Rail Fence Row Transformation
void railFenceDecrypt(char *ciphertext, int rails)
{
    int len = strlen(ciphertext);
    char *plaintext = malloc(len + 1);

    int k = 0;
    for (int i = 0; i < rails; ++i)
    {
        for (int j = i; j < len; j += rails)
        {
            plaintext[j] = ciphertext[k++];
        }
    }

    plaintext[len] = '\0';
    strcpy(ciphertext, plaintext);
    free(plaintext);
}

int main()
{
    char message[100];
    int rails;

    printf("Enter the message: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = 0; // Remove newline character

    printf("Enter the number of rails: ");
    scanf("%d", &rails);

    if (rails <= 0)
    {
        printf("Invalid input!\n");
        return 1;
    }
    railFenceEncrypt(message, rails);
    printf("Encrypted Message: %s\n", message);

    return 0;
}