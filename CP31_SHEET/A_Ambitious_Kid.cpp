#include <bits/stdc++.h>
using namespace std;

int Ambitious(vector<int> &arr, int n){
    int ans = abs(arr[0]);

    for(int i=0; i<n; i++){
        ans = min(abs(arr[i]), ans);
    }

    return ans;
}

int main(){
        int n; cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        cout << Ambitious(arr,n) << endl;

    return 0;
}