import java.util.Arrays;
import java.util.Scanner;

class Longest_Consecutive {
    public static int longestConsecutive(int[] arr) {
       if(arr.length == 0) return 0;
        Arrays.sort(arr);
        int len = 1, maxLen = 1;
        for(int i = 1; i < arr.length; i++) {
            if(arr[i] == arr[i-1] + 1) len++;
            else if(arr[i] != arr[i-1]) len = 1;
            maxLen = max(maxLen, len);
        }
        return maxLen;
    }
    public static int max(int a,int b){
        if(a>b) return a;
    return b;
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
         System.out.println("The longest Consecutive sequence is of: "+longestConsecutive(arr));
    }
}