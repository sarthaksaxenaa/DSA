#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& a){
        for(auto &r:a){
            reverse(r.begin(),r.end());
            for(int &x:r) x^=1;
        }
        return a;
    }
};

int main(){
    vector<vector<int>> a={
        {1,1,0},
        {1,0,1},
        {0,0,0}
    };

    Solution s;
    vector<vector<int>> ans=s.flipAndInvertImage(a);

    for(auto &r:ans){
        for(int x:r) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}