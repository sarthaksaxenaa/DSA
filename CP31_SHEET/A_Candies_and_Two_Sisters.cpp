#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; 
    cin >> n;

    if(n <=2){
        cout << "0\n";
        return ;
    }
    cout << (n-1) / 2 << "\n";
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