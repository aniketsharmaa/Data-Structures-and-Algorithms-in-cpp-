#include <bits/stdc++.h>
using namespace std;
void threeSum(vector<int> nums, int target)
{

    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int low = i + 1;
        int high = n-1;
        int mid = (low + high) / 2;
        int sum = nums[low] + nums[high] + nums[i];
        if (sum == target)
        {
            cout << "Triplet found" << " " << nums[low] << nums[high] << nums[i] << endl;
        }
        else if(sum<target){
            low++;
        }
        else{
            high--;
        }
    }
}
int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    threeSum(nums, 0);
    return 0;
}