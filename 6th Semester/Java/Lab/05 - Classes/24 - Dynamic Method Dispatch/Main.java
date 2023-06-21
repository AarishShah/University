// Program to demonstrate Dynamic Method Dispatch (done in class)
// Dynamic Method Dispatch in Java is the process by which a call to an overridden method is resolved at runtime (during the code execution).
// The concept of method overriding is the way to attain runtime polymorphism in Java.
// During the code execution, JVM decides which implementation of the same method should be called.

class student
{
    void welcome()
    {
        System.out.println("Hello and Welcome, Student");
    }
}

class notice extends student
{
    void welcome() // overriding welcome() method
    {
        System.out.println("Hello and welcome to sixth semester");
    }

    void sem()
    {
        System.out.println("Be happy");
    }
}

class Main
{
    public static void main(String[] args)
    {
        student s = new student();
        s.welcome(); // calls student's welcome function

        notice n = new notice();
        n.sem(); // calls notice's sem function
        n.welcome(); // calls notice's welcome function

        student j = new notice(); // object of notice class but reference of student class
        j.welcome(); // calls notice's welcome function because of dynamic method dispatch
        // t.sem(); // gives error as it cannot find symbol as sem() is not present in student

        // notice t = new student(); // Error: incompatible types: student cannot be
        // converted to notice as student is not derived from notice

        System.out.println("\nSyed Aarish Shah | CSE-20-50");

    }
}