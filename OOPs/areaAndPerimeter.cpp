#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    int perimeter()
    {
        return 2 * (length + breadth);
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    Rectangle *ptr = new Rectangle();
    ptr->length =10;
    ptr->breadth = 20;

    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter();
    return 0;
}