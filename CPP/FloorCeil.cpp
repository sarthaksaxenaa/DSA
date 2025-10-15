#include <bits/stdc++.h>
using namespace std;

pair<int,int> floorAndCeil(vector<int>& arr,int target){
    int low=0,high=arr.size()-1;
    int floorVal=-1,ceilVal=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            floorVal=ceilVal=arr[mid];
            break;
        }else if(arr[mid]<target){
            floorVal=arr[mid];
            low=mid+1;
        }else{
            ceilVal=arr[mid];
            high=mid-1;
        }
    }
    return {floorVal,ceilVal};
}

int main(){
    vector<int> arr={1,3,5,7,9};
    int target=6;
    auto ans=floorAndCeil(arr,target);
    cout<<"Floor: "<<ans.first<<" Ceil: "<<ans.second;
}
