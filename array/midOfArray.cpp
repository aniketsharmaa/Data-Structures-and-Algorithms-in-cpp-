#include <iostream>
using namespace std;
main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,0};
    int slow=0;
    int fast=0;

    while(arr[fast]!= 0){
        fast++;
        slow++;
        fast++;
    } cout<<"MID of array is " << arr[slow];
}