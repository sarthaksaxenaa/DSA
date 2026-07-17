#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int y, w;
    cin >> y >> w;

    int m = max(y, w);
    int p = 7 - m;
    int q = 6;
    int g = __gcd(p, q);

    cout << p / g << "/" << q / g;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}