// Dutch Flag Problem is the sorting algorithm which is used when there are only 3 type of elements present in the vector (like 0,1 and 2).
#include <bits/stdc++.h>
using namespace std;
vector<int> dfp(vector<int> nums)
{
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid < high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
    return nums;
}
int main()
{
    cout << "VECTOR BEFORE SORTING: ";
    vector<int> nums = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    cout<<endl;
    for (auto i : nums)
    {
        cout << i << " ";
    }
    cout<<endl;
    nums = dfp(nums);
    cout << "VECTOR AFTER SORTING: ";
    cout<<endl;
    for (auto i : nums)
    {
        cout << i << " ";
    }
    return 0;
}