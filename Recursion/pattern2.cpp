// half downword pyramid

#include <iostream>
using namespace std;

main()
{
    int row, column;
    cout << "Enter no of rows or column: " << endl;
    cin >> row;
    column=row;


    for(int i=1;i<=row;i++){
        for(int j=1; j<=column; j++){
            cout<<" * ";
        }
        column=column-1;
        cout<<endl;
    }
}