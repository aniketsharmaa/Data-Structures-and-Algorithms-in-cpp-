#include <iostream>
using namespace std;
main(){
    int num;
    int lastDigit;

    cout<<"Enter a number you want to reverse: ";
    cin>>num;

    while (num>0)

    {
       lastDigit=num%10;
       cout<<lastDigit;
       num=num/10;
    }
    
}