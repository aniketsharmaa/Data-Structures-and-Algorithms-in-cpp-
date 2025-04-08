#include <iostream>
using namespace std;
int arr[]={3,4,60,60};
int length=sizeof(arr)/sizeof(arr[0]);
bool isSorted2(int length);
bool isSorted2(int length){
    for(int i=0;i<length-1;i++){
        if(arr[i+1]-arr[i]<0){
            return false;
        }

    }
    return true;

}
 main()
{
    cout<<isSorted2(4);
   
}
