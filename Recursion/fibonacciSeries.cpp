#include <iostream>
using namespace std;

main()
{
    int num;
    int n1 = 0;
    int n2 = 1;
    int n3;

    cout << "Enter a Number to get a fibonacci series: ";
    cin >> num;
    cout << n1 << endl;
    cout << n2 << endl;

    for (int i = 2; i < num; i++)
    {
        n3 = n1 + n2;
        cout << n3 << endl;
        n1=n2;
        n2=n3;
    }
}