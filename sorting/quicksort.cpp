#include <iostream>

using namespace std;

int partition(int a[], int l, int u)
{
    int pivot, i, j, temp;
    pivot = a[l];
    i = l;
    j = u + 1;

    do
    {
        do
            i++;

        while (a[i] < pivot && i <= u);

        do
            j--;
        while (pivot < a[j]);

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

    a[l] = a[j];
    a[j] = pivot;

    return (j);
}
void quick_sort(int a[], int l, int u)
{
    int j;
    if (l < u)
    {
        j = partition(a, l, u);
        quick_sort(a, l, j - 1);
        quick_sort(a, j + 1, u);
    }
}

int main()
{
    int arr[20], n, i;
    cout << "How number of elements to be sorted : ";
    cin >> n;
    cout << "\nEnter another elements: ";

    for (i = 0; i < n; i++)
        cin >> arr[i];

    quick_sort(arr, 0, n - 1);
    cout << "\nArray after sorting: ";

    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
