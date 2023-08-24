// Write an application illustrating the use of:
// 1. TextField
// 2. Choice
// 3. Button
// 4. TextArea
// 5. List

import java.awt.*;
import java.awt.event.*;

public class Main extends Frame implements ActionListener
{
    TextField tf;
    Choice c;
    Button b;
    TextArea ta;
    List l;

    Main()
    {
        tf = new TextField();
        tf.setBounds(50, 50, 150, 20);
        add(tf);

        c = new Choice();
        c.setBounds(50, 100, 75, 75);
        c.add("C");
        c.add("C++");
        c.add("Java");
        c.add("Python");
        c.add("PHP");
        add(c);

        b = new Button("Add");
        b.setBounds(50, 150, 50, 50);
        b.addActionListener(this); // to add action listener to the button
        add(b);

        ta = new TextArea();
        ta.setBounds(50, 200, 200, 200);
        add(ta);

        l = new List(5);
        l.setBounds(300, 50, 75, 75);
        l.add("C");
        l.add("C++");
        l.add("Java");
        l.add("Python");
        l.add("PHP");
        add(l);

        setSize(500, 500);
        setLayout(null);
        setVisible(true);

        addWindowListener(new WindowAdapter()
        {
            public void windowClosing(WindowEvent e)
            {
                dispose();
            }
        });
    }

    public void actionPerformed(ActionEvent e)
    {
        String text = tf.getText(); // to get the text from the text field
        ta.setText(text); // to set the text in the text area
        l.add(text);
    }

    public static void main(String[] args)
    {
        new Main();
    }
}