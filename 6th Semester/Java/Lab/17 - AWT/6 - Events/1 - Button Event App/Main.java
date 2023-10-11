// Button event

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Main
{
    public static void main(String[] args)
    {
        JFrame frame = new JFrame("Button Event App");
        frame.setSize(200, 100);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new FlowLayout());

        JButton button = new JButton("Click Me");
        button.addActionListener(new ActionListener()
        {
            @Override
            public void actionPerformed(ActionEvent e)
            {
                System.out.println("Button clicked!");
            }
        });

        frame.add(button);
        frame.setVisible(true);

        System.out.println("Syed Aarish Shah | CSE-20-50");

    }
}
