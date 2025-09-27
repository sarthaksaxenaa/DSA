import java.util.*;
class Stocks {
    public static int maxProfit(int[] arr) {
        int mini=arr[0], n=arr.length, profit=0;
        for(int i=1;i<n;i++){
            int cost=arr[i] - mini;
            profit= max(cost,profit);
            mini = min(arr[i],mini);
        }
        return profit;
    }
    public static int max(int a, int b){
        if(a>b) return a;
    return b;
    }
    public static int min(int a, int b){
        if(a<b) return a;
    return b;
    }

    public static void main(String[] args) {
     @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the  number of elements in the array: ");
        int n = sc.nextInt();

        int arr[] = new int[n];
        for (int i = 0; i < arr.length; i++) {
            System.out.println("Enter the number at index " + i + ": ");
            arr[i] = sc.nextInt();
        }
        System.out.println("Maximum profit will be of: "+maxProfit(arr));
    }
}