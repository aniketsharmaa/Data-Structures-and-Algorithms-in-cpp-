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
    int a[80], n, i;
    cout << "How many elements? : ";
    cin >> n;
    cout << "\nEnter array elements: ";

    for (i = 0; i < n; i++)
        cin >> a[i];

    quick_sort(a, 0, n - 1);
    cout << "\nArray after sorting: ";

    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
