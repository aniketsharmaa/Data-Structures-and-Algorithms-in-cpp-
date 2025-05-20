#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    virtual void eat()
    {
        cout << "I EAT GENERIC FOOD " << endl;
    }
};
class Dog : public Animal
{
public:
    void eat()
    {
        cout << "I EAT DOG FOOD " << endl;
    }
};

int main()
{
    Animal *ptr;
    Dog d;
    ptr = &d;

    ptr->eat();
    return 0;
}