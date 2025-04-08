#include <iostream>
using namespace std;
int sumOf(int n);


main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int r=sumOf(num);
    cout<<r; 

}
int sumOf(int n)
{
    if (n == 0)
    {
        return 0;
        
    }
    else{
        return n+sumOf(n-1);
    }
}