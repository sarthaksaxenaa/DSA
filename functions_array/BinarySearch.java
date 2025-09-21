import java.util.*;
class BinarySearch{
    public static void main(String args[]){
        @SuppressWarnings("resource")
        Scanner sc= new Scanner(System.in);
        System.err.println("Enter the length of array");
        int n=sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < arr.length; i++) {
            System.out.println("Enter the number at index " + i + ": ");
            arr[i] = sc.nextInt();
         }
         System.err.println("Enter the target element");
         int k=sc.nextInt();

         System.err.println("Element found at index: "+Binary(arr,k));
        }

        public static int Binary(int arr[],int k){
            int lo=0 , n=arr.length,hi=n-1;
            for(int i=0;i<n;i++){
            int mid = (hi+lo)/2;
            if(arr[mid]==k){
                return mid;
            }
            else if(arr[mid]>k){
                hi=mid-1;
            }
            else if(arr[mid]<k){
                lo=mid+1;
            }
            }
            return -1;
        } 
}