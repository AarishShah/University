# writing to a file
# write() - write to the file that has been opened. It will overwrite the file.
# append mode - a
# write mode - w

file = open("try.txt", "w")
file.write("Hello World")
file.close()