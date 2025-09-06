
import java.util.*;

public class Frequency {

    static int getDigitFrequency(long n, int d) {
        int count = 0;
        n = Math.abs(n);
        if (n == 0 && d == 0) {
            return 1;
        }
        while (n > 0) {
            if (n % 10 == d) {
                count++;
            }
            n /= 10;
        }
        return count;
    }

    public static void main(String args[]) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number ");
        long n = sc.nextLong();
        System.out.println("Enter the digit to be checked");
        int d = sc.nextInt();
        int result = getDigitFrequency(n, d);
        System.out.println("The frquency of the digit is: " + result);
    }
}
