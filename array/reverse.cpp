#include <iostream>
using namespace std;
int arr[5] = {1, 2, 3, 4, 5};
int length = sizeof(arr) / sizeof(arr[0]);
int temp;
main()
{
    for (int i=0,j=length-1;i<j;i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";

    }
}