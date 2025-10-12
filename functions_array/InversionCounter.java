class InversionCounter {
    public static long numberOfInversions(int[] nums) {
        int n = nums.length;
        long count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] > nums[j] && i < j)
                    count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        int[] nums = {5, 3, 2, 4, 1};
        System.out.println(numberOfInversions(nums));
    }
}
