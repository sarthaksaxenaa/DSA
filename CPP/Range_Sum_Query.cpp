#include <bits/stdc++.h>
using namespace std;

class NumMatrix {
public:
    vector<vector<int>> pre;

    NumMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=n?matrix[0].size():0;
        pre.assign(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                pre[i][j]=matrix[i-1][j-1]+pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1];
    }

    int sumRegion(int row1,int col1,int row2,int col2) {
        return pre[row2+1][col2+1]-pre[row1][col2+1]-pre[row2+1][col1]+pre[row1][col1];
    }
};

int main(){
    vector<vector<int>> matrix={
        {3,0,1,4,2},
        {5,6,3,2,1},
        {1,2,0,1,5},
        {4,1,0,1,7},
        {1,0,3,0,5}
    };

    NumMatrix obj(matrix);

    cout<<obj.sumRegion(2,1,4,3)<<endl;
    cout<<obj.sumRegion(1,1,2,2)<<endl;
    cout<<obj.sumRegion(1,2,2,4)<<endl;

    return 0;
}