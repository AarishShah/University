// Variable arguments

public class Vararag {
    static int sum(int... arr) {
        int add = 0;
        for (int a : arr) {
            add = add + a;
        }
        return add;
    }

    public static void main(String[] args)
    {
        System.out.println("Sum of 1 and 2 is: " + sum(1,2));
        System.out.println("Sum of 1 and 2 is: " + sum(1,2,3));
        System.out.println("Sum of 1 and 2 is: " + sum(1,2,3,4,5));

    }
}