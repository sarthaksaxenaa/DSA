import java.util.Scanner;

class Two_sum {
    public int[] twoSum(int[] arr, int target) {
        int n = arr.length;
        int res[] = {0, 0};
        for (int i = 0; i < n - 1; i++) {
            for (int a = 1; a < n; a++) {
                if (arr[i] + arr[a] == target && a != i) {
                    res[0] = i;
                    res[1] = a;
                    return res;
                }
            }
        }
        return res;
    }

    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        int target = sc.nextInt();
        Two_sum ts = new Two_sum();
        int[] ans = ts.twoSum(arr, target);
        System.out.println(ans[0] + " " + ans[1]);
    }
}
