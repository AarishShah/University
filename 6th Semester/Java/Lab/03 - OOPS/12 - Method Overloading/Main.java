// From notes in class. Program to demonstrate the concept of constructor overloading in Java.

class Student
{
    private int s1;
    private int s2;
    private int s3;

    public Student(int s1, int s2, int s3) // constructor
    {
        this.s1 = s1;
        this.s2 = s2;
        this.s3 = s3;
    }

    public Student(int s3) // constructor overloading
    {
        this(0, 0, s3); // calling the constructor
    }

    public Student(Student other) // copy constructor
    {
        this(other.s1, other.s2, other.s3);
    }

    // getters
    public int getS1()
    {
        return s1;
    }

    public int getS2()
    {
        return s2;
    }

    public int getS3()
    {
        return s3;
    }
}

public class Main
{
    public static void main(String[] args)
    {
        Student s = new Student(2, 3, 4);
        Student g = new Student(5);
        Student f = new Student(s);

        System.out.println("s1: " + s.getS1() + ", s2: " + s.getS2() + ", s3: " + s.getS3());
        System.out.println("s1: " + g.getS1() + ", s2: " + g.getS2() + ", s3: " + g.getS3());
        System.out.println("s1: " + f.getS1() + ", s2: " + f.getS2() + ", s3: " + f.getS3());

        System.out.println("\nSyed Aarish Shah | CSE-20-50");

    }
}
