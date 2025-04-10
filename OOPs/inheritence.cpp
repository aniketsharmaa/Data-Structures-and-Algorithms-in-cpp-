#include <bits/stdc++.h>
using namespace std;
class Shape
{
protected:
    int lenght;
    int width;

public:
    void display()
    {
        cout << "length and width of the shape is : " << lenght << " , " << width;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(int l,int b){
        lenght = l;
        width = b;
    }
    void getArea()
    {
        cout << "Area of the rectancle is : " << lenght * width << endl;
    }

};
int main()
{
    Rectangle r1(35,2);
    r1.getArea();
    
    return 0;
}