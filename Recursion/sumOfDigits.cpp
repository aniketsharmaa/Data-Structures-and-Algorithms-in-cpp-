#include <iostream>
using namespace std;
main()
{
    int num;
    int r;
    int sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    while (num>0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;

    }
    cout<<sum;
    
}