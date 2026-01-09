#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n,-1);
        stack<int> stk;
        for(int i=2*n-1;i>=0;i--){
            while(!stk.empty() && stk.top()<=nums[i%n]) stk.pop();
            if(i<n && !stk.empty()) result[i]=stk.top();
            stk.push(nums[i%n]);
        }
        return result;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    Solution s;
    vector<int> ans=s.nextGreaterElements(nums);
    for(int x:ans) cout<<x<<" ";
    return 0;
}