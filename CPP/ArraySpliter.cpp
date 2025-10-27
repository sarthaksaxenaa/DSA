#include <bits/stdc++.h>
using namespace std;

class ArraySplitter {
public:
    int countPartitions(vector<int>& a, int maxSum) {
        int n = a.size(), partitions = 1;
        long long subarraySum = 0;
        for (int i = 0; i < n; i++) {
            if (subarraySum + a[i] <= maxSum) subarraySum += a[i];
            else {
                partitions++;
                subarraySum = a[i];
            }
        }
        return partitions;
    }

    int splitArray(vector<int>& a, int k) {
        int low = *max_element(a.begin(), a.end());
        int high = accumulate(a.begin(), a.end(), 0);
        while (low <= high) {
            int mid = (low + high) / 2;
            int partitions = countPartitions(a, mid);
            if (partitions > k) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }
};

int main() {
    ArraySplitter s;
    vector<int> a = {10, 20, 30, 40};
    int k = 2;
    cout << s.splitArray(a, k);
}
