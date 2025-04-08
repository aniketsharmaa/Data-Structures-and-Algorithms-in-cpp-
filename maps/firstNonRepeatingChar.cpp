#include <bits/stdc++.h>
using namespace std;

char firstNonRep(string s)
{
    unordered_map<char, int> mp;
    for (auto it : s)
    {
        mp[it]++;
    }
    for (auto it : s)
    {
        if (mp[it] == 1)
            return it;
    }
    return '\0';
}
int main()
{
    string s = "aniket";
    char res = firstNonRep(s);
    if (res != '\0')
        cout << "First repeating char is " << res;
    else
        cout << "No non-repeatin character";
    return 0;
}
