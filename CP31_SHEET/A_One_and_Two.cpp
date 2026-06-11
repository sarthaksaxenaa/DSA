#include <bits/stdc++.h>
using namespace std;
#define int long long

void One_Two(vector<int> &nums, int n){
    int count_two = 0;

    for(int x : nums){
        if(x == 2) count_two++;
    }

    if(count_two == 0){
        cout << 1 << "\n";
        return;
    }

    if(count_two % 2){
        cout << -1 << "\n";
        return;
    }

    int need = count_two / 2;
    int cur = 0;

    for(int i = 0; i < n; i++){
        if(nums[i] == 2) cur++;

        if(cur == need){
            cout << i + 1 << "\n";
            return;
        }
    }
}

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n ; cin >> n;
        vector<int> nums(n);

        for(int i=0; i<n; i++){
            cin >> nums[i];
        }
        One_Two(nums, n);
    }
    return 0;
}