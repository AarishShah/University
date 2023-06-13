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
        Student s = new SixthSem();
        s.greet();
        // s.fn1(); // error as s is of type Student and Student class does not have fn1
        // method
        SixthSem s1 = new SixthSem();
        s1.greet();
        s1.fn1();
    }
}
