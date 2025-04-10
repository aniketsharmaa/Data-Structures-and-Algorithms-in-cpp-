#include <bits/stdc++.h>
using namespace std;
class Base
{
public:
    display()
    {
        cout << "hlw im inside base class";
    }
};
class Derived : public Base
{
public:
    display()
    {
        // cout << "hlw im inside derived class";
        Base::display();
    }
};
int main()
{
    Base b;
    b.display();

    return 0;
}
