#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<double> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += nums[i];
    }
    double ans = sum / n;
    cout << fixed << setprecision(12) << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
