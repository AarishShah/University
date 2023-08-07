// Variable arguments

public class Vararag
{
    static int sum(int... arr) // ... is called ellipsis operator or varargs operator or variable arguments. It is used to pass variable number of arguments to a method. It is used in the case when we don't know the number of arguments to be passed to the method.
    {
        int add = 0;
        for (int a : arr)
        {
            add = add + a;
        }
        return add;
    }

    public static void main(String[] args)
    {
        System.out.println("Sum of 1 and 2 is: " + sum(1, 2));
        System.out.println("Sum of 1 and 2 is: " + sum(1, 2, 3));
        System.out.println("Sum of 1 and 2 is: " + sum(1, 2, 3, 4, 5));

    }
}
