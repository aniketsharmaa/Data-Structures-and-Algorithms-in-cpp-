
//hollow pattern

// *  *  *  *  *
// *           *
// *           *
// *           *
// *           *
// *  *  *  *  *



#include <iostream>
using namespace std;
main()
{
    int row,column;
    cout<<"Enter number of Rows & Column: ";
    cin>>row>>column;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            if(i==1||i==row){
            cout<<" * ";

            }
            else if(j==1||j==column){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }

        }
        cout<<endl;
    }
    


    
}