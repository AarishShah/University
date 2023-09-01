// Program to create a simple calculator using Java Swing

import java.awt.*;
import javax.swing.*;

public class Main
{
    JFrame f;
    JTextField displayField;

    Main()
    {
        f = new JFrame();
        displayField = new JTextField();
        displayField.setEditable(false); // Prevents the user from typing in the display field

        // Create a panel for buttons with a GridLayout
        JPanel buttonPanel = new JPanel(new GridLayout(4, 4));

        // Button labels
        String[] buttonLabels =
        { "1", "2", "3", "+", "4", "5", "6", "-", "7", "8", "9", "*", "0", ".", "=", "/" };

        // Create buttons and add them to the panel
        for (int i = 0; i < buttonLabels.length; i++)
        {
            JButton button = createButton(buttonLabels[i]);
            buttonPanel.add(button);
        }

        f.setLayout(new BorderLayout());
        f.add(displayField, BorderLayout.NORTH);
        f.add(buttonPanel, BorderLayout.CENTER);

        f.setSize(700, 700);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    // Method to create a button and add an ActionListener
    private JButton createButton(String label)
    {
        JButton button = new JButton(label);
        button.addActionListener(e -> {
            JButton source = (JButton) e.getSource();
            displayField.setText(displayField.getText() + source.getText());
        });
        return button;
    }

    public static void main(String[] args)
    {
        new Main();
        System.out.println("Syed Aarish Shah | CSE-20-50");
    }
}
