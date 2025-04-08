#include <bits/stdc++.h>
using namespace std;
// print all the subarray of the nums 
int main()
{
    vector<int> nums = {3, 5, 6, 2, 3, 6};
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i; j<n; j++){
            vector<int> temp;
            for(int k=i; k<=j; k++){
                temp.push_back(nums[k]);
            }
            cout<<"[";
            for(auto it: temp) cout<<it<<" , ";
            cout<<"]";
            cout<<endl;


        }
    }
    return 0;
}