#include <iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter number of rows or column: ";
    cin>>n;
    int count=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        {
            cout<<" " << count << " ";
            count=count+1;
        }
        
        cout<<endl;
    }
}