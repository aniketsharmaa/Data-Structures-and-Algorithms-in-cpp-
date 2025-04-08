#include <bits/stdc++.h>
using namespace std;
void increment(int &val)
{
    val = val + 1;
    cout << val << endl;
}

int main()
{
    int n = 3;

    increment(n);
    cout << "Orignal value of n is : " << n;

    return 0;
}