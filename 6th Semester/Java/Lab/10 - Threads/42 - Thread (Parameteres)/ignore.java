class threadtest extends Thread
{
    public threadtest(String name)
    {
        super(name);
    }

    public void run()
    {
        boolean flag = true;
        while (flag)
        {
            System.out.println("Thread test");
            flag = false;
        }
    }

    public void setPriority(int priority)
    {
        this.priority = priority;
    }

    public void join()
    {
        try
        {
            this.join();
        } catch (InterruptedException e)
        {
            e.printStackTrace();
        }
    }

    public void sleep(long millis)
    {
        try
        {
            Thread.sleep(millis);
        } catch (InterruptedException e)
        {
            e.printStackTrace();
        }
    }
}

class ignore
{
    public static void main(String[] args)
    {
        threadtest t1 = new threadtest("Sage");
        t1.setPriority(10);
        t1.start(); // will execute only one time
        t1.setName("Sage is cute");
        System.out.println("Name of the thread is: " + t1.getName());
        System.out.println("ID of the thread is: " + t1.getId());
        t1.join();

        System.out.println();

        threadtest t2 = new threadtest("Omen");
        t2.sleep(5000);
        t2.start(); // will execute only one time
        System.out.println("Name of the thread is: " + t2.getName());
        System.out.println("ID of the thread is: " + t2.getId());
    }
}
