// Mouse event

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Main
{
    public static void main(String[] args)
    {
        JFrame frame = new JFrame("Mouse Event App");
        frame.setSize(200, 100);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new FlowLayout());

        JLabel mouseLabel = new JLabel("Register click!");
        mouseLabel.addMouseListener(new MouseAdapter()
        {
            @Override
            public void mouseClicked(MouseEvent e)
            {
                System.out.println("Mouse clicked at: " + e.getX() + ", " + e.getY());
            }
        });

        frame.add(mouseLabel);
        frame.setVisible(true);

        System.out.println("Syed Aarish Shah | CSE-20-50");

    }
}
