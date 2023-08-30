// Create a login page using AWT.

import java.awt.*;
import java.awt.event.*;

class Main extends Frame implements ActionListener
{
    Label l1, l2, l3;
    TextField tf1, tf2;
    Button b1, b2;

    Main() // Constructor
    {
        l1 = new Label("Username");
        l1.setBounds(50, 50, 100, 30);

        l2 = new Label("Password");
        l2.setBounds(50, 100, 100, 30);

        l3 = new Label(); // Displaying the result
        l3.setBounds(50, 150, 200, 30);

        tf1 = new TextField();
        tf1.setBounds(150, 50, 150, 30);

        tf2 = new TextField();
        tf2.setBounds(150, 100, 150, 30);
        tf2.setEchoChar('*'); // To hide the password

        b1 = new Button("Login");
        b1.setBounds(50, 200, 100, 30);

        b2 = new Button("Cancel");
        b2.setBounds(200, 200, 100, 30);

        b1.addActionListener(this); // this refers to the current object which implements ActionListener
        b2.addActionListener(this);

        // Adding the components to the frame
        add(l1);
        add(l2);
        add(l3);

        add(tf1);
        add(tf2);

        add(b1);
        add(b2);

        setSize(400, 400); // Setting the size of the frame
        setLayout(null); // Setting the layout to null
        setVisible(true); // Setting the visibility to true

        // to close the window
        addWindowListener(new WindowAdapter()
        {
            public void windowClosing(WindowEvent e)
            {
                dispose();
            }
        });
    }

    public void actionPerformed(ActionEvent e)
    {
        if (e.getSource() == b1) // If the source of the event is b1
        {
            String uname = tf1.getText();
            String pass = tf2.getText();
            if (uname.equals("admin") && pass.equals("admin"))
            {
                l3.setText("Login Successful");
            } else
            {
                l3.setText("Login Failed");
            }
        } else if (e.getSource() == b2)
        {
            System.exit(0);
        }
    }

    public static void main(String args[])
    {
        new Main(); // Creating an object of the class Main which will call the constructor
        System.out.println("Syed Aarish Shah | CSE-20-50");
    }

}

// If you see files with names like Main$1.class, it indicates that there are inner or anonymous classes in your original Java source code.