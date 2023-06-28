// Write a program to count the number of words in a string.

public class WordCount
{
    public static void main(String[] args)
    {
        String input = "She is not real! Ain't that disappointingly sad.";

        // Remove leading and trailing whitespaces
        input = input.trim(); 

        // Split the string into words
        String[] words = input.split("\\s+"); // split on whitespace (\\s+) regex pattern (\\s+ means one or more whitespace characters)

        // for (String word : words)
        // {
        //     System.out.print(word + "~~"); // ["She", "is", "not", "real!", "Ain't", "that", "disappointingly", "sad."]
        // }

        // Count the number of words
        int wordCount = words.length; // length of the array

        System.out.println("Number of words: " + wordCount);

        System.out.println("\nSyed Aarish Shah | CSE-20-50");

    }
}

/*  // My original code

for (int i = 0; i < length - 1; i++)
        {
            if (input.charAt(i) == ' ') // my code only works properly if one space is used. For consecutive whitespace in the middle of a string this code fails.
            {
                count = count + 1;
            }
        }
*/