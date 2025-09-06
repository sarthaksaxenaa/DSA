
import java.util.*;

public class Decimal {

    static int getDigitToDecimal(int n, int a) {
        int digit = 0;
        int pos = 0;
        while (n != 0) {
            var x = (int) Math.pow(a, pos);
            digit = digit + ((n % 10) * (x));
            pos++;
            n = n / 10;
        }
        return digit;
    }

    public static void main(String args[]) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number ");
        int n = sc.nextInt();
        System.out.println("Enter the base of the number");
        int a = sc.nextInt();
        int result = getDigitToDecimal(n, a);
        System.out.println(result);
    }
}
