#include <bits/stdc++.h>
using namespace std;

int minTimeToVisitAllPoints(vector<vector<int>>& points){
    int ans=0;
    for(int i=1;i<points.size();i++)
        ans+=max(abs(points[i][0]-points[i-1][0]),abs(points[i][1]-points[i-1][1]));
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> points(n,vector<int>(2));
    for(int i=0;i<n;i++)
        cin>>points[i][0]>>points[i][1];
    cout<<minTimeToVisitAllPoints(points);
    return 0;
}