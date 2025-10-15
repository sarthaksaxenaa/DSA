#include <bits/stdc++.h>
using namespace std;

class UpperBound{
public:
    int upperBound(vector<int> &arr, int x){
        int n = arr.size();
        int low = 0, high = n - 1, ans = n;
        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid] > x){
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};

int main(){
    UpperBound obj;
    vector<int> arr = {1, 2, 4, 6, 8, 10};
    int x;
    cin >> x;
    cout << obj.upperBound(arr, x);
    return 0;
}
