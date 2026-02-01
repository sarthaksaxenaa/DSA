#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int helper(vector<int>& nums,int goal){
        if(goal<0) return 0;
        int l=0,r=0,cnt=0,sum=0;

        while(r<nums.size()){
            sum+=nums[r]%2;
            while(sum>goal) sum-=nums[l++]%2;
            cnt+=r-l+1;
            r++;
        }
        return cnt;
    }

    int numberOfSubarrays(vector<int>& nums,int k){
        return helper(nums,k)-helper(nums,k-1);
    }
};

int main(){
    vector<int> nums={1,1,2,1,1};
    int k=3;

    Solution s;
    cout<<s.numberOfSubarrays(nums,k);
    return 0;
}