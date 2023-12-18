def myfun(s):
    dict = {}

    for char in s:
        dict[char] = dict.get(char, 0)+1 # dict.get(key, default_value) returns the value of the key if it exists, else returns the default value
    return dict


sentence = "my name is khushi"
print(myfun(sentence))


'''
Here's how the dictionary char_count is updated for each character in the string:

input_string = 'defege'

For the first character 'd':
The dictionary is empty initially, so char_count.get('d', 0) returns 0.
The count is incremented by 1: 0 + 1 = 1.
The dictionary is updated: char_count['d'] = 1.

For the second character 'e':
The dictionary now contains {'d': 1}.
char_count.get('e', 0) returns 0.
The count is incremented by 1: 0 + 1 = 1.
The dictionary is updated: char_count['e'] = 1.

For the third character 'f':
The dictionary now contains {'d': 1, 'e': 1}.
char_count.get('f', 0) returns 0.
The count is incremented by 1: 0 + 1 = 1.
The dictionary is updated: char_count['f'] = 1.

For the fourth character 'e':
The dictionary now contains {'d': 1, 'e': 1, 'f': 1}.
char_count.get('e', 0) returns 1 (the existing count).
The count is incremented by 1: 1 + 1 = 2.
The dictionary is updated: char_count['e'] = 2.

For the fifth character 'g':
The dictionary now contains {'d': 1, 'e': 2, 'f': 1}.
char_count.get('g', 0) returns 0.
The count is incremented by 1: 0 + 1 = 1.
The dictionary is updated: char_count['g'] = 1.

For the sixth character 'e':
The dictionary now contains {'d': 1, 'e': 2, 'f': 1, 'g': 1}.
char_count.get('e', 0) returns 2 (the existing count).
The count is incremented by 1: 2 + 1 = 3.
The dictionary is updated: char_count['e'] = 3.
'''