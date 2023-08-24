// Program to show writing to a file in Java

import java.io.FileWriter;
import java.io.IOException;

public class WFile
{
    public static void main(String[] args)
    {
        try
        {
            FileWriter fw = new FileWriter("first.txt");
            fw.write("Writing to a file in Java\n");
            fw.close();
            System.out.println("File written successfully");
        } catch (IOException e)
        {
            System.out.println("Error occurred");
            e.printStackTrace();
        }
        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}