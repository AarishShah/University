// Program to demonstrate the significance of abstract class

abstract class Vehicle
{
    protected String brand;

    public Vehicle(String br)
    {
        brand = br;
    }

    abstract public void start();

    abstract public void stop();
}

class Car extends Vehicle
{
    public Car(String c) // constructor of the subclass
    {
        super(c); // call the constructor of the superclass. In this case Vehicle(String br)
    }

    @Override // annotation, not necessary to write, but good practice, tells the compiler that the method is overridden
    public void start()
    {
        System.out.println("Starting the car: " + brand); // brand is accessible here because it is protected
    }

    @Override
    public void stop()
    {
        System.out.println("Stopping the car: " + brand);
    }
}

class Bike extends Vehicle
{
    public Bike(String b)
    {
        super(b); // call the constructor of the superclass. In this case Vehicle(String br)
    }

    @Override
    public void start()
    {
        System.out.println("Starting the bike: " + brand); // brand is accessible here because it is protected
    }

    @Override
    public void stop()
    {
        System.out.println("Stopping the bike: " + brand);
    }
}

class Main
{
    public static void main(String args[])
    {
        Vehicle v1 = new Car("Lamborghini");
        v1.start();
        v1.stop();

        Vehicle v2 = new Bike("Suzuki");
        v2.start();
        v2.stop();

        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}