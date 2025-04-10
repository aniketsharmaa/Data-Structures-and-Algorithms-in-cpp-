#include <bits/stdc++.h>
using namespace std;

void callByValue(int a, int b)
{
    int temp = b;
    b = a;
    a = temp;
}
void callByReference(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}
int main()
{

    int a = 1, b = 2;
    cout << "BEFORE CALLING : a = " << a << " , b = " << b << endl;
    callByValue(a, b);
    cout << "AFTER CALLING : a = " << a << " , b = " << b << endl;
    return 0;
}