#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(int n, vector<int>&nums){
    for(int i=0; i<n; i++){
        if(nums[i] == 1){
            cout << "HARD\n";
            return ;
        }
        
    }
    cout << "EASY\n";    
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    solve(n,nums);
    return 0;
}