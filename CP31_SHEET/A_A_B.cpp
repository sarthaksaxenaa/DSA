#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;

    cout << (s[0] - '0') + (s[2] - '0') << "\n";
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