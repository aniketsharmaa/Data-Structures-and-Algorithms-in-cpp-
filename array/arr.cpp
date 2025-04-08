#include <iostream>
using namespace std;
main()
{
    int mx=-1;
    int arr[5]={3,46,1,66,8};
    cout<<"Program Started "<<endl;


    for(int i=0;i<5;i++){
        mx = max(mx,arr[i]);
        cout<<mx<<endl;
    }
}