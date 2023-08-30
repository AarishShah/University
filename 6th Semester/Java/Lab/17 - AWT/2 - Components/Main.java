// Write an application illustrating the use of:
// 1. TextField
// 2. Choice
// 3. Checkbox
// 4. Button
// 5. TextArea
// 6. List

import java.awt.*;
import java.awt.event.*;

public class Main extends Frame implements ActionListener
{
    TextField tf;
    Choice c;
    Checkbox cb;
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
        c.add("Cypher");
        c.add("Astra");
        c.add("Phoenix");
        c.add("Omen");
        c.add("Neon");
        add(c);

        cb = new Checkbox("Sage");
        cb.setBounds(150, 100, 50, 50);
        add(cb);

        b = new Button("Add");
        b.setBounds(50, 150, 50, 50);
        b.addActionListener(this); // to add action listener to the button
        add(b);

        ta = new TextArea();
        ta.setBounds(50, 200, 200, 200);
        add(ta);

        l = new List(5);
        l.setBounds(300, 50, 75, 75);
        l.add("Reyna");
        l.add("Raze");
        l.add("Breach");
        l.add("Sova");
        l.add("Jett");
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
        System.out.println("Syed Aarish Shah | CSE-20-50");
    }
}