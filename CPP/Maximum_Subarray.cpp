#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max1=INT_MIN,sum1=0,n=nums.size();
        for(int i=0;i<n;i++){
            sum1+=nums[i];
            max1=max(max1,sum1);
            if(sum1<0) sum1=0;
        }
        return max1;
    }
};

int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};

    Solution s;
    cout<<s.maxSubArray(nums);
    return 0;
}