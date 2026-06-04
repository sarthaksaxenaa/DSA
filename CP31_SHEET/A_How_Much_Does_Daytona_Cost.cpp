#include <bits/stdc++.h>
using namespace std;

void search(vector<int> &arr, int random){
    if(arr.size() == 1 && arr[0] == random){
        cout << "YES" << endl;
        return;
    } 
    else if(arr.size() == 1 && arr[0] != random){
        cout << "NO" << endl;
        return;
    }
    else{
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == random){
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t; cin >>t;
    while(t--){
        int n; cin>>n;
        int random; cin >> random;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        search(arr, random);
    }
    return 0;
}