import java.util.*;
class Kadane {
    public static int maxSubArray(int[] arr) {
        int max1=Integer.MIN_VALUE; int sum1=0, n=arr.length;
         
        for(int i=0; i<n;i++){
            sum1+= arr[i];
            max1=max(max1,sum1);
        }
        return max1;
    }
    public static int max(int a, int b){
        if(a>b) return a;
    return b;
    }

    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc =new Scanner(System.in);
        int arr[]={-1,-5,-6,-2,5,2,8,7,-10};
        int a= maxSubArray(arr);
        System.err.println(a);
        sc.close();
    }
}