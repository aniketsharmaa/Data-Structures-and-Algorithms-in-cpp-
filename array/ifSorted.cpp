#include <iostream>
using namespace std;
int arr[]={3,4,5,60};
int length=sizeof(arr)/sizeof(arr[0]);
bool isSorted(int length);
bool isSorted(int length){
    for(int i=0;i<length-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }

    }
    return true;

}
 main()
{
    cout<<isSorted(4);
   
}
