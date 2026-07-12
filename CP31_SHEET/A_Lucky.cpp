#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    int left=0;
    int right=0;

    for(int i=0; i<3; i++){
        left = left + (int)s[i];
    }
    for(int i=s.size()-3; i<s.size(); i++){
        right = right + (int)s[i];
    }

    if(left == right){
        cout << "YES" << "\n";
    } else {
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