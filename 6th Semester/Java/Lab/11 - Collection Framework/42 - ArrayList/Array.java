// Program to demonstrate ArrayList and its methods

import java.util.ArrayList;

public class Array
{
    public static void main(String[] args)
    {
        ArrayList<Integer> a1 = new ArrayList<Integer>();
        a1.add(1);
        a1.add(2);
        a1.add(3);
        a1.add(4);
        a1.add(5);
        a1.add(1, 70); // This will add 70 at index 1 and shift the rest of the elements to the right

        ArrayList<Integer> a2 = new ArrayList<>();
        a2.add(50);
        a2.add(60);
        a2.add(80);
        a2.add(80);

        ArrayList<Integer> a3 = new ArrayList<>();

        for (int i = 0; i < a1.size(); i++)
        {
            System.out.println(a1.get(i));
        }

        a1.addAll(a2);
        System.out.println("After adding a2 to a1" + a1);

        a1.clear();
        System.out.println("After clearing a1" + a1);

        a1.add(1);
        a1.add(2);
        a1.addAll(2, a2);
        System.out.println("After adding a2 to a1 at index 2" + a1);

        a3 = a1; // This will create a reference to a1 and not a copy
        System.out.println("a3 = a1" + a3);

        a3 = (ArrayList<Integer>) a1.clone(); // This will create a copy of a1
        System.out.println("Cloning a1 in a3: " + a3);

        System.out.println("a1 contains 1: " + a1.contains(1));
        System.out.println("Index of a1: " + a1.indexOf(80));
        System.out.println("Last index of a1: " + a1.lastIndexOf(80));
        System.out.println("After removing element at index 1: " + a1.remove(1) + " " + a1);
        System.out.println("After setting element at index 1 to 100: " + a1.set(1, 100) + " " + a1);

        System.out.println("\nSyed Aarish Shah | CSE=20-50");

    }
}
