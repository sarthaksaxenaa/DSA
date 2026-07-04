#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    
    set<int>st;
    int p;
    cin >> p;
    while(p--){
        int x;
        cin >> x;
        st.insert(x);
    }
    
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        st.insert(x);
    }

    if(st.size() == n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    
    return 0;
}