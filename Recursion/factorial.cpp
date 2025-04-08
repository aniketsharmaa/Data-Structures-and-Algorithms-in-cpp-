#include <iostream>
using namespace std;
main(){
    int num,result=1;
    cout<<"Enter a number to get factorial: ";
    cin>>num;

    for(int i=1;i<=num;i++){
        result=i*result;
        
        
    }
    cout<<result;
}