#include <iostream>
using namespace std;
class Rectangle
{
public:
    int l;
    int b;

    Rectangle()
    { // default constructor - doest take any arg
        l = 0;
        b = 0;
    }
    Rectangle(int x, int y)
    { // parameterised constructor - take some arg
        l = x;
        b = y;
    }
    Rectangle(Rectangle &r)
    { // copy constructor -take some object

        l = r.l;
        b = r.b;
    }
    ~Rectangle()
    {
        cout << "Destructor chal gya" << endl;
    }
};
int main()
{
    Rectangle *r1 = new Rectangle();

    return 0;
}