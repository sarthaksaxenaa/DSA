
import java.util.*;

public class inverse {

    public static void main(String args[]) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();// taking input

        int fv = 0; // face value or index
        int ans = 0;

        while (n != 0) {
            fv++; // starting from 1 
            int rd = n % 10; // right most digit of the number
            n = n / 10; // minimizing the number

            ans = ans + fv * (int) (Math.pow(10, rd - 1)); // inverse technique 

        }
        System.out.println(ans);
    }
}
