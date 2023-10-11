// Key event

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Main
{
    public static void main(String[] args)
    {
        JFrame frame = new JFrame("Key Event App");
        frame.setSize(200, 100);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new FlowLayout());

        JTextField textField = new JTextField(20);
        textField.addKeyListener(new KeyAdapter()
        {
            @Override
            public void keyPressed(KeyEvent e)
            {
                System.out.println("Key pressed: " + e.getKeyChar());
            }
        });

        frame.add(textField);
        frame.setVisible(true);

        System.out.println("Syed Aarish Shah | CSE-20-50");

    }
}
