// Printing hello infinite time

#include <iostream>
using namespace std;
void printHello()
{
    cout << "Hello"<<endl;
    printHello();
}

main()
{
printHello();
 
}


//Solve any recursion problem in 3 easy steps
    // 1) Find base case.
    // 2) Find relation between problem and sub problem.
    // 3) Generalise the solution

