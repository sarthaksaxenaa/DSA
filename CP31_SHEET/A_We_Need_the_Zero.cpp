#include <bits/stdc++.h>
using namespace std;
#define int long long

void need_zero(vector<int> &nums, int n){
    int sum = nums[0];
    for(int i=1; i<n; i++){
            sum^= nums[i];
        }

        if(n % 2!=0){
            cout << sum << "\n";
            return ;
        }
        else if(n%2 == 0 && sum == 0){
            cout << 0 << "\n";
            return ;
        }
    cout << -1 << "\n";
}

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> nums(n);

        for(int i=0; i<n; i++){
            cin >> nums[i];
        }

        need_zero(nums, n);
    }
    return 0;
}