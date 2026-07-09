#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++){
       s[i] = tolower(s[i]);
    }

    if(s == "yes") cout << "YES" << "\n";
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