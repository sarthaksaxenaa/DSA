import java.util.*;

public class Sum {

    static int getSum(int b, int n1, int n2) {
        int result = 0, pow = 1, carry = 0;
        while (n1 > 0 || n2 > 0 || carry > 0) {
            int d1 = n1 % 10;
            int d2 = n2 % 10;

            int sum = d1 + d2 + carry;
            int digit = sum % b;
            carry = sum / b;

            result = (digit * pow) + result;

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

        int d = getSum(b, n1, n2);
        System.out.println(d);
    }
}