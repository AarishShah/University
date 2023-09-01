package com.Alpha.rmi;


import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;

// class that implements the declaration of Product
public class ProductImp extends UnicastRemoteObject implements Product
{
    private String name;
    private String description;
    private double price;

    // constructor
    public ProductImp(String name, String description, double price) throws RemoteException
    {
        super();
        this.name = name;
        this.description = description;
        this.price = price;
    }

    // getters
    public String getName() throws RemoteException
    {
        return name;
    }

    public String getDescription() throws RemoteException
    {
        return description;
    }

    public double getPrice() throws RemoteException
    {
        return price;
    }
}
