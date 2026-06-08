#include <bits/stdc++.h>
using namespace std;

void unit_array(vector<int> &arr, int n){
    int pos_cnt=0; int neg_cnt=0; int operation=0;
    for(int i=0; i<n; i++){
        if(arr[i] == -1) neg_cnt++;
        else pos_cnt++;
    }

    while(neg_cnt > pos_cnt){
        neg_cnt--;
        pos_cnt++;
        operation++;
    }

    if(neg_cnt % 2) operation++;

    cout << operation << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        unit_array(arr,n);
    }
    return 0;
}