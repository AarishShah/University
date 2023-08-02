// This program shows how to create a thread using Runnable interface

class thread1 implements Runnable
{
    public void run()
    {
        while (true)
        {
            System.out.println("Thread1 is running");
        }
    }
}

class thread2 implements Runnable // instead of creating a new threads, we could also create 2 objects of thread1. But this is just for demonstration
{
    public void run()
    {
        while (true)
        {
            System.out.println("Thread2 is running");
        }
    }
}

class Main
{
    public static void main(String[] args)
    {
        thread1 t1 = new thread1();
        thread2 t2 = new thread2();

        // t1.start(); // This will not work because the class does not extend Thread instead it implements Runnable
        // t2.start();

        // since the class implements Runnable and Runnable does not have a start(), we need to create a Thread object 
        Thread happythread1 = new Thread(t1); // Pass the object of the class that implements Runnable
        Thread happythread2 = new Thread(t2);
        happythread1.start(); // Start the thread
        happythread2.start();

        // We can also do this

        Runnable r1 = new thread1(); // This is also valid
        Runnable r2 = new thread2();

        // r1.start(); // This will not work because Runnable does not have a start() method
        // r2.start();
        Thread funthread1 = new Thread(r1); // Pass the object of the class that implements Runnable
        Thread funthread2 = new Thread(r2);
        funthread1.start();
        funthread2.start();

        System.out.println("\nSyed Aarish Shah | CSE=20-50");
        
    }

}