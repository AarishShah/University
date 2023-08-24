// Program to show file creation in Java

import java.io.File;
import java.io.IOException;

public class CFile
{
    public static void main(String[] args)
    {

        File f = new File("first.txt");
        try
        {
            if (f.createNewFile())
            {
                System.out.println("File created successfully");

            } else
            {
                System.out.println("File already exist");
            }
        } catch (IOException e)
        {
            System.out.println("Error occurred");
            e.printStackTrace();
        }
        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}