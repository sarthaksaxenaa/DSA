#include <bits/stdc++.h>
using namespace std;
#define int long long

void serval_mocha(vector<int> &nums, int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(__gcd(nums[i], nums[j]) <= 2){
                cout << "Yes\n";
                return;
            }
        }
    }
    cout << "No\n";
}

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }
        serval_mocha(nums, n);
    }
    return 0;
}