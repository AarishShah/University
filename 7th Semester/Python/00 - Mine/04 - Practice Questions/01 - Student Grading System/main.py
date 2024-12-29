'''
Student Grading System

Write a Python program that:
Takes input for a student's name, roll number, and marks in 5 subjects.
Calculates the total and average marks.
Determines the grade based on the average (use conditional statements):
90+ = A
75-89 = B
50-74 = C
Below 50 = Fail
Print the details (using string operations for formatting) and store them in a dictionary.
'''

report = {}

while (True):


    print('''Select an option:
          1 - Create a makrs card
          2 - View the marks card
          3 - Exit          
          ''')
    option = int(input())
    
    match option:
        case 1:
            print('Please fill the following information:')
            name = input("Enter the name of the student: ")
            roll = int(input("Enter the roll number: "))

            #  list of subjects
            subjects = {"English": 0.0, "Science": 0.0, "Math": 0.0, "Urdu": 0.0, "History": 0.0}
            for k,v in subjects.items():
                Display_message = f"Enter marks Obtained in {k}: "
                subjects[k] = float(input(Display_message))

            print("`````````````````````````````````")
            print(f"Roll no. {roll}, {name} has:")
            for k,v in subjects.items():
                print(f"{v} marks in {k}")       


            report["Name"] = name
            report["Roll Number"] = roll
            report["Marks"] = subjects

        case 2:
            print('Viewing the marks card')
            for k,v in report.items():
                print(f"{k} - {v}")

        case 3:
            print('Exiting...')
            exit()

        case _:
            print('Exiting...')
            exit()
