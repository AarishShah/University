// Program to demonstrate the use of throw keyword

import java.util.Scanner;

class sampleExcep extends Exception
{
    public String toString() // overriding the toString() method
    {
        return "I am toString() Method";
    }

    public String getMessage()
    {
        return "I am getMessage() method";
    }
}

class Main
{
    public static void main(String[] args)
    {
        int marks;
        System.out.print("Enter marks: ");
        Scanner sc = new Scanner(System.in);
        marks = sc.nextInt();

        try
        {
            if (marks > 100) // since we are assuming the max value of marks to be 100
            {
                sc.close(); // close the scanner before throwing the exception
                throw new sampleExcep();
            } else
            {
                System.out.println("Marks: " + marks);
            }
        } catch (sampleExcep e)
        {
            System.out.println(e.getMessage());
            System.out.println(e.toString());
            System.out.println(e);
            e.printStackTrace();
        }

        sc.close(); // close the scanner after throwing the exception

        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}