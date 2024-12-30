# Solution to Question 1: Student Grading System

def student_grading_system():
    student_name = input("Enter student name: ")
    roll_number = input("Enter roll number: ")
    marks = []

    for i in range(1, 6):
        while True:
            try:
                mark = float(input(f"Enter marks for subject {i} (out of 100): "))
                if 0 <= mark <= 100:
                    marks.append(mark)
                    break
                else:
                    print("Please enter marks between 0 and 100.")
            except ValueError:
                print("Invalid input. Please enter a valid number.")

    total_marks = sum(marks)
    average_marks = total_marks / 5

    if average_marks >= 90:
        grade = 'A'
    elif average_marks >= 75:
        grade = 'B'
    elif average_marks >= 50:
        grade = 'C'
    else:
        grade = 'Fail'

    student_details = {
        "Name": student_name,
        "Roll Number": roll_number,
        "Marks": marks,
        "Total Marks": total_marks,
        "Average Marks": average_marks,
        "Grade": grade
    }

    print("\nStudent Details:")
    for key, value in student_details.items():
        print(f"{key}: {value}")

student_grading_system()