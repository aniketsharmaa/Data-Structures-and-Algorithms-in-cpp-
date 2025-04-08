#include <iostream>
using namespace std;

   vector<int> leftRigthDifference(vector<int> nums) {
        int n=nums.size();  
        vector <int> leftSum{n};
        vector <int> rightSum{n};
        vector <int> ans{n};
        int temp =0;

        for(int i=0;i<n ; i++){
            leftSum[i] = temp + leftSum[i];
            temp=leftSum[i];
        }
        temp=0;
        for(int i=0;i<n ; i++){
            rightSum[i] = temp + rightSum[i];
            temp=rightSum[i];
        }

        for(int i=0;i<n ;i++){
            ans[i]=abs(leftSum[i]-rightSum[i]);
        }
        return ans;

    }
main(){
    int nums[] ={10,4,8,3};
    cout<<leftRigthDifference(nums)
   
}