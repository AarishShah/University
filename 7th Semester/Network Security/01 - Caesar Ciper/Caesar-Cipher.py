def caesar_cipher(text, shift):
    result = ""

    for char in text:
        if char.isalpha():  # Check if the character is a letter
            if char.isupper():
                start = 65  # ASCII code for 'A'. If it is uppercase then loop between 65 and 90
            else:
                start = 97  # ASCII code for 'a'. , If it is lowercase then loop between 97 and 122
           
            ascii_code = ord(char) # Get the ASCII code of char
            shifted_value = ascii_code + shift - start # Shift the ASCII code by the shift amount and subtract the start value (either 65 or 97). Eg. H(72) + 3 - 65 = 10
            wrapped_value = shifted_value % 26 # If the value is larger than 26, wrap it around. Eg. 10 % 26 = 10
            final_value = wrapped_value + start # Finally, convert the value back to ASCII. Eg. 10 + 65 = 75 = K
            result = result + chr(final_value)
            # result += chr((ord(char) + shift - start) % 26 + start) # Shift the character and wrap if necessary

        else:
            result += char  # If it's not a letter, add it as it is

    return result

input_text = input("Enter a text to encrypt: ")
shift_amount = int(input("Enter the shift amount: "))
encrypted_text = caesar_cipher(input_text, shift_amount)
print(encrypted_text)