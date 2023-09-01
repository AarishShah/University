package com.Alpha.rmi;

import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;
import java.rmi.NoSuchObjectException;
import java.rmi.server.UnicastRemoteObject;

public class Server
{
    public static void main(String[] args)
    {
        try
        {
            System.setProperty("Java.rmi.server.hostname", "127.0.0.1");

            // Start RMI registry programmatically
            LocateRegistry.createRegistry(9300);

            // Access the methods of the remote object
            ProductImp product1 = new ProductImp("Laptop", "Dell", 93000);
            ProductImp product2 = new ProductImp("Mobile", "Samsung", 20000);

            Product stub1 = null;
            Product stub2 = null;

            // Try to unexport product1, if not exported, then continue to export
            try {
                UnicastRemoteObject.unexportObject(product1, true);
            } catch (NoSuchObjectException e) {
                // Object wasn't exported before, continue with exporting
            }
            stub1 = (Product) UnicastRemoteObject.exportObject(product1, 0);

            // Try to unexport product2, if not exported, then continue to export
            try {
                UnicastRemoteObject.unexportObject(product2, true);
            } catch (NoSuchObjectException e) {
                // Object wasn't exported before, continue with exporting
            }
            stub2 = (Product) UnicastRemoteObject.exportObject(product2, 0);

            // To register the remote objects (stub1 and stub2) with the RMI registry
            Registry reg = LocateRegistry.getRegistry("127.0.0.1", 9300);

            // To bind the remote objects to the registry using rebind (this will replace any existing bindings)
            if (stub1 != null) {
                reg.rebind("Laptop", stub1);
            }

            if (stub2 != null) {
                reg.rebind("Mobile", stub2);
            }
            System.out.println("Server is ready...");

        } catch (Exception e)
        {
            System.out.println(e);
        }
    }
}
