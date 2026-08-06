#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;

    int ans = 2;
    int mx = 0;

    for(int x = 2; x <= n; x++){
        int k = n / x;
        int sum = x * k * (k + 1) / 2;

        if(sum > mx){
            mx = sum;
            ans = x;
        }
    }

    cout << ans << "\n";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}