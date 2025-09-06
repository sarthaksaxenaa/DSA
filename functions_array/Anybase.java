
import java.util.*;

public class Anybase {

    static int ToAnyBase(int n, int a) {
        int digit = 0;
        int pow = 1;

        while (n != 0) {
            int rem = n % a;
            digit = digit + (pow * rem);
            pow = pow * 10;
            n = n / a;
        }
        return digit;
    }

    public static void main(String args[]) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number");
        int n = sc.nextInt();
        System.out.println("Enter the base");
        int a = sc.nextInt();
        int result = ToAnyBase(n, a);
        System.out.println(result);

    }

}
