// Choice event

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Main {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Choice Event App");
        frame.setSize(200, 100);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new FlowLayout());

        JComboBox<String> choices = new JComboBox<>(new String[]{"Option 1", "Option 2", "Option 3"});
        choices.addItemListener(new ItemListener() {
            @Override
            public void itemStateChanged(ItemEvent e) {
                if (e.getStateChange() == ItemEvent.SELECTED) {
                    System.out.println("Selected: " + e.getItem());
                }
            }
        });

        frame.add(choices);
        frame.setVisible(true);

        System.out.println("Syed Aarish Shah | CSE-20-50");

    }
}
