#include <bits/stdc++.h>
using namespace std;

class MedianFinder {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr(nums1.size() + nums2.size());
        int i = 0, j = 0, k = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) arr[k++] = nums1[i++];
            else arr[k++] = nums2[j++];
        }
        while (i < nums1.size()) arr[k++] = nums1[i++];
        while (j < nums2.size()) arr[k++] = nums2[j++];
        int n = arr.size();
        if (n % 2 == 1) return arr[n / 2];
        else return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }
};

int main() {
    MedianFinder m;
    vector<int> a = {1, 3};
    vector<int> b = {2};
    cout << m.findMedianSortedArrays(a, b);
}