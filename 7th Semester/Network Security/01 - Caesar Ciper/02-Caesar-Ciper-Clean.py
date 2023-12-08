def caesar_cipher(text, shift):
    result = ""

    for char in text:
        if char.isalpha():  # Check if the character is a letter
            if char.isupper():
                start = 65
            else:
                start = 97
           
            ascii_code = ord(char)
            shifted_value = ascii_code + shift - start
            wrapped_value = shifted_value % 26
            final_value = wrapped_value + start
            result = result + chr(final_value)

        else:
            result += char

    return result

input_text = input("Enter a text to encrypt: ")
shift_amount = int(input("Enter the shift amount: "))
encrypted_text = caesar_cipher(input_text, shift_amount)
print(encrypted_text)
