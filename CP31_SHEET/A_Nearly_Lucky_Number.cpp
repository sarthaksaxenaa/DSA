#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(int n){
    int cnt = 0;

    while(n > 0){
        int d = n % 10;
        if(d == 4 || d == 7) cnt++;
        n /= 10;
    }

    if(cnt == 0){
        cout << "NO\n";
        return;
    }

    while(cnt > 0){
        int d = cnt % 10;
        if(d != 4 && d != 7){
            cout << "NO\n";
            return;
        }
        cnt /= 10;
    }

    cout << "YES\n";
}

int32_t main(){
    int n;
    cin >> n;

    solve(n);

    return 0;
}