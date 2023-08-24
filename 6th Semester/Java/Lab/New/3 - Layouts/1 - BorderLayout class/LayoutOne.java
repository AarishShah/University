// Implement different types of layout classes in Java
// 1. BorderLayout class

import java.awt.*;
import javax.swing.*;

public class LayoutOne
{
    JFrame f;

    LayoutOne()
    {
        f = new JFrame();

        // creating buttons
        JButton b1 = new JButton("NORTH");
        JButton b2 = new JButton("SOUTH");
        JButton b3 = new JButton("EAST");
        JButton b4 = new JButton("WEST");
        JButton b5 = new JButton("CENTER");

        f.add(b1, BorderLayout.NORTH); // b1 will be placed in the North Direction
        f.add(b2, BorderLayout.SOUTH); // b2 will be placed in the South Direction
        f.add(b3, BorderLayout.EAST); // b3 will be placed in the East Direction
        f.add(b4, BorderLayout.WEST); // b4 will be placed in the West Direction
        f.add(b5, BorderLayout.CENTER); // b5 will be placed in the Center

        f.setSize(300, 300);
        f.setVisible(true);

        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // Program would not exit without this line even though the window is closed
    }

    public static void main(String[] args)
    {
        new LayoutOne();

        System.out.println("Syed Aarish Shah | CSE-20-50");
    }
}