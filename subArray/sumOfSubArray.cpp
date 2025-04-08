#include <bits/stdc++.h>
using namespace std;

vector<int> calPrefixSum(vector<int> preSum)
{
    int n = preSum.size();
    vector<int> ans(n);
    ans[0] = preSum[0];
    for (int i = 1; i < n; i++)
    {
        ans[i]=preSum[i] + ans[i - 1];
    }
    return ans;
}

int main()
{
    vector<int> nums = {1,1,1};
    int n = nums.size();
    int k =0;
    vector<int> preFixSum = calPrefixSum(nums);

    
    return 0;
}