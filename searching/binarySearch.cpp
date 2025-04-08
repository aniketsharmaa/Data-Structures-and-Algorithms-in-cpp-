
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,4,12,66,74,345};
    int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<size;
    // sort(arr.begin(),arr.end());
    int start =0;
    int end = size;
    int target =66;

    while(start<end){
        int mid = start + (end-start)/2;
        if(arr[mid]==target){
            cout<<"target is present in the: "<< mid;
            break;
        }
        else if(arr[mid] < target){
            start = mid+1;
        }
        else{
            end = mid;
        }
        // cout<<"-1";
    }

    return 0;
}