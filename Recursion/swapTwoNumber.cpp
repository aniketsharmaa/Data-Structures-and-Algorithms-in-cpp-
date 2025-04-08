// Swapping two number without using third variable....

#include <iostream>
using namespace std;

main()
{
    int a, b;
    a = 19;
    b = 5;

    a = a + b; //(a=5)

    b = a - b; //(b=2)
    a = a - b; //(a=-3)

    cout << "a=" << a<<endl;
    cout << "b=" << b<<endl;
}