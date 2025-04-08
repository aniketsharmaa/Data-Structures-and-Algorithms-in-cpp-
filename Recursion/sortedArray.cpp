#include <iostream>
using namespace std;
bool sorted(int arr[], int size);

main()
{
    int arr[5]={3,5,84,440,49};
    cout<<sorted(arr,5);
}
bool sorted(int arr[], int size)
{
    if (size == 1 )
    {
        return true;
    }
    bool restArray = sorted(arr + 1, size - 1);
    if (arr[0] < arr[1] && restArray)
    {
        return true;
    }
}
