#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,x,y,z;
    cin >> n >> x >> y >>z;
    
    int t1 = (n+x+y-1) / (x+y);

    int t2;
    if(z*x>=n){
        t2 = (n+x-1) / x;
    }
    else{
        int rem = n-z*x;
        t2 = z + (rem+x+10*y-1) / (x+10*y);
    }
    cout << min(t1, t2) << "\n";
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