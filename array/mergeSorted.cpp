#include <iostream>
using namespace std;
int arr1[3] = {2, 4, 29};
int arr2[3] = {1, 17, 18};
int arr3[6] = {0};

main()
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < 3 && j < 3){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    for(;i<3;i++){
        arr3[k]= arr1[i];
    }
    for(;j<3;j++){
        arr3[k]= arr2[j];
    }
    for(int i=0;i<6;i++){
        cout<<arr3[i]<<" ";
    }
}