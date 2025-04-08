#include <bits/stdc++.h>
using namespace std;
int maxAscendingSum(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;
    ans[0] = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] < nums[i])
        {
            ans.push_back(nums[i] + ans[i - 1]);
        }
        else
        {
            ans.push_back(nums[i]);
        }
    }
    // int maxi = *max_element(ans.begin(),ans.end());
    // return maxi;
    int maxi = -1;
    for (auto it : ans)
    {
        cout << it << " ";
        maxi = max(maxi, it);
    }
    cout << endl;
    return maxi;
}
int main()
{
    vector<int> num = {10, 20, 30, 40, 50};
    int maxi = maxAscendingSum(num);
    cout << maxi;
    return 0;
}