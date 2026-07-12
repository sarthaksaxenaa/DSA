#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    int left=0;
    int right = nums.size()-1;
    int sereja = 0;
    int dima = 0;
    int turn=0;
    
    while(left <= right){
        int chosen;
        if(nums[left] > nums[right]){
            chosen = nums[left];
            left++;
        }
        else{
            chosen = nums[right];
            right--;
        }

        if(turn == 0){
            sereja += chosen;
        }
        else{
            dima += chosen;
        }

        turn = 1 - turn;
    }

    cout << sereja << " " << dima;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}