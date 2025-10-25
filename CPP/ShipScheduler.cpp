#include <bits/stdc++.h>
using namespace std;

class ShipScheduler {
public:
    int findDays(vector<int>& weights, int cap) {
        int days = 1, load = 0;
        for (int i = 0; i < weights.size(); i++) {
            if (load + weights[i] > cap) {
                days += 1;
                load = weights[i];
            } else {
                load += weights[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int d) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while (low <= high) {
            int mid = (low + high) / 2;
            int no_of_days = findDays(weights, mid);
            if (no_of_days <= d) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};

int main() {
    ShipScheduler scheduler;
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    cout << scheduler.shipWithinDays(weights, days) << endl;
    return 0;
}