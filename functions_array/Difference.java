
import java.util.*;

public class Difference {

    static int getDifference(int b, int n1, int n2) {
        int result = 0, borrow = 0, pow = 1;

        while (n2 > 0) {
            int d1 = n1 % 10;
            int d2 = n2 % 10;
            int diff = d2 - d1 - borrow;

            if (diff < 0) {
                diff = diff + b;
                borrow = 1;
            } else {
                borrow = 0;
            }
            result = result + (diff * pow);
            n1 = n1 / 10;
            n2 = n2 / 10;
            pow = pow * 10;

        }
        return result;
    }

    public static void main(String args[]) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the base of the numbers");
        int b = sc.nextInt();
        System.out.println("Enter the first number:");
        int n1 = sc.nextInt();
        System.out.println("Enter the second number");
        int n2 = sc.nextInt();

        int d = getDifference(b, n1, n2);
        System.out.println("The difference between the two numbers is: " + d);

    }
}
