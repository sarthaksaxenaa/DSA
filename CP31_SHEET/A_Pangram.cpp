#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    set<char>st;

    for(char ch: s){
        st.insert(tolower(ch));
    }

    if(st.size() == 26) cout << "YES";
    else cout << "NO";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}