// Serialize and deserialize a class with static variables
// Serialization is a mechanism of converting the state of an object into a byte stream.
// Deserialization is the reverse process where the byte stream is used to recreate the actual Java object in memory.
// This mechanism is used to persist the object.
// The byte stream created is platform independent.
// So, the object serialized on one platform can be deserialized on a different platform.
// Not done in lab

import java.io.*;

class Student implements Serializable
{
    private static final long serialVersionUID = 2L;
    int x;
    static int y; // static variable is not serialized
    String str;
    int marks;

    public Student(String str, int marks, int x, int y)
    {
        this.str = str;
        this.marks = marks;
        this.x = x;
        // this.y = y;
        Student.y = y; // to access a static variable, we need to use the class name
    }
}

public class Main
{
    public static void sdetails(Student s1)
    {
        System.out.println("Name = " + s1.str);
        System.out.println("marks = " + s1.marks);
        System.out.println("x = " + s1.x);
        System.out.println("y = " + Student.y);
    }

    public static void printData(Student s)
    {
        System.out.println("Printing student data:");
        sdetails(s);
    }

    public static void main(String[] args)
    {
        Student s = new Student("ABC", 90, 2, 60);
        String fname = "try.txt";

        try
        {
            // Serialization
            FileOutputStream f = new FileOutputStream(fname);
            ObjectOutputStream o = new ObjectOutputStream(f);

            o.writeObject(s);
            o.close();
            f.close();

            System.out.println("Serialization done");
            printData(s);
            // s.y = 40;
            Student.y = 40; // to access a static variable, we need to use the class name
        }
        catch (IOException e)
        {
            System.out.println(e);
        }

        try
        {
            // Deserialization
            FileInputStream f = new FileInputStream(fname);
            ObjectInputStream i = new ObjectInputStream(f);

            s = (Student) i.readObject();
            i.close();
            f.close();

            System.out.println("Deserialization done");
            printData(s);
        }
        catch (IOException | ClassNotFoundException e)
        {
            System.out.println(e);
        }
    }
}