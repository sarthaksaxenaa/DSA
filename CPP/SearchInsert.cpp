#include <bits/stdc++.h>
using namespace std;

class SearchInsert{
public:
    int searchInsert(vector<int>& arr, int target){
        int n = arr.size();
        int low = 0, high = n - 1, ans = n;
        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid] >= target){
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
    SearchInsert obj;
    vector<int> arr = {1, 3, 5, 6};
    int target;
    cin >> target;
    cout << obj.searchInsert(arr, target);
    return 0;
}
