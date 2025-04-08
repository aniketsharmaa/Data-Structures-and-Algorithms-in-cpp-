#include <iostream>
using namespace std;
int count = 0;
int length;
main()
{
    int arr[5] = {3, 4, 5, 23, 50};
    length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count=count+1;
        }
    }
    cout << "Even number is array is " << count << endl;
    cout << "Odd number is array is " << length - count;
}