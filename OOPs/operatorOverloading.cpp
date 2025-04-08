#include <bits/stdc++.h>
using namespace std;
class ComplexNumber
{
private:
    int real;
    int imaginary;

public:
    ComplexNumber(int r, int i)
    {
        this->real = r;
        this->imaginary = i;
    }

    void display()
    {
        cout << " The complex numeber is : " << real << " + " << imaginary << "i";
    }
    ComplexNumber operator+(ComplexNumber &a)
    {
        ComplexNumber c(0, 0);
        c.real = this->real + a.real;
        c.imaginary = this->imaginary + a.imaginary;
        return c;
    }
};
int main()
{
    ComplexNumber c1(4, 5);
    ComplexNumber c2(3, 9);
    ComplexNumber c3(0, 0);
    c3 = c1 + c2;

    c3.display();
    return 0;
}