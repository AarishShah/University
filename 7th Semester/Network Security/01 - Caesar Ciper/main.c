#include <stdio.h>
#include <string.h>
#include <ctype.h> // For isalpha(), isupper()

void caesar_cipher(char text[], int shift)
{
    int i = 0;
    char char_shifted;

    while (text[i] != '\0')
    {
        if (isalpha(text[i])) // Check if the character is an alphabet
        {
            char start = isupper(text[i]) ? 'A' : 'a'; // Determine the start of the alphabet. 65 for uppercase, 97 for lowercase
            text[i] = ((text[i] - start + shift) % 26) + start; // e.g. we got Z (90) and shift is 3 then [(90(Z) - 65(A) + 3 % 26) + 65(A)] = [28 % 26 + 65] = [2 + 65] = 67(C)
        }
        i++;
    }
}

void caesar_decipher(char text[], int shift)
{
    int i = 0;
    char char_shifted;

    while (text[i] != '\0')
    {
        if (isalpha(text[i])) // Check if the character is an alphabet
        {
            char start = isupper(text[i]) ? 'A' : 'a'; // Determine the start of the alphabet. 65 for uppercase, 97 for lowercase
            text[i] = ((text[i] - start - shift + 26) % 26) + start; // e.g. we got Z (90) and shift is 3 then [(90(Z) - 65(A) + 3 % 26) + 65(A)] = [28 % 26 + 65] = [2 + 65] = 67(C)
        }
        i++;
    }
}

int main()
{
    char input_text[256];
    int shift_amount;

    printf("Enter a text to encrypt: ");
    fgets(input_text, sizeof(input_text), stdin);
    input_text[strcspn(input_text, "\n")] = 0; // Remove newline character from input

    printf("Enter the shift amount: ");
    scanf("%d", &shift_amount);

    caesar_cipher(input_text, shift_amount);
    // caesar_decipher(input_text, shift_amount);

    printf("Encrypted text: %s\n", input_text);

    return 0;
}
