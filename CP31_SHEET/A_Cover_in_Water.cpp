#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int count = 0; 
    
    for(int i =0; i<n-2; i++){
        if(s[i] == '.' && s[i] == s[i+1] && s[i+1] == s[i+2]){
            cout << 2 << endl;
            return;
        }
    }
    for(char ch : s){
        if(ch == '.') count ++;
    }
    cout << count << endl;
}

int main(){
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}