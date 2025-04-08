#include <iostream>
using namespace std;
int linearSearch(int arr[], int key);
main()
{
    int arr[7] = {2, 5, 23, 55, 63, 65, 99};
    int length = 7;
   cout<< linearSearch(arr,4545);
}
int linearSearch(int arr[], int key)
{
    for (int i = 0; i < 7; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }

    return -1;
}