// program to demonstrate ActionListener interface

import java.awt.*;
import java.awt.event.*;

class Main extends Frame implements ActionListener
{
    TextField tf; // Moved tf to be a class member so it can be accessed in actionPerformed

    Main()
    {
        tf = new TextField(); 
        tf.setBounds(70, 50, 150, 20);
        add(tf);

        Button b = new Button("Click");
        b.setBounds(100, 100, 80, 30);
        b.addActionListener(this); // Add this line to register the ActionListener
        add(b);

        setSize(300, 300);
        setLayout(null);
        setVisible(true);

        // to close the window
        addWindowListener(new WindowAdapter()
        {
            public void windowClosing(WindowEvent e)
            {
                dispose();
            }
        });
    }

    public static void main(String args[])
    {
        Main f = new Main();

        System.out.println("Syed Aarish Shah | CSE-20-50");
    }

    @Override
    public void actionPerformed(ActionEvent e)
    {
        tf.setText("Welcome");
    }
}
