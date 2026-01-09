#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> stk;
        int water=0;
        for(int i=0;i<height.size();i++){
            while(stk.empty()==false && height[i]>height[stk.top()]){
                int mid=stk.top();
                stk.pop();
                if(stk.empty()) break;
                int left=stk.top();
                int width=i-left-1;
                int h=min(height[i],height[left])-height[mid];
                water+=width*h;
            }
            stk.push(i);
        }
        return water;
    }
};

int main(){
    Solution sol;
    vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<sol.trap(height);
    return 0;
}