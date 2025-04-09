#include <bits/stdc++.h>
using namespace std;
class ComplexNumber
{
private:
    int real;
    float imaginary;

public:
    // default const
    ComplexNumber(){
        real=0;
        imaginary=0;
    };
    // Parameterized const
    ComplexNumber(int r, float i)
    {
        real = r;
        imaginary = i;
    }
    void display()
    {
        cout << real << " + i" << imaginary << endl;
    }

    int getReal()
    {
        return real;
    }
    float getImaginary()
    {
        return imaginary;
    }
};
ComplexNumber addNumber(ComplexNumber c1, ComplexNumber c2)
{
    int r;
    float i;
    r = c1.getReal() + c2.getReal();
    i = c1.getImaginary() + c2.getImaginary();
    ComplexNumber temp(r, i);
    return temp;
}
int main()
{

    ComplexNumber c1(2, 3);
    c1.display();
    ComplexNumber c2(4, 5);
    c2.display();
    ComplexNumber c3;
    c3 = addNumber(c1,c2);
    cout<<"Addition of both the number: "<<endl;
    c3.display();

    return 0;
}
