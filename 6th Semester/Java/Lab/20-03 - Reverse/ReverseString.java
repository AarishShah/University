
public class ReverseString
{
    public static void main(String[] args)
    {
        String input = "Sage is cute and 170 cm tall.";
        String reversed = "";

        for (int i = input.length() - 1; i >= 0; i--) // length() - 1 because the last index is length() - 1
        {
            reversed += input.charAt(i);
        }
        System.out.println("Reversed String is: " + reversed);
    }
}
