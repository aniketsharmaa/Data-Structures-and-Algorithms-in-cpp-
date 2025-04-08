#include <bits/stdc++.h>
using namespace std;

string rev(string s)
{
    int n = s.length() - 1;
    int i = 0;

    while (i <= n)
    {
        swap(s[i], s[n]);
        i++;
        n--;
    }
    return s;
}

void sort(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (v[j] > v[j+1])
            {
                swap(v[j+1], v[j]);
            }
        }
    }
    for(auto it: v){
        cout<<it<<" ";
    }
}

int main()
{
    vector<int> v = {91, 9092, 13, 4, 95};
    sort(v);
    return 0;
}