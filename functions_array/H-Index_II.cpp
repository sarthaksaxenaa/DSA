#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& c){
        int n=c.size();
        int l=0,h=n-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(c[m]>=n-m) h=m-1;
            else l=m+1;
        }
        return n-l;
    }
};

int main(){
    vector<int> citations={0,1,3,5,6};

    Solution s;
    cout<<s.hIndex(citations);
    return 0;
}