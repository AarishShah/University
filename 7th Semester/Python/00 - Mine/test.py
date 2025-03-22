def fruits(n):
    if n<=0:
        # exit
        return
    else:
        # execute
        fruits(n-1)
        print(n)
        fruits(n-1)
       

fruits(3)