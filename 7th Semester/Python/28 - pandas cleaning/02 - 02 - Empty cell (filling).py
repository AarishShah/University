# Fill Empty Cells - The fillna() method allows us to replace empty cells with a value

import pandas as pd

s = pd.read_csv('data.csv')
t = s.fillna(50, inplace=True) # replaces empty cells with 50 in the original DataFrame
print(s.to_string())
