#include <iostream>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> ans;
    int product = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            continue;
        product = product * nums[i];
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            ans.push_back(product);
        else
            ans.push_back(product / nums[i]);
    }
    return ans;
}
int main()
{
    vector<int> ans;
    productExceptSelf(ans);
}