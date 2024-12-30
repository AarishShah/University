my_list = [1,2,3]
print(my_list) # Will print the complete list

print(my_list[:]) # Will print the complete list. [:] means that it will slice the list from starting to end
print(my_list[1:]) # Will print from starting upto last index, index 1 included
print(my_list[:2]) # Will print from starting index upto index 2, excluding index 2

list2 = [1,2,3,4,5,6,7]
print(list2[1:5:2]) # Will print from starting index to index 5, incrementing the index by 2 each time - here, 1 is the starting index, 5 is the ending index and 2 is the increment value

print(type(my_list)) # Used to check the data type
print(my_list[0]) # 1st element of List

x = [1,2,"Seven", True, 8]

print(my_list[-1]) # Will subtract -1 from length of the list, and print the data present at that index

# A trick to remember the negative indexing is that, if you want to access the last element of the list, you can simply use -1 as the index, if you want to access the second last element of the list, you can simply use -2 as the index and so on.

if 2 in my_list:
    print(True)
else:
    print(False)

# List Comprehension
list1 = [i*i for i in range(5)] # before 'for' keyword it is same as 'list1.append()'
print(list1)

list3 = [i*i for i in range(10) if i%2==0] # This is a list comprehension which will print the square of all the even numbers from 0 to 9
print(list3)

# It is same as:
list4 = []
for i in range(10):
    if i%2==0:
        list4.append(i*i)
print(list4)

# a list is a data structure for storing a sequence of values
# a list comprehension is a method for creating lists in a concise and potentially more readable way.