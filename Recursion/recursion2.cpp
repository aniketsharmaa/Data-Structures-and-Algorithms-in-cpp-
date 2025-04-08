#include <iostream>
using namespace std;
int sum(int a);

main()
{
    int num;
    cout<< "Enter a number to get sum of all natural numbers: ";
    cin>>num;
    int result = sum(num);
    cout<<result;


}

int sum(int a){
    if(a==0){
        return 0;
    }
  else{

   return a + sum(a-1);
  }
}