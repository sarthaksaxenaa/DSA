#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;

    if(n % 3 == 0){
        cout << n/3 << " " << n/3 << "\n";
    }
    else if(n % 3 == 1){
        cout << n/3 + 1 << " " << n/3 << "\n";
    }
    else{
        cout << n/3 << " " << n/3 + 1 << "\n";
    }
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