#include <bits/stdc++.h>
using namespace std;

class BinarySearch{
public:
    int search(vector<int>& arr, int target){
        int n = arr.size();
        int low = 0, high = n - 1;
        while(low <= high){
            int mid = (low + high) >> 1;
            if(arr[mid] == target) return mid;
            if(arr[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};

int main(){
    BinarySearch obj;
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int target;
    cin >> target;
    cout << obj.search(arr, target);
    return 0;
}
// Binary Search algo