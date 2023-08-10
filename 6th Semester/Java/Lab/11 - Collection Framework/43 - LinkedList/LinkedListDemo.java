// A program for demonstrating the use of LinkedList class. Java LinkedList class uses doubly linked list to store the elements. It inherits the AbstractList class and implements List and Deque interfaces.

import java.util.LinkedList;

public class LinkedListDemo {
    public static void main(String[] args) {
        LinkedList<Integer> l1 = new LinkedList<>();
        l1.add(1);
        l1.add(2);
        l1.add(3);
        l1.add(4);
        l1.add(5);
        l1.add(1, 70); // This will add 70 at index 1 and shift the rest of the elements to the right

        LinkedList<Integer> l2 = new LinkedList<>();
        l2.add(50);
        l2.add(60);
        l2.add(80);
        l2.add(80);

        LinkedList<Integer> l3 = new LinkedList<>();

        for (int i = 0; i < l1.size(); i++) {
            System.out.println(l1.get(i));
        }

        l1.addAll(l2);
        System.out.println("After adding l2 to l1: " + l1);

        l1.clear();
        System.out.println("After clearing l1: " + l1);

        l1.add(1);
        l1.add(2);
        l1.addAll(2, l2);
        System.out.println("After adding l2 to l1 at index 2: " + l1);

        l3 = l1; // This will create a reference to l1 and not a copy
        System.out.println("l3 = l1: " + l3);

        l3 = new LinkedList<>(l1); // This will create a copy of l1
        System.out.println("Copying l1 to l3: " + l3);

        System.out.println("l1 contains 1: " + l1.contains(1));
        System.out.println("Index of 80 in l1: " + l1.indexOf(80));
        System.out.println("Last index of 80 in l1: " + l1.lastIndexOf(80));
        System.out.println("After removing element at index 1: " + l1.remove(1) + " " + l1);
        System.out.println("After setting element at index 1 to 100: " + l1.set(1, 100) + " " + l1);

        System.out.println("\nSyed Aarish Shah | CSE=20-50");
    }
}
