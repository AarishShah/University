// Create a set and perform various operations on it

import java.util.HashSet;
import java.util.Set;

public class SetDemo {

    public static void main(String[] args) {
        Set<Integer> numberSet = new HashSet<>(); // HashSet implements Set interface and does not allow duplicate elements to be stored in it (it overwrites the previous value) and does not maintain the insertion order of the elements

        // Add elements to the set
        numberSet.add(5);
        numberSet.add(3);
        numberSet.add(9);
        numberSet.add(5);  // Will not be added since it's a duplicate
        numberSet.add(7);

        System.out.println("Set after adding numbers: " + numberSet);

        // Check if an element exists
        boolean exists = numberSet.contains(3);
        System.out.println("Does the set contain 3? " + exists);

        // Remove an element
        numberSet.remove(9);
        System.out.println("Set after removing 9: " + numberSet);

        // Size of the set
        int size = numberSet.size();
        System.out.println("Size of the set: " + size);

        // Iterate over a set
        System.out.println("Iterating over the set:");
        for (int num : numberSet) {
            System.out.println(num);
        }

        // Clear the set
        numberSet.clear();
        System.out.println("Set after clearing: " + numberSet);

        System.out.println("\nSyed Aarish Shah | CSE=20-50");
    }
}
