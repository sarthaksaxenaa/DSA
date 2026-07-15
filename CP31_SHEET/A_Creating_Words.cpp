#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string a,b;
    cin >> a >> b;

    swap(a[0], b[0]);

    cout << a << " " << b << "\n";
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