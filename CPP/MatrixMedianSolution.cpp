#include <bits/stdc++.h>
using namespace std;

class MatrixMedianSolution {
public:
    int findMedian(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<int> arr;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arr.push_back(matrix[i][j]);
            }
        }
        sort(arr.begin(), arr.end());
        return arr[(n * m) / 2];
    }
};

int main() {
    MatrixMedianSolution obj;
    vector<vector<int>> mat = {{1,4,9},{2,5,6},{3,7,8}};
    cout << obj.findMedian(mat);
    return 0;
}
// matrix median solution 