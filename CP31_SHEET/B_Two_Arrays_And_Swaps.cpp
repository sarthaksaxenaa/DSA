#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;
    cin >> n >> k;

    vector<int>a(n);
    vector<int>b(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    int temp = n;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i=0;
    while(k--){
        if(a[i] < b[temp-1]){
            swap(a[i],b[temp-1]);
            i++;
            temp--;
        }
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
    }

    cout << sum << "\n";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}