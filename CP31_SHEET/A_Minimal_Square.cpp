#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b;
    cin >> a >> b;

    int y = max(a,b);
    int x= min(a,b);
    x = x*2;

    int z = max(x,y);
    cout << z*z << "\n";
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