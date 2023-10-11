// Program to deserialize an object
// Not done in Lab

import java.io.*;

class Serial implements Serializable
{
    private static final long serialVersionUID = -5900880339536856193L;

    public int x;
    public String Name; // keep in mind that the variable name must be the same as the one in the serialized object

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
        // Serial s = new Serial(5, "Java");
        String str = "try.txt";
        Serial s1 = null;

        try
        {
            // Reading the object from a file
            FileInputStream fis = new FileInputStream(str); // Creating a file
            ObjectInputStream ois = new ObjectInputStream(fis); // Creating an object stream

            s1 = (Serial) ois.readObject(); // Deserializing the object
            ois.close();
            fis.close();

            System.out.println("Object has been deserialized");
            System.out.println("x = " + s1.x);
            System.out.println("str = " + s1.Name);
        } catch (IOException e)
        {
            System.out.println("Exception: " + e);
        } catch (ClassNotFoundException e)
        {
            System.out.println("Exception: " + e);
        }
    }
}