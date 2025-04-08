// insertion sort

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {2, 41, 7, 12, 34, 5};
    int size = 6;

    for (int i = 0; i < size; i++)
    {
        int current = arr[i];
        int j = i - 1;

        while (current < arr[j] and j>=0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    // for print the element of the sorted array 

    for(int i =0 ;i<size; i++){
        cout<<arr[i];
        cout<<", ";
    }

    return 0;
}