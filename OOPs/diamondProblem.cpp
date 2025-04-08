#include <iostream>
using namespace std;
class Vechicle
{
    public:
    void display()
    {
        cout << "display() is called " << endl;
    }
};
class Truck :virtual public Vechicle
{
};
class Car : virtual public Vechicle
{
};
class PickupTruck : public Truck, public Car
{
};

int main()
{
    PickupTruck pt;
    pt.display();
    return 0;
}


// if you remove the virtual keyword the is will thow an error that says "ambiguity error" 