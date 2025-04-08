// a code to show function overloading; 

#include <bits/stdc++.h>
using namespace std;
class addition
{
public:
    int add(int a, int b)
    {
        int c;
        c = a + b;
        return c;
    }
    float add(float a, float b)
    {
        float c;
        c = a + b;
        return c;
    }
};
int main()
{
    float num1 = 3.8;
    float num2 = 2.8;

    addition a1;
    cout << a1.add(num1, num2) << endl;

    return 0;
}