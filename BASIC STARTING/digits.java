
import java.util.*;

public class digits {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int d = 0;
        int temp = n;

        while (temp != 0) {
            d++;
            temp = temp / 10;
        }
        int pow = 1;
        int i = 0;

        while (i < (d - 1)) {
            pow = pow * 10;
            i++;
        }

        while (n != 0) {
            int ld = n / pow;
            System.out.println(ld);
            n = n % pow;
            pow = pow / 10;
        }
        sc.close();
    }
}
