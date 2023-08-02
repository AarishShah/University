// Program to demonstrate the use of Thread class

class thread1 extends Thread
{
    public void run()
    {
        while (true)
        {
            System.out.println("Thread 1 is implementing");
            System.out.println("Work efficient");
        }
    }
}

class thread2 extends Thread
{
    public void run()
    {
        while (true)
        {
            System.out.println("Thread 2 is implementing");
            System.out.println("Good work");
        }
    }
}

class work
{
    public static void main(String[] args)
    {
        thread1 t1 = new thread1();
        thread2 t2 = new thread2();

        // run will not create a new thread, nor run concurrently
        // t1.run();
        // t2.run();

        // start will create a new thread, and run concurrently
        t1.start();
        t2.start();

        System.out.println("\nSyed Aarish Shah | CSE=20-50");
    }

}