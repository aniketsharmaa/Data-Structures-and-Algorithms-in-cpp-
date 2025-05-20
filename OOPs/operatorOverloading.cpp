#include <bits/stdc++.h>
using namespace std;
class ComplexNumber
{
private:
    int real;
    int imaginary;

public:
    ComplexNumber()
    {
        real = 0;
        imaginary = 0;
    }
    ComplexNumber(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    ComplexNumber operator+(ComplexNumber c)
    {
        ComplexNumber c2;
        c2.real = c.real + this->real;
        c2.imaginary = c.imaginary + this->imaginary;
        return c2;
    }

    ComplexNumber operator-(ComplexNumber c)
    {
        ComplexNumber temp;
        temp.real = real - c.real;
        temp.imaginary = imaginary - c.imaginary;
        return temp;
    }
    void display()
    {
        cout << real << " + i " << imaginary;
    }
};

int main()
{
    ComplexNumber c1(4, 15);
    ComplexNumber c2(3, 9);
    ComplexNumber c3(0, 0);
    // c3 = c1 + c2;
    c3 = c1 - c2;

    c3.display();
    return 0;
}