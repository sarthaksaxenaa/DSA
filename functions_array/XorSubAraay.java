import java.util.*;

class XorSubArray {
    public int subarraysWithXorK(int[] arr, int k) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int count = 0;
        int xor = 0;
        map.put(0, 1);
        for (int i = 0; i < arr.length; i++) {
            xor = xor ^ arr[i];
            int find = xor ^ k;
            if (map.containsKey(find)) {
                count += map.get(find);
            }
            map.put(xor, map.getOrDefault(xor, 0) + 1);
        }
        return count;
    }

    public static void main(String[] args) {
        XorSubArray sol = new XorSubArray();
        int[] arr = {4, 2, 2, 6, 4};
        int k = 6;
        System.out.println(sol.subarraysWithXorK(arr, k));
    }
}