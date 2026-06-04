#include <bits/stdc++.h>
using namespace std;

int score(vector<string> grid){
    int sum = 0;
    for(int i = 0;i<10;i++){
        for(int j=0; j<10;j++){
            if(grid[i][j] == 'X'){
                sum += min({i,j,9-i,9-j}) + 1; 
            }
        }
    }
    return sum;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        vector<string> grid(10);

        for(int i = 0; i < 10; i++) {
            cin >> grid[i];
        }
        cout << score(grid) << endl;
    }

    return 0;
}