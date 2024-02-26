
# Modes of open() Function in Python
# 'r' - Read mode
# 'w' - Write mode
# 'a' - Append mode
# 'x' - Exclusive creation mode, fails if the file already exists
# 't' - Text mode (default)
# 'b' - Binary mode (e.g. images, audio, etc.)

# Examples:
# open("try.txt")  # Opens in read mode by default
open("try.txt", "r")  # Explicitly opens in read mode
open("try.txt", "w")  # Opens in write mode
open("try.txt", "a")  # Opens in append mode
open("try.txt", "x")  # If it does not exist, it creates the file.
open("try.txt", "rt")  # Opens in text read mode (default)
open("try.txt", "rb")  # Opens in binary read mode

# Example:
file = open("file-1.txt", "x")
print(file.read())
file.close()