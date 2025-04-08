#include <iostream>
using namespace std;
void merge(int arr1[], int m, int arr2[], int n, int arr3[])

{
    int i=0;
    int j=0;
    int k=0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    for (; i < m; i++)
    {
        arr3[k] = arr1[i];
    }
    for (; j < n; j++)
    {
        arr3[k] = arr2[j];
    }
}
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
main()
{
    int arr1[4] = {1, 2, 4, 9};
    int arr2[4] = {3, 7, 8, 11};
    int arr3[8] = {0};

    merge(arr1, 4, arr2, 4, arr3);
    print(arr3, 8);
}