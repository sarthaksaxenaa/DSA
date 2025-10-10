import java.util.*;

class MaxLengthSubarray {
    public static int maxLength(int arr[]) {
        HashMap<Integer, Integer> mpp = new HashMap<>();
        int sum = 0;
        int maxi = 0;
        int n = arr.length;
        
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            
            if (sum == 0) {
                maxi = i + 1;
            } else {
                if (mpp.get(sum) != null) {
                    maxi = Math.max(maxi, i - mpp.get(sum));
                } else {
                    mpp.put(sum, i);
                }
            }
        }
        return maxi;
    }

    public static void main(String[] args) {
        int[] arr = {15, -2, 2, -8, 1, 7, 10, 23};
        int result = maxLength(arr);
        System.out.println("Length of the longest subarray with sum 0: " + result);
    }
}