#include <iostream>
using namespace std;
int arr[] = {1, 2, 3, 4, 5, 7, 8};
int length = sizeof(arr) / sizeof(arr[0]);
main()
{
    int sum=length+1+(length+2)/2;
    cout<<sum;
    for (int i = 0; i < length; i++)
    {
        int arrSum=arr[i]+arrSum;
    }
}