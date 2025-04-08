#include <iostream>
using namespace std;
int sum=0;
main(){
    int arr[4]={3,23,55,10};
    for(int i=0;i<4;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<" is the sum of all the element present in the array";
}