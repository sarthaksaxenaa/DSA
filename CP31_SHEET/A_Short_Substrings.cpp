#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string b;
        cin >> b;

        string ans;
        ans += b[0];

        for (int i = 1; i < b.size(); i += 2) {
            ans += b[i];
        }

        if (ans.back() != b.back()) {
            ans += b.back();
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