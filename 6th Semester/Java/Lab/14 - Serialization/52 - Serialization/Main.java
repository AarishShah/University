// Program to serialize an object
// Not done in Lab

import java.io.*;

class Serial implements Serializable
{
    private static final long serialVersionUID = -5900880339536856193L;

    public int x;
    public String Name;

    public Serial(int x, String Name)
    {
        this.x = x;
        this.Name = Name;
    }
}

public class Main
{
    public static void main(String[] args)
    {
        Serial s = new Serial(5, "Java");
        String str = "try.txt";

        try
        {
            FileOutputStream fos = new FileOutputStream(str); // Creating a file
            ObjectOutputStream oos = new ObjectOutputStream(fos); // Creating an object stream

            oos.writeObject(s); // Serializing the object
            oos.close();
            fos.close();

            System.out.println("Object has been serialized");
        }
        catch (IOException e)
        {
            System.out.println("Exception: " + e);
        }
    }
}