#include <bits/stdc++.h>
using namespace std;

class SearchMatrixSolution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == target) return true;
            }
        }
        return false;
    }
};

int main() {
    SearchMatrixSolution obj;
    vector<vector<int>> mat = {{1, 3, 5}, {7, 9, 11}, {13, 15, 17}};
    int target;
    cin >> target;
    cout << (obj.searchMatrix(mat, target) ? "Found" : "Not Found");
    return 0;
}
