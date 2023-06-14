import java.util.Scanner;

public class palindrome
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the string: ");
        String input = sc.nextLine();

        // String input = "Sage"; // is palindrome
        // String input = "level"; // not palindrome

        int length = input.length();
        int j = length - 1;
        boolean isPalindrome = true;

        for (int i = 0; i < length / 2; i++)  // Comparing beyond the middle is redundant since the characters have already been compared. Hence we don't use 'i <= length / 2'
        {
            if (input.charAt(i) != input.charAt(j))
            {
                isPalindrome = false;
            }
            j--;
        }

        if (isPalindrome)
        {
            System.out.println("The string is a palindrome.");
        } else
        {
            System.out.println("The string is not a palindrome.");
        }

        sc.close();
    }
}
