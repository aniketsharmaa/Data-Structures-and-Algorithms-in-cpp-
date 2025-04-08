#include <bits/stdc++.h>
using namespace std;
int getLength(int num)
{
    int len = 0;
    while (num > 0)
    {
        len++;
        num = num / 10;
    }
    return len;
}
int getLastDigit(int num)
{
    return num % 10;
}
int getFirstDigit(int num)
{
    while (num > 10)
    {

        num = num / 10;
    }
    return num;
}

int main()
{

    int num = 1212121122;
    cout << getLength(num);
    return 0;
}