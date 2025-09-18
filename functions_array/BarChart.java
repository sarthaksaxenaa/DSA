import java.util.*;
public class BarChart {
    public static void main(String[] args) {
        int max=0;
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements in the array");
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            System.out.println("The element at index " + i + ": ");
            arr[i] = sc.nextInt();

            if(arr[i] > max) max=arr[i];
    }
    int nrows = max;
    int ncols =n;

    for(int i = nrows; i>=1;i--){
        for(int j =0; j<ncols; j++){
            if(arr[j] >= i){
                System.out.print("*\t");
            }
            else{
                System.out.print("\t");
            }
        }
        System.out.println();
    }
}
}