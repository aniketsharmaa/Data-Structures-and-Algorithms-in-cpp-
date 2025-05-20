#include <iostream>
using namespace std;
// call by pointer  
int increment(int *temp)
{
     return ++(*(temp));
  
}
int main()
{
    int a = 10;
    int *ptr = &a;
    increment(ptr);
    cout << a;
    return 0;
}