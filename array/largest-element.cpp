#include <iostream>
using namespace std;
int largest=0;
main()
{
    int arr[5] = {4, 3, 535, 244, 1};
    for (int i = 0; i < 5; i++)
    {
        if (largest < arr[i])
            largest = arr[i];
    }
    cout<<largest<<" is the largest element of the Array";
}