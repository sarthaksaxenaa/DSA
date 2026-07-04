#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    getline(cin, s);
    
    set<char> st;

    for(char ch: s){
        if(ch >= 'a' && ch<= 'z'){
            st.insert(ch);
        }
    }

    cout << st.size();
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}