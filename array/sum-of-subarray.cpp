#include <iostream>
using namespace std;
main()
{
    int arr[5] = {1, 2, 0, 7, 2};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "Size of Array is: " << length << endl;
    for (int i = 0; i < length; i++)
    { 
        int curr=0;
        for (int j = i; j < length; j++)
        {   
            curr+=arr[j];
            cout << curr << "  ";
        }
        
    }
}