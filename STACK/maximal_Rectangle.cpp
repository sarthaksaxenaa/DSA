#include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& h){
    stack<int> stk;
    h.push_back(0);
    int ans=0;
    for(int i=0;i<h.size();i++){
        while(!stk.empty() && h[i]<h[stk.top()]){
            int height=h[stk.top()];
            stk.pop();
            int width=stk.empty()?i:i-stk.top()-1;
            ans=max(ans,height*width);
        }
        stk.push(i);
    }
    h.pop_back();
    return ans;
}

int maximalRectangle(vector<vector<char>>& matrix){
    if(matrix.empty()) return 0;
    int n=matrix[0].size(), ans=0;
    vector<int> heights(n,0);
    for(auto &row:matrix){
        for(int i=0;i<n;i++)
            heights[i]=row[i]=='1'?heights[i]+1:0;
        ans=max(ans,largestRectangleArea(heights));
    }
    return ans;
}

int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<char>> matrix(r,vector<char>(c));
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>matrix[i][j];
    cout<<maximalRectangle(matrix);
    return 0;
}