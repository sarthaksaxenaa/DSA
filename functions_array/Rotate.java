
        import java.util.*;

        public class Rotate {

            public static void main(String[] args) {
                @SuppressWarnings("resource")
                Scanner sc = new Scanner(System.in);
                System.out.println("Enter the number of elements in the array");
                int n = sc.nextInt();
                System.out.println("Enter the number of rotations in the array");
                int x = sc.nextInt();
                int arr[] = new int[n];
                for (int i = 0; i < n; i++) {
                    System.out.println("Enter the elemnt at " + i + " index: ");
                    arr[i] = sc.nextInt();
                }
                rotate(arr, x);
                System.out.println("Reversed array is: " + Arrays.toString(arr));

            }

            public static void rotate(int arr[], int x) {
                int n = arr.length;
                x = x % n; // true number of rotations

                if (x < 0) {
                    x = x + n; //-ve rotation to positive rotation
                }

                reverse(arr, n - x, n - 1); // reverse part 2
                reverse(arr, 0, n - x - 1); // reverse part 1
                reverse(arr, 0, n - 1); // reverse arr
            }

            public static void reverse(int arr[], int lo, int hi) {
                while (lo < hi) {
                    int temp = arr[lo];
                    arr[lo] = arr[hi];
                    arr[hi] = temp;

                    lo++;
                    hi--;
                }
            }
        }
