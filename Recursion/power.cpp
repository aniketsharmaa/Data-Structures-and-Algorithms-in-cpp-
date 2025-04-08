#include <iostream>
using namespace std;
int base,exp;
int power(int m, int n);

main()
{
    cout<<"Enter Base and Exponent: "<<endl;
    cin>> base>>exp;
    int result = power(base,exp);
    cout<<result;

}

int power(int m,int n){
    if(n!=0){
        return m*power(m,n-1);
    }
    else{
        return 1;
    }
}