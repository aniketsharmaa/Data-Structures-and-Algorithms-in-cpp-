#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s)
{
    string ans;
    map<int, char> mp;
    for (auto it : s)
    {
        mp[it]++;
    }
    priority_queue<pair<int, char>> pq;
    for (auto it : mp)
    {
        pq.push({it.second, it.first});
    }

    while (!pq.empty())
    {
        for (int i = 0; i < pq.top().first; i++)
        {
            ans += pq.top().second;
        }
        pq.pop();
    }
    return ans;
}
int main()
{
    string a = "aniaaaket";
    cout<<frequencySort(a);
    return 0;
}