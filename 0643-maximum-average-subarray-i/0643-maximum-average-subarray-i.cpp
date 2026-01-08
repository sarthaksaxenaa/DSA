class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum1 = 0;
        for(int i = 0; i < k; i++) sum1 += nums[i];
        double maxSum = sum1;
        for(int i = k; i < nums.size(); i++) {
            sum1 += nums[i] - nums[i - k];
            maxSum = max(maxSum, sum1);
        }
        return maxSum / k;
    }
};