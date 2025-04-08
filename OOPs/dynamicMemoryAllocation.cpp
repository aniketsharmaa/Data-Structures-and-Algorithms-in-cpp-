#include <bits/stdc++.h>
using namespace std;
main(){
    int size;
    int *ptr;
    cout<<"Enter size of array: "<<endl;
    cin>>size;

    ptr = new int[size];
    for(int i=0;i<size;i++){
        cin>>ptr[i];
    }
    cout<<"Element of the array is: "<<endl;
    for(int i=0;i<size;i++){
        cout<< ptr[i]<<endl;
    }


    return 0;
}