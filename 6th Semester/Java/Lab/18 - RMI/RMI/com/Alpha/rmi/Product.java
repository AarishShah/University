package com.Alpha.rmi;

// common interface for the remote object
import java.rmi.*;

public interface Product extends Remote
{
    public String getName() throws RemoteException;
    public String getDescription() throws RemoteException;
    public double getPrice() throws RemoteException;
}