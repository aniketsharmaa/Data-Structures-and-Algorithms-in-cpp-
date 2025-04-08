#include <bits/stdc++.h>
using namespace std;

void calcPrifixSum(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n);

    ans[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] + nums[i];
    }

    cout << "{";
    for (auto it : ans)
    {
        cout << it << " ,";
    }
    cout << "}";
}
int main()
{

    vector<int> nums = {2, 3, 1, 0};
    calcPrifixSum(nums);
    return 0;
}
2,5,6,6
2>4
5>1
6>0