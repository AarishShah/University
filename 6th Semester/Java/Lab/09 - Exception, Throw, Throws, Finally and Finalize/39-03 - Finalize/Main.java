class Sample
{
    // Overriding the finalize method
    @Override
    protected void finalize() throws Throwable
    {
        System.out.println("Object is garbage collected");
    }
}

public class Main
{
    public static void main(String[] args)
    {
        // Creating an instance of Sample
        Sample obj = new Sample();

        // Making the object eligible for garbage collection
        obj = null;

        // Requesting JVM to run Garbage Collector
        System.gc();

        // Adding a delay to ensure finalize() gets executed
        try
        {
            Thread.sleep(1000);
        } catch (InterruptedException e)
        {
            e.printStackTrace();
        }

        System.out.println("Main method execution completed");
    }
}
