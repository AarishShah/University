// Program to demonstrate the use of 'this' keyword in Java. From notes in class.
public class ThisKeyword
{
    int a;

    public int fn(int a)
    {
        this.a = a;  // 'this' keyword is used to refer to the current object. 'this.a' is the instance variable and 'a' is the local variable 
        return a + 3;
    }

    public static void main(String[] args)

    {
        ThisKeyword s = new ThisKeyword();
        int result = s.fn(10);
        System.out.println("Value of 'a': " + s.a); // Accessing the instance variable 'a' of the object 's' using 's.a'
        System.out.println("Returned value from 'fn' method: " + result); // Printing the returned value from 'fn' method

        System.out.println("\nSyed Aarish Shah | CSE-20-50");

    }
}