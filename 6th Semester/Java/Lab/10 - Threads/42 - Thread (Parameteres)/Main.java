// Program to demonstrate the use of Thread class and its methods (Thread parameters)

class ThreadTest extends Thread
{
    public ThreadTest(String name)
    {
        super(name);
    }

    public void run()
    {
        boolean flag = true;
        while (flag)
        {
            System.out.println("Thread: " + this.getName());
            flag = false;
            try
            {
                // Sleep for 500 milliseconds
                Thread.sleep(500);
            } catch (InterruptedException e)
            {
                e.printStackTrace();
            }
        }
    }
}

class Main
{
    public static void main(String[] args)
    {
        ThreadTest t1 = new ThreadTest("Sage");

        // Set priority of t1
        t1.setPriority(Thread.MAX_PRIORITY); // setting the maximum priority

        t1.start();
        t1.setName("Sage is cute");
        System.out.println("Name of the thread t1: " + t1.getName());
        System.out.println("ID of the thread t1: " + t1.getId());

        System.out.println();

        ThreadTest t2 = new ThreadTest("Omen");

        // Set priority of t2
        t2.setPriority(Thread.MIN_PRIORITY); // setting the minimum priority which is 1. Default is 5. Maximum is 10. A thread with priority 10 has a higher likelihood of being scheduled first when competing with lower-priority threads for CPU time.

        t2.start();
        System.out.println("Name of the thread t2: " + t2.getName());
        System.out.println("ID of the thread t2: " + t2.getId());

        try
        {
            // Main thread waits for t1 and t2 to finish
            t1.join(); // join() method waits for a thread to die. The join method is particularly useful when you want to ensure that a certain thread completes its execution before you proceed. 
            t2.join();
        } catch (InterruptedException e)
        {
            e.printStackTrace();
        }

        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}
