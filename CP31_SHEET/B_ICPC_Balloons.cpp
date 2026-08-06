#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    set<char> st;
    int ans = 0;

    for(char c : s){
        if(st.count(c)){
            ans++;
        }
        else{
            ans += 2;
            st.insert(c);
        }
    }

    cout << ans << "\n";
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