#include <bits/stdc++.h>
using namespace std;
int main()
{
    int temp = 1;
    vector<int> nums = {-1,1,0,-3,3};
    vector<int> left;
    vector<int> right;
    int n = nums.size();

    for (auto it : nums)
    {
        temp = it * temp;
        left.push_back(temp);
    }
    temp = 1;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        temp = nums[i] * temp;
        right.push_back(temp);
    }
    reverse(right.begin(), right.end());

    vector<int> output;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            output.push_back(right[i + 1]);
        else if (i == n - 1)
            output.push_back(left[i - 1]);
        else
            output.push_back(left[i - 1] * right[i + 1]);
    }

    for (auto it : left)
    {
        cout << it << " , ";
    }
    cout << endl;
    for (auto it : right)
    {
        cout << it << " , ";
    }
    cout << endl;
    for (auto it : output)
    {
        cout << it << " , ";
    }
}