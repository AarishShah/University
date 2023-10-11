// Create a GUI application which Handles the following events:
// Button event
// Key event
// Mouse event
// Choice event

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Main
{

    public static void main(String[] args)
    {
        JFrame frame = new JFrame("Event Handling App");
        frame.setSize(400, 400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new FlowLayout());

        // Button event
        JButton button = new JButton("Click Me");
        button.addActionListener(new ActionListener()
        {
            @Override
            public void actionPerformed(ActionEvent e)
            {
                System.out.println("Button clicked!");
            }
        });

        // Key event
        JTextField textField = new JTextField(20);
        textField.addKeyListener(new KeyAdapter()
        {
            @Override
            public void keyPressed(KeyEvent e)
            {
                System.out.println("Key pressed: " + e.getKeyChar());
            }
        });

        // Mouse event
        JLabel mouseLabel = new JLabel("Mouse over me!");
        mouseLabel.addMouseListener(new MouseAdapter()
        {
            @Override
            public void mouseClicked(MouseEvent e)
            {
                System.out.println("Mouse clicked at: " + e.getX() + ", " + e.getY());
            }
        });

        // Choice event
        JComboBox<String> choices = new JComboBox<>(new String[]
        { "Option 1", "Option 2", "Option 3" });
        choices.addItemListener(new ItemListener()
        {
            @Override
            public void itemStateChanged(ItemEvent e)
            {
                if (e.getStateChange() == ItemEvent.SELECTED)
                {
                    System.out.println("Selected: " + e.getItem());
                }
            }
        });

        frame.add(button);
        frame.add(textField);
        frame.add(mouseLabel);
        frame.add(choices);

        frame.setVisible(true);

        System.out.println("Syed Aarish Shah | CSE-20-50");
    }
}
