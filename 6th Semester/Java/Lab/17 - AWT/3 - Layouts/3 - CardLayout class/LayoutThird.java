// Check this program
// Implement different types of layout classes in Java
// 3. CardLayout class

import java.awt.*;
import javax.swing.*;

public class LayoutThird
{
    public static void main(String[] args)
    {
        JFrame frame = new JFrame("CardLayout");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 150);

        JPanel panelCont = new JPanel();
        panelCont.setLayout(new CardLayout());

        JPanel panel1 = new JPanel();
        panel1.setBackground(Color.RED);
        panelCont.add(panel1);

        JPanel panel2 = new JPanel();
        panel2.setBackground(Color.BLUE);
        panelCont.add(panel2);

        JPanel panel3 = new JPanel();
        panel3.setBackground(Color.GREEN);
        panelCont.add(panel3);

        JPanel panel4 = new JPanel();
        panel4.setBackground(Color.YELLOW);
        panelCont.add(panel4);

        JPanel panel5 = new JPanel();
        panel5.setBackground(Color.ORANGE);
        panelCont.add(panel5);

        frame.add(panelCont);
        frame.setVisible(true);
    }
}
