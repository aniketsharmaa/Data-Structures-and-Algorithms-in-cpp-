#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> ans = {23, 4, 5, 6, 7};
    int n = ans.size();
    for (auto it : ans)
    {
        cout << it << " ";
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        

    // sort(ans.begin(), ans.end());

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ans[i] > ans[j])
            {
                swap(ans[i], ans[j]);
            }
        }
    }
    cout << "After sorting ";
    for (auto it : ans)
    {
        cout << it << " ";
    }
}
