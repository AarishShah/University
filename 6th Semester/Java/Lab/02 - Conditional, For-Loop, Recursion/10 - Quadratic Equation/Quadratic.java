
// Write a program that prints all real solutions to the Quadratic Equation ax^2 + bx + c = 0. Read in a, b, c and use the quadratic formula. If the discriminant b^2 - 4ac is negative, display a message stating that there are no real solutions. Take input a, b, c from the user
import java.util.Scanner;
import java.lang.Math; // for Math.sqrt()

public class Quadratic
{
    public static void main(String[] args)
    {
        double a, b, c, Discriminant, root1, root2, real, img;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the value of coefficient of x^2: ");
        a = sc.nextDouble();
        System.out.print("Enter the value of coefficient of x: ");
        b = sc.nextDouble();
        System.out.print("Enter the value of c: ");
        c = sc.nextDouble();

        Discriminant = (b * b) - (4 * a * c);

        if (Discriminant > 0)
        {
            root1 = (-b + Math.sqrt(Discriminant)) / (2 * a);
            root2 = (-b - Math.sqrt(Discriminant)) / (2 * a);

            System.out.print(
                    "The roots are real and distinct and the roots of the given equation are " + root1 + " " + root2);

        }

        else if (Discriminant == 0)
        {
            root1 = root2 = -b / (2 * a);

            System.out.print("The roots are equal and the roots of the given equation are " + root1 + " " + root2);

        }

        else
        {
            real = -b / (2 * a);
            img = Math.sqrt(-Discriminant) / (2 * a);

            System.out.print("The roots are imaginary.\n");
            System.out.printf("root 1 = {(%f)+(%f)} and root 2 = {(%f)-(%f)}", real, img, real, img); // conjugate pair
        }

        System.out.println("\n\nSyed Aarish Shah | CSE-20-50");

        sc.close();
    }
}
