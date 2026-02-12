#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cout << "Enter the number of test cases you want to check for: ";
    cin >> t;
    while(t--){
        int n, x;
        cout << "ENTER THE NUMBER OF STATIONS YOU WANT TO: ";
        cin >> n;

        cout << "ENTER THE LAST x POINT WHERE YOU WANT TO AND COME BACK: ";
        cin >> x;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cout << "ENTER THE STATION AWAY FROM BEFORE: ";
            cin >> a[i];
        }

        int maxi = a[0];

        for(int i = 1; i < n; i++){
            maxi = max(maxi, a[i] - a[i-1]);
        }

        maxi = max(maxi, 2 * (x - a[n-1]));
        cout << maxi << endl;
    }
    return 0;
}