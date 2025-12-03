#include <bits/stdc++.h>
using namespace std;

class RotationFinder {
public:
    int findKRotation(vector<int> &nums) {
        int low = 0, high = nums.size() - 1;
        while (low < high) {
            int mid = low + ((high - low) >> 1);
            if (nums[mid] > nums[high]) low = mid + 1;
            else high = mid;
        }
        return low;
    }
};

int main() {
    RotationFinder obj;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    cout << obj.findKRotation(nums);
}

// code to find rotation finder