class Student
{
    public void greet()
    {
        System.out.println("Welcome students");
    }
}

class SixthSem extends Student
{
    public void greet()
    {
        System.out.println("Welcome sixth Semester Students");
    }

    void fn1()
    {
        System.out.println("fn1");
    }

    public static void main(String[] args)
    {
        Student s = new SixthSem(); // upcasting: means a subclass object is assigned to a superclass reference variable.
        s.greet();
        // s.fn1(); // error as s is of type Student and Student class does not have fn1
        ((SixthSem) s).fn1(); // downcasting: means a superclass reference variable is assigned to a subclass object.
        
        SixthSem s1 = new SixthSem();
        s1.greet();
        s1.fn1();

        System.out.println("\nSyed Aarish Shah | CSE-20-50");

    }
}
