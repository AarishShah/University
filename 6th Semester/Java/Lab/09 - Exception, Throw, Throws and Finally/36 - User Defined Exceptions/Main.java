// Program to demonstrate user defined exceptions

class CustomExcept extends Exception
{
    public CustomExcept(String message)
    {
        super(message);
    }
}

public class Main
{
    public static void main(String[] args)
    {
        try
        {
            // Some condition that triggers the exception
            int age = -5;
            if (age < 0)
            {
                throw new CustomExcept("Invalid age: " + age); // throw is used to throw an exception explicitly (instead of implicitly) to the caller of the method.
            }
        } catch (CustomExcept e)
        {
            System.out.println("Custom Exception: " + e); // e is the object of the exception thrown by the throw statement
            System.out.println("Custom Message: " + e.getMessage()); // e.getMessage() is the message passed to the constructor of the exception
            System.out.println("Custom String: " + e.toString()); // e.toString() is the name of the exception and the message passed to the constructor of the exception;
            System.out.println("Stack Trace: " + e.getStackTrace()); // e.getStackTrace() is the stack trace of the exception
            e.printStackTrace(); // e.printStackTrace() is the stack trace of the exception

            System.out.println("\nSyed Aarish Shah | CSE-20-50");

        }
    }
}