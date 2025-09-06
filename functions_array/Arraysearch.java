
import java.util.*;

public class Arraysearch {

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
        System.out.println("Enter the number to be searched");
        int x = sc.nextInt();

        int result = find(arr, x);
        System.out.println("Element " + x + " found at index: " + result);
    }

    public static int find(int arr[], int x) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == x) {
                return i;
            }
        }
        return -1;
    }
}
