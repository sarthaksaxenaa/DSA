#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int max_val = -1;
        int max_idx = -1;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > max_val) {
                max_val = a[i];
                max_idx = i;
            }
        }

        swap(a[0], a[max_idx]);

        long long total_sum = 0;
        int current_max = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] > current_max) {
                current_max = a[i];
            }
            total_sum += current_max;
        }

        cout << total_sum << "\n";
    }
    return 0;
}