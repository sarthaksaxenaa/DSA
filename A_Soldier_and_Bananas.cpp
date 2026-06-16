#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(int k, int n, int w){
    int sum = 0;

    for(int i = 1; i <= w; i++){
        sum += i * k;
    }

    if(sum <= n){
        cout << "0\n";
    }
    else{
        cout << sum - n << "\n";
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n, w;
    cin >> k >> n >> w;

    solve(k, n, w);

    return 0;
}