#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int cnt=0;
    if(a < b) cnt++;
    if(a < c) cnt++;
    if(a < d) cnt++;

    cout << cnt << "\n";
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