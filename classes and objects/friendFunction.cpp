#include <bits/stdc++.h>
using namespace std;
class Car
{
private:
    string carName;

public:
    Car()
    {
        carName = "No Name";
    }
    Car(string n)
    {
        carName = n;
    }
    friend void display(Car c);
};

void display(Car c)
{   
    c.carName = "Maruti";
    cout << "Car name is c: " << c.carName << endl;
}
int main()
{
    Car c1("alto");
    display(c1);
    return 0;
}