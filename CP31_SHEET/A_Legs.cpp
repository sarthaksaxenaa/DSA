#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;

    int cnt = 0;
    while(n){
        if(n>=4){
            n= n-4;
            cnt++;
        }
        else{
            n = n - 2;
            cnt++;
        }
    }

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