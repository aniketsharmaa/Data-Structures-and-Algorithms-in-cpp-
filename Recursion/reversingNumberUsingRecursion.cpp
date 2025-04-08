#include <iostream>
using namespace std;
int num;

int pattern(int n);
    main()
{
    cout << "Enter a number: ";
    cin >> num;
    pattern(num);
}

int pattern(int n)
{
    if(n==0) return 0;
    cout<<n<<" ";
   pattern(n-1);
   cout<<n<< " ";
    
}
