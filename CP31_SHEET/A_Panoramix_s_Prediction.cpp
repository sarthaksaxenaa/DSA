#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isPrime(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

void solve(){
    int a, b;
    cin >> a >> b;

    int nextPrime = a + 1;
    while(!isPrime(nextPrime)) nextPrime++;

    if(nextPrime == b) cout << "YES\n";
    else cout << "NO\n";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}