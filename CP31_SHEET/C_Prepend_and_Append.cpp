#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(string s , int n){
    int i=0;
    int j =s.size() -1;

    while(i<=j){
        if(s[i] != s[j]){
            i++;
            j--;
        }
        else{
            cout << j-i+1 <<"\n";
            return ;
        }
    }
    cout << 0 << "\n";
}

int32_t main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
    
        solve(s,n);
    }

    return 0;
}