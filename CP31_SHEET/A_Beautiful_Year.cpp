#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(int n){
    while(true){
        n++;

        int a = n;

        int q = a % 10;
        a /= 10;

        int w = a % 10;
        a /= 10;
 
        int e = a % 10;
        a /= 10;

        int r = a % 10;

        if(q!=w && q!=e && q!=r &&
           w!=e && w!=r &&
           e!=r){
            cout << n << "\n";
            return;
        }
    }
}

int32_t main(){
    int n; cin >> n;

    solve(n);

    return 0;
}