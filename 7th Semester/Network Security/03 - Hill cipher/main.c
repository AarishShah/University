#include <stdio.h>
#include <string.h>

// Function to generate the key matrix for the key string
void getKeyMatrix(const char *key, int keyMatrix[3][3])
{
    int k = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            keyMatrix[i][j] = (key[k]) % 65;
            k++;
        }
    }
}

// Function to encrypt the message
void encrypt(int cipherMatrix[3][1], int keyMatrix[3][3], int messageVector[3][1])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            cipherMatrix[i][j] = 0;
            for (int x = 0; x < 3; x++)
            {
                cipherMatrix[i][j] += keyMatrix[i][x] * messageVector[x][j];
            }
            cipherMatrix[i][j] = cipherMatrix[i][j] % 26;
        }
    }
}

// Function to implement Hill Cipher
void HillCipher(const char *message, const char *key)
{
    int keyMatrix[3][3];
    getKeyMatrix(key, keyMatrix);

    int messageVector[3][1];
    for (int i = 0; i < 3; i++)
    {
        messageVector[i][0] = (message[i]) % 65;
    }

    int cipherMatrix[3][1];
    encrypt(cipherMatrix, keyMatrix, messageVector);

    char CipherText[4] = {0}; // Plus one for the null terminator
    for (int i = 0; i < 3; i++)
    {
        CipherText[i] = cipherMatrix[i][0] + 65;
    }

    printf("Ciphertext: %s\n", CipherText);
}

// Main function to drive the code
int main()
{
    const char *message = "way";
    const char *key = "GYBNQKURP";
    HillCipher(message, key);
    return 0;
}
