#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxPoints(vector<vector<int>>& points){
        int n=points.size();
        if(n<=2) return n;

        int ans=0;
        for(int i=0;i<n;i++){
            unordered_map<string,int> mp;
            int same=1,curMax=0;

            for(int j=i+1;j<n;j++){
                int dx=points[j][0]-points[i][0];
                int dy=points[j][1]-points[i][1];

                if(dx==0 && dy==0){
                    same++;
                    continue;
                }

                if(dx==0) dy=1;
                else if(dy==0) dx=1;
                else{
                    if(dy<0){
                        dx=-dx;
                        dy=-dy;
                    }
                    int g=__gcd(abs(dx),abs(dy));
                    dx/=g;
                    dy/=g;
                }

                string key=to_string(dx)+","+to_string(dy);
                mp[key]++;
                curMax=max(curMax,mp[key]);
            }
            ans=max(ans,curMax+same);
        }
        return ans;
    }
};

int main(){
    vector<vector<int>> points={
        {1,1},
        {2,2},
        {3,3},
        {3,4},
        {5,6},
        {7,8}
    };

    Solution s;
    cout<<s.maxPoints(points);
    return 0;
}