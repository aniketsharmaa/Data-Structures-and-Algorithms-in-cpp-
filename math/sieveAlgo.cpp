#include <bits/stdc++.h>
using namespace std;
vector<int> getPrime2(int left, int right) {
    int n = right;
    vector<bool> prime(n, true);
    for (int i = 0; i < n; i++) {
        if (prime[i] == true) {
            for (int j = i * 2; j < n; j += i) {
                prime[j] = false;
            }
        }
    }
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (prime[i] == true and i > left) {
            ans.push_back(i);
        }
    }
    return ans;
}
void getPrime(int nums)
{
    int n = nums;
    vector<bool> prime(n, true);

    for (int i = 2; i < prime.size(); i++)
    {
        if (prime[i] == true)
        {
            for (int j = 2 * i; j <= nums; j += i)
            {
                prime[j] = false;
            }
        }
    }
    vector<int> ans;
    for (int i = 2; i < prime.size(); i++)
    {
        if (prime[i] == true)
            ans.push_back(i);
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
}
int main()
{
    cout << "Enter a number ";
    int left =1;
    int right =30;

    vector<int> p ;
    p= getPrime2(left,right);
    for(auto it :p){
        cout<<it;
    }

    return 0;
}