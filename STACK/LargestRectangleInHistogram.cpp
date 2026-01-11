#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> stk;
        heights.push_back(0);
        int ans=0;
        for(int i=0;i<heights.size();i++){
            while(!stk.empty() && heights[i]<heights[stk.top()]){
                int h=heights[stk.top()];
                stk.pop();
                int width;
                if(stk.empty()) width=i;
                else width=i-stk.top()-1;
                ans=max(ans,h*width);
            }
            stk.push(i);
        }
        return ans;
    }
};

int main(){
    Solution sol;
    int n;
    cin>>n;
    vector<int> heights(n);
    for(int i=0;i<n;i++) cin>>heights[i];
    cout<<sol.largestRectangleArea(heights);
    return 0;
}