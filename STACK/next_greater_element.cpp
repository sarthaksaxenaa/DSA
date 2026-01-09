#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        stack<int> stk;
        unordered_map<int,int> mpp;
        for(int i=n-1;i>=0;i--){
            while(!stk.empty() && nums2[i]>=stk.top()) stk.pop();
            mpp[nums2[i]]=stk.empty()?-1:stk.top();
            stk.push(nums2[i]);
        }
        vector<int> result;
        for(int x:nums1) result.push_back(mpp[x]);
        return result;
    }
};

int main(){
    int n1,n2;
    cin>>n1;
    vector<int> nums1(n1);
    for(int i=0;i<n1;i++) cin>>nums1[i];
    cin>>n2;
    vector<int> nums2(n2);
    for(int i=0;i<n2;i++) cin>>nums2[i];
    Solution s;
    vector<int> ans=s.nextGreaterElement(nums1,nums2);
    for(int x:ans) cout<<x<<" ";
    return 0;
}