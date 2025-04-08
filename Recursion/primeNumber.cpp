#include <iostream>
using namespace std;
main()
{
    int num, count = 0;
    cout << "Enter a number to check its prime or not: " << endl;
    cin >> num;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "Given number isn't Prime ";
            break;
        }
        else
        {
            cout << "YES...Given number is Prime ";
            break;
        }
    }
}