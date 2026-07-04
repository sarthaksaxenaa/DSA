#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    
    set<char> st;
    for(char ch: s){
        st.insert(ch);
    }

    if(st.size() % 2 !=0) cout << "IGNORE HIM!" << "\n";
    else cout << "CHAT WITH HER!" << "\n";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}