#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(34);
    v.push_back(4);
    v.push_back(3);
    v.push_back(12);
    v.push_back(98);
    sort(v.begin(),v.end());
    // [3,4,12,34,98]

    int target = 4;


    int start = 0;
    int end = v.size()-1;
    while (start < end)
    {
        int mid = (start + end) /2;
        if(v[mid] == target ){
            cout<< "present at: "<< mid;
            break;
        }
        else if(v[mid]<target){
            start = mid+1;
        }
        else{
            end = mid;
        }
    }
    return 0;
}