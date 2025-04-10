#include <iostream>
using namespace std;
int main()
{
    int n = 30, d = 0;
    int result;
    try
    {
        if (d == 0)
            throw d;
        result = n / d; // causing exception, we need to handel this.
        cout << "After divisioin: " << result;
    }
    catch (int d)
    {
        cout << "Demoninator can't be : " << d;
    }
    return 0;
}