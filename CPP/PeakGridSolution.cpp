#include <bits/stdc++.h>
using namespace std;

class PeakGridSolution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if ((i == 0 || mat[i-1][j] < mat[i][j]) &&
                    (i == n-1 || mat[i+1][j] < mat[i][j]) &&
                    (j == 0 || mat[i][j-1] < mat[i][j]) &&
                    (j == m-1 || mat[i][j+1] < mat[i][j]))
                    return {i, j};
            }
        }
        return {-1, -1};
    }
};

int main() {
    PeakGridSolution obj;
    vector<vector<int>> mat = {{1,4,3},{6,7,8},{5,2,9}};
    vector<int> ans = obj.findPeakGrid(mat);
    cout << ans[0] << " " << ans[1];
    return 0;
}
