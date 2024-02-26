# to delete a folder using os.rmdir() method.
# folder must be empty to delete it. If it is not empty, it will raise an error.

import os

# create a folder before deleting it

# check if folder exists
if os.path.exists("myfolder"): # returns True or False
    os.rmdir("myfolder")
else:
    print("The folder does not exist")
