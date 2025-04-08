#include <iostream>
using namespace std;


main()
{
    int num;
    cout << "Enter a numeber to get its table: " << endl;
    cin >> num;
    for(int i=1;i<11;i++){
        int result = i*num;
        cout<<result<<endl;
    }
}   