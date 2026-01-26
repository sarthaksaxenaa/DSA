#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A){
        int n=A.size();
        if(n<3) return 0;

        int previous=0,result=0;

        for(int x=2;x<n;x++){
            if(A[x]-A[x-1]==A[x-1]-A[x-2]){
                previous=previous+1;
                result+=previous;
            }else{
                previous=0;
            }
        }
        return result;
    }
};

int main(){
    vector<int> A={1,2,3,4};

    Solution s;
    cout<<s.numberOfArithmeticSlices(A);
    return 0;
}