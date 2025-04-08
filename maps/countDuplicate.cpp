#include <bits/stdc++.h>
using namespace std;

int count(vector<int> nums)
{
    unordered_map<int,int> mp;
    for (auto it : nums)
    {
        mp[it]++;
    }
    int ans = 0;
    for (auto &i : mp)
    {
        if (i.second > 1)
            ans++;
    }
    return ans;
}
int main()

{
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    cout << count(nums);

    return 0;
}