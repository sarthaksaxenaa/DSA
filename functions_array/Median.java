import java.util.*;

public class Median {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int[] arr = new int[nums1.length + nums2.length];
        int i = 0, j = 0, k = 0;
        while (i < nums1.length && j < nums2.length) {
            if (nums1[i] < nums2[j]) arr[k++] = nums1[i++];
            else arr[k++] = nums2[j++];
        }
        while (i < nums1.length) arr[k++] = nums1[i++];
        while (j < nums2.length) arr[k++] = nums2[j++];
        int n = arr.length;
        if (n % 2 == 1) return arr[n / 2];
        else return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }

    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int n1 = sc.nextInt();
        int[] nums1 = new int[n1];
        for (int i = 0; i < n1; i++) nums1[i] = sc.nextInt();

        int n2 = sc.nextInt();
        int[] nums2 = new int[n2];
        for (int i = 0; i < n2; i++) nums2[i] = sc.nextInt();

        Median s = new Median();
        double median = s.findMedianSortedArrays(nums1, nums2);
        System.out.println(median);
    }
}