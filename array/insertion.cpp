#include <iostream>
using namespace std;
int arr[] = {2, 5, 16, 27, 29, 44};
int length = sizeof(arr) / sizeof(arr[0]); // giving 6 as result...

main()
{
    int key = 99;
    int i = length - 1;
    while (key < arr[i])
    {
        // arr[i]=arr[i-1];
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i+1] = key;

    for (int i = 0; i <= 6; i++)
    {
        cout << arr[i] << " ";
    }
}