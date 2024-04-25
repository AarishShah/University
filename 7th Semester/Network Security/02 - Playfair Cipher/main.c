#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 5

void generateKeytable(char key[], char keytable[SIZE][SIZE])
{
    int i, j, flag = 0;
    char taken[26] = {0};
    taken['J' - 'A'] = 1; // Skip 'J' in the key table

    for (i = 0; i < strlen(key); i++)
    {
        if (key[i] == 'J')
            key[i] = 'I'; // Convert 'J' to 'I'
        if (!taken[toupper(key[i]) - 'A'])
        {
            keytable[flag / SIZE][flag % SIZE] = toupper(key[i]);
            taken[toupper(key[i]) - 'A'] = 1;
            ++flag;
        }
    }

    for (i = 0; i < 26; i++)
    { // Fill the rest of the keytable
        if (!taken[i])
        {
            keytable[flag / SIZE][flag % SIZE] = i + 'A';
            ++flag;
        }
    }
}

void findPosition(char keytable[SIZE][SIZE], char ch, int *row, int *col)
{
    if (ch == 'J')
        ch = 'I'; // Convert 'J' to 'I'
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            if (keytable[i][j] == toupper(ch))
            {
                *row = i;
                *col = j;
                return;
            }
        }
    }
}

void encrypt(char keytable[SIZE][SIZE], char plaintext[])
{
    int row1, col1, row2, col2;
    int length = strlen(plaintext);
    for (int i = 0; i < length - 1; i += 2)
    {
        findPosition(keytable, plaintext[i], &row1, &col1);
        if (i + 1 < length)
        {
            findPosition(keytable, plaintext[i + 1], &row2, &col2);
        }
        else
        {
            // Use 'X' as filler for the last unpaired character
            findPosition(keytable, 'X', &row2, &col2);
        }

        if (row1 == row2)
        {
            printf("%c%c ", keytable[row1][(col1 + 1) % SIZE], keytable[row2][(col2 + 1) % SIZE]);
        }
        else if (col1 == col2)
        {
            printf("%c%c ", keytable[(row1 + 1) % SIZE][col1], keytable[(row2 + 1) % SIZE][col2]);
        }
        else
        {
            printf("%c%c ", keytable[row1][col2], keytable[row2][col1]);
        }
    }
}

int main()
{
    char key[26];
    char plaintext[100];
    char adjustedText[200]; // Adjusted for potential padding

    printf("Enter the key: ");
    scanf("%s", key);
    printf("Enter the plaintext: ");
    scanf("%s", plaintext);

    int len = strlen(plaintext), index = 0;

    // Prepare text: remove non-alpha characters, convert to upper case, add 'X' for duplicates
    for (int i = 0; i < len; i++)
    {
        if (isalpha(plaintext[i]))
        {
            adjustedText[index++] = toupper(plaintext[i]);
            // Check next character and add 'X' if it's the same
            if (i < len - 1 && toupper(plaintext[i]) == toupper(plaintext[i + 1]))
            {
                adjustedText[index++] = 'X';
            }
        }
    }
    // If the length of adjustedText is odd, append 'X'
    if (index % 2 != 0)
    {
        adjustedText[index++] = 'X';
    }
    adjustedText[index] = '\0'; // Null-terminate the adjusted text

    char keytable[SIZE][SIZE];
    generateKeytable(key, keytable);

    printf("\nKeytable:\n");
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            printf("%c ", keytable[i][j]);
        }
        printf("\n");
    }

    printf("\nEncrypted Text: ");
    encrypt(keytable, adjustedText);

    return 0;
}