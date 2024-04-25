#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 5

// Function to generate the key table
void generateKeyTable(char key[], char keyTable[SIZE][SIZE])
{
    int i, j, k;
    char taken[26] = {0};

    // Initialize key table with zeros
    for (i = 0; i < SIZE; ++i)
    {
        for (j = 0; j < SIZE; ++j)
        {
            keyTable[i][j] = 0;
        }
    }

    // Fill in the key
    int flag = 0;
    for (k = 0; k < strlen(key); ++k)
    {
        if (key[k] == 'J')
        {
            key[k] = 'I'; // Treat 'J' as 'I'
        }
        if (taken[toupper(key[k]) - 'A'] == 0)
        {
            keyTable[flag / SIZE][flag % SIZE] = toupper(key[k]);
            taken[toupper(key[k]) - 'A'] = 1;
            ++flag;
        }
    }

    // Fill the remaining cells with the alphabet
    char alphabet = 'A';
    for (i = 0; i < SIZE; ++i)
    {
        for (j = 0; j < SIZE; ++j)
        {
            if (keyTable[i][j] == 0)
            {
                while (taken[alphabet - 'A'] == 1 || (alphabet == 'J' && taken['I' - 'A'] == 1))
                {
                    ++alphabet;
                }
                keyTable[i][j] = alphabet;
                taken[alphabet - 'A'] = 1;
                ++alphabet;
            }
        }
    }
}

// Function to find the position of a letter in the key table
void findPosition(char keyTable[SIZE][SIZE], char ch, int *row, int *col)
{
    if (ch == 'J')
    {
        ch = 'I'; // Treat 'J' as 'I'
    }
    int i, j;
    for (i = 0; i < SIZE; ++i)
    {
        for (j = 0; j < SIZE; ++j)
        {
            if (keyTable[i][j] == toupper(ch))
            {
                *row = i;
                *col = j;
                return;
            }
        }
    }
}

// Function to encrypt plaintext using the Playfair cipher
void encrypt(char keyTable[SIZE][SIZE], char plaintext[])
{
    int len = strlen(plaintext);
    char modifiedPlaintext[len * 2]; // Maximum possible length after inserting 'x' and 'z'

    // Step 1: Remove spaces and punctuation from the plaintext and convert to uppercase
    int j = 0;
    for (int i = 0; i < len; ++i)
    {
        if (isalpha(plaintext[i]))
        {
            modifiedPlaintext[j++] = toupper(plaintext[i]);
        }
    }
    modifiedPlaintext[j] = '\0'; // Null-terminate the modified plaintext

    // Step 2: Split into pairs of letters and encrypt, preserving word boundaries
    for (int i = 0; i < j; i += 2)
    {
        // If the next character is a space or the end of the string, just print it and continue
        if (modifiedPlaintext[i + 1] == '\0' || modifiedPlaintext[i + 1] == ' ')
        {
            printf("%c ", modifiedPlaintext[i]);
            continue;
        }

        int row1, col1, row2, col2;
        findPosition(keyTable, modifiedPlaintext[i], &row1, &col1);
        findPosition(keyTable, modifiedPlaintext[i + 1], &row2, &col2);

        if (row1 == row2)
        {
            printf("%c%c ", keyTable[row1][(col1 + 1) % SIZE], keyTable[row2][(col2 + 1) % SIZE]);
        }
        else if (col1 == col2)
        {
            printf("%c%c ", keyTable[(row1 + 1) % SIZE][col1], keyTable[(row2 + 1) % SIZE][col2]);
        }
        else
        {
            printf("%c%c ", keyTable[row1][col2], keyTable[row2][col1]);
        }
    }
}

void shiftRepeatedLetter(char *input, char *output) {
    int len = strlen(input);
    int j = 0;

    for (int i = 0; i < len; i += 2) {
        output[j++] = input[i];
        if (i + 1 < len && input[i] == input[i + 1]) {
            output[j++] = 'X';
            output[j++] = input[i + 1];
        } else if (i + 1 < len) {
            output[j++] = input[i + 1];
        }
    }

    // Check if the length of output after checking is odd, add 'X' at the end
    if (j % 2 != 0) {
        output[j++] = 'X';
    }

    output[j] = '\0';
}

int main()
{
    char keyword[26];
    char plaintext[100];
    char keyTable[SIZE][SIZE];
    char temp[100];
    // Input keyword and plaintext
    printf("Enter the keyword: ");
    scanf("%s", keyword);

    printf("Enter the plaintext: ");
    scanf("%s", plaintext);

   // for adding filler
    strcpy(temp,plaintext);
     shiftRepeatedLetter(temp,plaintext);


    // Validate keyword and plaintext
    for (int i = 0; i < strlen(keyword); ++i)
    {
        if (!isalpha(keyword[i]))
        {
            printf("Invalid keyword!\n");
            return 1;
        }
    }

    for (int i = 0; i < strlen(plaintext); ++i)
    {
        if (!isalpha(plaintext[i]))
        {
            printf("Invalid plaintext!\n");
            return 1;
        }
    }

    // Generate the key table
    generateKeyTable(keyword, keyTable);

    // Print the key table
    printf("\nKey Table:\n");
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            printf("%c ", keyTable[i][j]);
        }
        printf("\n");
    }

    // Encrypt the plaintext using the key table
    printf("\nEncrypted Text: ");
    encrypt(keyTable, plaintext);

    return 0;
}