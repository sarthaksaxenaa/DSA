#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;

    int upper=0;
    int lower=0;

    for(char ch: s){
        if(isupper(ch)) upper++;
        if(islower(ch)) lower++;
    }
    if(lower >= upper){
        for(char ch: s){
            cout << (char)tolower(ch);
        }
    }
    else{
        for(char ch: s){
            cout << (char)toupper(ch);
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}