# deletion of a file
# we need to import os module

import os

# check if file exists
if os.path.exists("try.txt"): # returns True or False
    os.remove("try.txt")
else:
    print("The file does not exist")