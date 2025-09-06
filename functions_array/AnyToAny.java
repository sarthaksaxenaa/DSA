
import java.util.Scanner;

public class AnyToAny {

    static int AnyBaseToAnyBase(int n, int a, int b) {
        int dval = getDigitToDecimal(n, a);
        int cval = ToAnyBase(dval, b);
        return cval;
    }

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
        System.out.println("Enter the number ");
        int n = sc.nextInt();
        System.out.println("Enter the Base");
        int a = sc.nextInt();
        System.out.println("Enter the TargetBase");
        int b = sc.nextInt();
        int result = AnyBaseToAnyBase(n, a, b);
        System.out.println(result);
    }
}
