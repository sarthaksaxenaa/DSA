#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    int sum = 0;
    int i = 1;
    int cnt = 0;

    while (true) {
        sum += i;
        if (n < sum) break;
        n -= sum;
        cnt++;
        i++;
    }
    cout << cnt;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}