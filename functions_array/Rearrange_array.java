import java.util.*;

class Rearrange_array {
    public static int[] rearrangeArray(int[] arr) {
        int n=arr.length; int a[]= new int[n];int j=0; int t=1;
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                a[j]=arr[i];
                j+=2;
            }
            if(arr[i]<0){
                a[t]=arr[i];
                t+=2;
            }
        }
        return a;
    }
    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc= new Scanner(System.in);
        System.err.println("Enter the length of array");
        int n=sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < arr.length; i++) {
            System.out.println("Enter the number at index " + i + ": ");
            arr[i] = sc.nextInt();
         }
         int[] result = rearrangeArray(arr);
        System.out.println("The rearranged array is: " + Arrays.toString(result));
    }
}