import java.awt.*;
import javax.swing.*;

public class LayoutThird
{

    public static void main(String[] args)
    {
        // Set up the main frame
        JFrame frame = new JFrame("CardLayout");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 200); // Size adjusted to fit content and button

        // Initialize CardLayout and assign to a container panel
        CardLayout cardLayout = new CardLayout();
        JPanel panelCont = new JPanel(cardLayout); // this panel will hold the cards

        // Create panels for cards with different background colors and add them to the container panel

        // Red panel
        JPanel panel1 = new JPanel();
        panel1.setBackground(Color.RED);
        panelCont.add(panel1, "1");

        // Blue panel
        JPanel panel2 = new JPanel();
        panel2.setBackground(Color.BLUE);
        panelCont.add(panel2, "2");

        // Green panel
        JPanel panel3 = new JPanel();
        panel3.setBackground(Color.GREEN);
        panelCont.add(panel3, "3");

        // Yellow panel
        JPanel panel4 = new JPanel();
        panel4.setBackground(Color.YELLOW);
        panelCont.add(panel4, "4");

        // Orange panel
        JPanel panel5 = new JPanel();
        panel5.setBackground(Color.ORANGE);
        panelCont.add(panel5, "5");

        // Button to navigate to the next card
        JButton nextButton = new JButton("Next Card");

        // Add action listener to the button to switch to the next card when clicked
        nextButton.addActionListener(e -> cardLayout.next(panelCont));

        // Arrange components in the main frame using BorderLayout
        frame.setLayout(new BorderLayout());
        frame.add(panelCont, BorderLayout.CENTER); // Adding card container to center
        frame.add(nextButton, BorderLayout.SOUTH); // Adding navigation button to the bottom

        // Display the main frame
        frame.setVisible(true);
    }
}
