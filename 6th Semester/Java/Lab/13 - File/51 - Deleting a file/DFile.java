import java.io.File;

public class DFile
{
    public static void main(String[] args)
    {
        File f = new File("first.txt");
        if (f.delete())
        {
            System.out.println("File deleted successfully");
        } else
        {
            System.out.println("File not deleted");
        }
        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}