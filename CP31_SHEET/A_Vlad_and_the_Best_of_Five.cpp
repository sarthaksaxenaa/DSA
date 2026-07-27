#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;

    int countA=0;
    int countB=0;

    for(int i=0; i< s.size(); i++){
        if(s[i] == 'A') countA++;
        else countB++;
    }

    if(countA > countB) cout << "A" << "\n";
    else cout << "B" << "\n";
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