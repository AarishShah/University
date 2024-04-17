import pandas as pd

students = {
    "Python": {
        "s1": 100,
        "s2": 200,
        "s3": 300,
    },
    "Java": {
        "s1": 400,
        "s2": 500,
        "s4": 600,
    }
}

s = pd.DataFrame(students)
print(s)