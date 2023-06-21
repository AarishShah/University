// String manipulation: toLowerCase(), replace(), trim(), contains()

public class StringManipulation
{
    public static void main(String[] args)
    {
        String input = "Sage is  cute and 170   cm tall.";
        String lowercase = input.toLowerCase();
        String replaced = lowercase.replace(" ", "_");

        System.out.println("Original string: " + input);
        System.out.println("String in lowercase: " + lowercase);
        System.out.println("String with spaces replaced: " + replaced);

        // Detecting double spaces
        if (input.trim().contains("  "))
        {
            System.out.println("Double spaces detected in the original string.");
        } else
        {
            System.out.println("No double spaces found in the original string.");
        }

        // Detecting triple spaces
        if (input.trim().contains("   "))
        {
            System.out.println("Triple spaces detected in the original string.");
        } else
        {
            System.out.println("No triple spaces found in the original string.");
        }

        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}
