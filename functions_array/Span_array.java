
import java.util.*;

public class Span_array {

    public static void main(String args[]) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the  number of elements in the array: ");
        int n = sc.nextInt();

        int arr[] = new int[n];
        for (int i = 0; i < arr.length; i++) {
            System.out.println("Enter the number at index " + i + ": ");
            arr[i] = sc.nextInt();
        }

        int result = spanofarray(arr);
        System.out.println("The span of array is " + result);
    }

    public static int spanofarray(int arr[]) {
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;

        for (int val : arr) {
            if (val > max) {
                max = val;
            }
            if (val < min) {
                min = val;
            }
        }
        return max - min;
    }
}
