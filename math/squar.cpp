#include <iostream>
#include <math.h>

using namespace std;

int square(int num){
    int xyz;
    xyz = pow(num,2);
    cout<< "The product of the num is : "<< xyz;
}

main(){
    int num;
    cout<<"Enter a number to get square: ";
    cin>> num;

    square(num);
}