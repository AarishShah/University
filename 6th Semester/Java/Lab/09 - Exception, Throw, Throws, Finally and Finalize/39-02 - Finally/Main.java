// better way to close the reader
// not done in the class

import java.io.*;

public class Main
{
    public static void main(String[] args)
    {
        BufferedReader reader = null;
        try
        {
            reader = new BufferedReader(new FileReader("myfile.txt"));
            String line = reader.readLine();
            System.out.println("Read line: " + line);
        } catch (FileNotFoundException e)
        {
            System.out.println("File not found: " + e.getMessage());
        } catch (IOException e)
        {
            System.out.println("Error reading file: " + e.getMessage());
        } finally
        {
            try
            {
                if (reader != null)
                {
                    reader.close();
                }
            } catch (IOException e)
            {
                System.out.println("Error closing reader: " + e.getMessage());
            }
        }
    }
}
