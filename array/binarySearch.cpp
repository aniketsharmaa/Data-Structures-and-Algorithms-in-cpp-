#include <iostream>
using namespace std;
int arr[10] = {1, 2, 3, 4, 6, 9, 12, 33, 55, 77};
int length = sizeof(arr) / sizeof(arr[0]);
int low = 0;
int high = length;
int key = 55;

int binarySearch(int low, int high, int key);

main()
{
    cout << "The key element is present at " << binarySearch(low, high, key) << " index.";
}

int binarySearch(int low, int high, int key)
{

    while (low < high)
    {

        int mid = (low + high) / 2;

        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            return binarySearch(low + 1, high, key);
        }
        else if (key < arr[mid])
        {
            return binarySearch(low, high - 1, key);
        }
    }

    return -1;
}
