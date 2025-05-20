#include <iostream>
using namespace std;

bool isPrime(int nums){
    for(int i=2;i<nums;i++){
        if(nums % i == 0) return false;

    }
    return true;
}

int main()
{   int sum =0;
    int range = 30;
    for(int i=1;i<=30;i++){
        if(isPrime(i)) {
           sum += i;
        }
    }
    cout<<sum;
    return 0;
}
