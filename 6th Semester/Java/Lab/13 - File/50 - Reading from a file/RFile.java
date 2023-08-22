import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class RFile
{
    public static void main(String[] args)
    {
        try
        {
            File f = new File("first.txt");
            Scanner sc = new Scanner(f); // Scanner class is used to read from a file instead of System.in as in case of keyboard input
            while (sc.hasNextLine()) // hasNextLine() method returns true if there is another line in the input of this scanner

            {
                System.out.println(sc.nextLine());
            }

            sc.close();
            
        } catch (FileNotFoundException e)
        {
            System.out.println("Error occurred");
        }
        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}