import java.util.*;
public class prime3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the lower range: ");
        int low = sc.nextInt();
        System.out.println("Enter the upper range: ");
        int high = sc.nextInt();

        for (int num = low; num <= high; num++) {
            boolean isPrime = true;

            // Skip numbers less than 2 as they are not prime
            if (num < 2) {
                continue;
            }

            for (int div = 2; div * div <= num; div++) {
                if (num % div == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                System.out.println(num);
            }
        }

        sc.close(); // closing statement for Scanner
    }
}
