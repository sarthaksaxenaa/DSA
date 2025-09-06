import java.util.Scanner;
public class Sum_array {
    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements in the array1");
        int n = sc.nextInt();
        int arr1[] = new int[n];
        for (int i = 0; i < n; i++) {
            System.out.println("Enter the elemnt at " + i + " index of array1: ");
            arr1[i] = sc.nextInt();
        }

        System.out.println("Enter the number of elements in the array2");
        int m = sc.nextInt();
        int arr2[] = new int[m];
        for (int i = 0; i < m; i++) {
            System.out.println("Enter the elemnt at " + i + " index of array2: ");
            arr2[i] = sc.nextInt();
        }

        int size = n > m ? n : m;
        int res[] = new int[size];

        int p1=n-1 , p2 = m-1 , p3 = size-1 , carry = 0;

        while(p1 >= 0 || p2 >= 0){
            int d1 = p1 < 0? 0 : arr1[p1];
            int d2 = p2 < 0? 0 : arr2[p2];

            int sum = d1 +d2 + carry;
            int digit = sum % 10;
            carry = sum / 10;

            res[p3] = digit;
            p1--;
            p2--;
            p3--;
        }

        if (carry != 0){
            System.out.print(carry);
        }
       for( int val: res){
        System.out.print(" "+val);
       } 
    } 
}