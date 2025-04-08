#include <iostream>
using namespace std;
void pattern (int n);
main()
{
    pattern(14);
}


void pattern(int n){
    if(n<0){
        cout<<n<<endl;
        pattern(n-5);
    }
}