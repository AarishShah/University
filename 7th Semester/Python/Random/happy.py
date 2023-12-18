def myfun(s):
 dict = {}

 for char in sentence:
    dict[char] = dict.get(char,0)+1
 return dict

sentence = "my name is khushi"
print(myfun(sentence))