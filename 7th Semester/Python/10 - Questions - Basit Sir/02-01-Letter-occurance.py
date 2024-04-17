# Write a program to find the number of occurrences of each letter present in the given string.

letter_count = {}  # Dictionary to store letter counts

input_string = input("Enter a string: ")

for letter in input_string:  # Iterate over each character in the input string
    if letter.isalpha():  # Check if the character is a letter
        if letter in letter_count:  # Increment count if letter is already in the dictionary
            letter_count[letter] += 1
        else:
            # Add the letter to the dictionary with count 1
            letter_count[letter] = 1

# Using dictionary comprehension
# letter_count = {letter: input_string.count(letter) for letter in input_string if letter.isalpha()}

# Display the letter counts
print("\nLetter Occurrences:")
for letter, count in letter_count.items():
    print(f"'{letter}': {count}")

# Khushboo's program is better