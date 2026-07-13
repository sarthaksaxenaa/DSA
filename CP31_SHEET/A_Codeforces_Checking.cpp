#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    char s;
    cin >> s;

    if(s == 'c' || s == 'o' || s == 'd' || s == 'e' || s == 'f' || s == 'o' || s == 'r' || s == 'c' || s == 'e' || s == 's'){
        cout << "YES" << "\n"; 
    }
    else{
        cout << "NO" << "\n";
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