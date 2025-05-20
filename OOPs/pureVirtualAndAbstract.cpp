#include <iostream>
using namespace std;
// this is abstract class because it has a pure virtual funtion;
class Base
{
public:
    virtual void display() = 0;
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "im inside deriverd class" << endl;
    }
};
int main()
{
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr->display();
    return 0;
}