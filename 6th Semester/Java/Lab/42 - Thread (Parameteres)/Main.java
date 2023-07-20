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

}

class Main
{
    public static void main(String[] args)
    {
        threadtest t1 = new threadtest("Sage");
        t1.start(); // will execute only one time
        t1.setName("Sage is cute");
        System.out.println("Name of the thread is: " + t1.getName());
        System.out.println("ID of the thread is: " + t1.getId());

        System.out.println();

        Thread t2 = new Thread("Omen");
        t2.start(); // will execute only one time
        System.out.println("Name of the thread is: " + t2.getName());
        System.out.println("ID of the thread is: " + t2.getId());
    }
}

// add setPriority() and join() and sleed() methods ... I need to create an object of the class Threaad to use them or I need to extend the class Thread and override these methods // Answer on Bard