test_string = "There are 223 apples for 4 persons"

numbers = []
for char in test_string:
    if char.isdigit():
        numbers.append(int(char))

print("The numbers list is:", numbers)