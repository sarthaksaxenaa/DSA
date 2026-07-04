#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b;
    cin >> a >> b;
    
    string s;
    cin >> s;

    while(b--){
        for(int i=0; i<s.size()-1; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }
    cout << s;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    
    return 0;
}