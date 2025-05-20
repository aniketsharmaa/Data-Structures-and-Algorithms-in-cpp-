#include <bits/stdc++.h>
using namespace std;
int sum(int nums)
{
    if (nums != 0)
    {
        return (nums + sum(nums - 1));
    }
    else
    {
        return nums;
    }
}
int main()
{
    int nums = 5;
    int total = sum(nums);
    cout<<total<<endl;
    cout<<nums;

    return 0;
}