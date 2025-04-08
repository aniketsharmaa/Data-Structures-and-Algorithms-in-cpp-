#include <iostream>
using namespace std;
int factorial(int n);
int m;
main()
{
    int num;
    cout<<"Enter a number to get factorial: ";
    cin>>num;
    
    int result = factorial(num);
    cout<<result;
     
}
int factorial(int n){
  if(n!=0)
  {
    return n*factorial(n-1);
  }
  else {
    return 1;

  }
}