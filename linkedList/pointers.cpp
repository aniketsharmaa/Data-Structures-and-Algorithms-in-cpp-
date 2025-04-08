#include <iostream>
using namespace std;
void print(int);
void print(int *a){
    cout<<*a;

}

main() {
    int a=10;
    cout<<*a;
    
}