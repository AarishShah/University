import pandas as pd

step = {
    "day1": 5000,
    "day2": 6000,
    "day3": 5500
}

s = pd.Series(step)
print(s)

print(s["day2"])


s = pd.Series(step, index=["day1", "day2", "day3", "day4"])
print(s)