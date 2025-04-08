#include <bits/stdc++.h>
using namespace std;
void sort(vector<int> nums)
{
    int n = nums.size();
    int i = 0;
    while (i < n)
    {
        int j = i+1;
        while (j < n)
        {
            if (nums[i] > nums[j])
            {
                swap(nums[i], nums[j]);
            }
            j++;
        }
        i++;
    }
    for (auto it : nums)
    {
        cout << it << " ";
    }
}

int main()
{
    vector<int> v = {12, -42, 5, 1, 2};
    sort(v);
    return 0;
}