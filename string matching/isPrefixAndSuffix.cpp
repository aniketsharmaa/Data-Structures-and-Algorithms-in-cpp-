#include <bits/stdc++.h>
using namespace std;
bool isPrefixAndSuffix(string s1, string s2)
{
    int n = s1.length();
    bool isPre = false;
    bool isSuf = false;

    if (s1 == s2.substr(0, n))
        isPre = true;
    if (s1 == s2.substr(s2.length() - n, n))
        isSuf = true;
    return isPre and isSuf;
}
int main()
{
    cout<<isPrefixAndSuffix("ani","asniadsjfkdsfani");
    return 0;
}