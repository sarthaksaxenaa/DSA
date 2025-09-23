import java.util.Scanner;

public class Min_Max {
    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            int min = 101;
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                if (a[i] < min) min = a[i];
            }
            int ops = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] != min) ops++;
            }
            System.out.println(ops);
        }
        sc.close();
    }
}
