#include <bits/stdc++.h>
using namespace std;

void solve(long a, long b, long c){
    long anna = a + (c+1) /2;
    long katie = b + c / 2;

    if(anna > katie) cout << "First" << endl;
    else cout << "Second" << endl; 
}

int main(){
    int t; cin >> t;
    while(t--){
        long a,b,c;
        cin >> a >> b >> c;

        solve(a,b,c);

    }

    return 0;
}