#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        double low=1e9, high=-1e9, total=0;
        for(auto &s:squares){
            low=min(low,(double)s[1]);
            high=max(high,(double)(s[1]+s[2]));
            total+=1.0*s[2]*s[2];
        }
        double target=total/2;
        for(int i=0;i<60;i++){
            double mid=(low+high)/2;
            double area=0;
            for(auto &s:squares){
                double y=s[1], l=s[2];
                if(mid<=y) continue;
                if(mid>=y+l) area+=l*l;
                else area+=l*(mid-y);
            }
            if(area<target) low=mid;
            else high=mid;
        }
        return low;
    }
};

int main(){
    int n;
    cin>>n;
    vector<vector<int>> squares(n,vector<int>(3));
    for(int i=0;i<n;i++){
        cin>>squares[i][0]>>squares[i][1]>>squares[i][2];
    }
    Solution s;
    cout<<fixed<<setprecision(6)<<s.separateSquares(squares);
    return 0;
}