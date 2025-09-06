import java.util.Scanner;
public class Diff_array {
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

        int size =m;
        int res[] = new int[size];

        int p1=n-1 , p2 = m-1 , p3 = size-1 , borrow = 0;

        while(p2 >= 0){
            int d1 = p1 < 0? 0 : arr1[p1];
            int d2 = p2 < 0? 0 : arr2[p2];

            int diff =  d2 -d1 -borrow;
            if(diff < 0){
                diff += 10;
                borrow = 1;
            }
            else{
                borrow = 0;
            }

            res[p3] = diff;
            p1--;
            p2--;
            p3--;
        }

        boolean flag = false;
        for(int idx = 0; idx < size ; idx++){
            if (res[idx] !=0){
                flag = true;
            }
            if(flag){
                System.out.print(res[idx]+" ");
            }
        }
    } 
}