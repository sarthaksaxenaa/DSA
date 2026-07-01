#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int x,y;
    cin >> x >> y;
    if(x==y) cout << "YES" << "\n";
    else if(y ==1) cout << "NO" << "\n";
    else if(x%y ==0) cout << "YES" << "\n";
    else cout << "NO" << "\n"; 

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