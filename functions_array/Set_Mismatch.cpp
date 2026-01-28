#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums){
        int n=nums.size();
        unordered_map<int,int> mpp;
        int missing=-1,repeating=-1;

        for(int x:nums) mpp[x]++;

        for(int i=1;i<=n;i++){
            if(mpp[i]==2) repeating=i;
            if(mpp[i]==0) missing=i;
        }
        return {repeating,missing};
    }
};

int main(){
    vector<int> nums={1,2,2,4};

    Solution s;
    vector<int> ans=s.findErrorNums(nums);

    cout<<ans[0]<<" "<<ans[1];
    return 0;
}