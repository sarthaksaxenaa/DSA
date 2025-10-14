
import java.util.*;

public class Inverse {

    public static void main(String args[]) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements in the array");
        int n = sc.nextInt();
        int a[] = new int[n];
        for (int i = 0; i < n; i++) {
            System.out.println("The element at index " + i + ": ");
            a[i] = sc.nextInt();
        }
        int res[] = inverse(a);
        System.out.println("Reversed array is: " + Arrays.toString(res));
    }

    public static int[] inverse(int arr[]) {
        int res[] = new int[arr.length];
        for (int index = 0; index < arr.length; index++) {
            int val = arr[index];
            res[val] = index;
        }
        return res;
    }
}
// github push