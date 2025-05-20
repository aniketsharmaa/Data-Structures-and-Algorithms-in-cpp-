#include <bits/stdc++.h>
using namespace std;
template <typename T1, typename T2>
template <typename I1>
T1 sum(T1 a, T2 b)
{
    return (a + b);
}

I1 main<int>()
{

    cout << sum<float, int>(34.3, 5);
    return 0;
}