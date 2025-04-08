#include <bits/stdc++.h>
using namespace std;
int main()
{

    string boy = "ttanike";
    string girl = "anikett";

    int n = boy.length();
    int m = girl.length();

    int boyArr[26] = {0};
    int girlArr[26] = {0};

    if (m != n)
    {
        cout << "NOT ANAGRAM";
        return 0;
    }
    for (auto it : boy)
    {
        char temp = it;
        boyArr[temp - 'a']++;
    }
    for (auto it : girl)
    {
        char temp = it;
        girlArr[temp - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (boyArr[i] != girlArr[i])
        {
            cout << "NOT ANAGRAM";
            return 0;
        }
    }
    cout << "ANAGRAM" << endl;
    return 0;
}