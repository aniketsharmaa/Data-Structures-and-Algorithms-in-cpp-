#include <iostream>
using namespace std;
int factorial(int a);

main()
{
    int num;
    cout << "Enter a number to get its factorial: ";
    cin >> num;
    int result = factorial(num);
    cout << result;
}

int factorial(int a)
{
    if (a == 1)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}