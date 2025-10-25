#include <bits/stdc++.h>
using namespace std;

class Divider {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int sum = 0;

            for (int i = 0; i < nums.size(); i++) {
                sum += ceil((double)nums[i] / mid);
            }

            if (sum <= threshold) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;
    Divider d;
    cout << d.smallestDivisor(nums, threshold);
    return 0;
}
