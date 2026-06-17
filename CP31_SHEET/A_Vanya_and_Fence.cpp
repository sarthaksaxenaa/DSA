#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int n, int h, vector<int> &nums){
    int width = 0;
    for(int i=0; i<n; i++){
        if(nums[i] <= h) width++;
        else if(nums[i] > h && nums[i] <= (2*h)) width = width + 2;
    }
    cout << width << "\n";
}

int32_t main(){
    int a, h;
    cin >> a >> h;
    vector<int> nums(a);

    for(int i=0; i<a; i++){
        cin >> nums[i];
    }

    solve (a,h,nums);

    return 0;
}