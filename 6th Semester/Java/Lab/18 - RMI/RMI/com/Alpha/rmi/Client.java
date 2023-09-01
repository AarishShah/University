package com.Alpha.rmi;

import java.rmi.registry.Registry;
import java.rmi.registry.LocateRegistry;

public class Client
{
    public static void main(String[] args)
    {
        try
        {
            Registry reg = LocateRegistry.getRegistry("127.0.0.1", 9300);

            // To lookup the remote object from the registry
            Product p1 = (Product) reg.lookup("Laptop"); // Product is the common interface
            Product p2 = (Product) reg.lookup("Mobile");

            System.out.println("Laptop: " + p1.getName() + " " + p1.getDescription() + " " + p1.getPrice());
            System.out.println("Mobile: " + p2.getName() + " " + p2.getDescription() + " " + p2.getPrice());
        } catch (Exception e)
        {
            System.err.println("Client exception: " + e.toString());
            e.printStackTrace();
        }
    }
}
