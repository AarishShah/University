// Write a program to replace the "<|Name>" string with the user input string.

import java.util.Scanner;

public class replace
{
    public static void main(String[] args)
    {

        System.out.print("Enter the name: ");
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();

        String salutation = "Dear <|Name>,";
        System.out.println("Letter template: " + salutation);

        String result = salutation.replace("<|Name>", name);

        System.out.println("Letter after replacing: " + result);
        sc.close();
        
        System.out.println("\nSyed Aarish Shah | CSE-20-50");

    }
}
