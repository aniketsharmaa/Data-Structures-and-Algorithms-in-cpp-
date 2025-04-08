#include <iostream>
using namespace std;
main()
{
    int mx=-1;
    int arr[5];

    for(int i=0; i<=5;i++){
        cin>>arr[i];
    }

    for(int j=0;j<=5;j++){
        mx=max(mx,arr[j]);
        cout<<"   "<<mx<<endl;
    }
}