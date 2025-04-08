#include <iostream>
using namespace std;
int arr[11] = {1, 2, 39898, 4, 6, 7, 8, 23, 77, 88};
int length = sizeof(arr) / sizeof(arr[0]);
void display(void);
void insert(int index, int value);
void replace(int index, int value);
void deleteFun(int index);
int get(int index);
int findMax();

// display() to display all the function
void display()
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}
// insert() to insert an element to the given index
void insert(int index, int value)
{
    for (int i = length - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
        // cout<<i<<endl;
    }
    arr[index] = value;
    length = sizeof(arr) / sizeof(arr[0]);
}
// replace() to replace the value to the given index.
void replace(int index, int value)
{
    arr[4] = value;
}

// delete() to delete any element to the function.
void deleteFun(int index)
{
    for (int i = index; i <= length; i++)
    {
        arr[i] = arr[i + 1];
    }

    length = sizeof(arr) / sizeof(arr[0]) - 1;
}
// get() return the element present at that index
int get(int index)
{
    if (index < length)
    {

        return arr[index];
    }
}

// findMax() returns the maximum element of the arr.
int findMax()
{
    int max = arr[0];
    for (int i = 0; i < length; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
main()
{
    display();
   cout<< endl <<findMax();
}