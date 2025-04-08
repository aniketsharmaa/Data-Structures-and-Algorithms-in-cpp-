#include <bits/stdc++.h>
using namespace std;

getBit(int n, int pos)
{
    int temp;
    temp = 1 << pos;
    return (temp & n) != 0;
}
setBit(int n, int pos)
{
    int temp;
    temp = 1 << pos;
    return ((temp | n));
}
clearBit(int n, int pos)
{
    int temp;
    temp = ~(1<<pos);
    return (temp & n);
}
updateBit(int n, int pos, int value){
    int mask = 1<<pos;
    mask = ~(mask);
    int num = (mask & n);

    mask = 1<<pos;
    return (num | (value<<pos));
}
int main()
{
    // cout<<getBit(5,2);
    // cout << setBit(5, 10);
    // cout << clearBit(5, 2);
    cout<<updateBit(5,1,1);
    
    return 0;
}