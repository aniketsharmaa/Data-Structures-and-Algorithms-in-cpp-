#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int i = start;
    int j = end;
    while (i < j)
    {

        do
        {
            i++;
        } while (arr[start] <= pivot);
 
        do
        {
            j--;
        } while (arr[end] > pivot);
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[start],arr[j]);
    return end;
}
void quickSort(int arr[],int start,int end){
    if(start<end){
        int temp =partition(arr,start,end);
        quickSort(arr,start,temp-1);
        quickSort(arr,temp+1,end);

    }
}

main()
{
    int arr[5] = {20, 5, 191, 56, 7};
    quickSort(arr,0,4);
    for(int i=0;i<4; i++){
        cout<<arr[i]<< " ";

    }
    // cout<<"helo";
}