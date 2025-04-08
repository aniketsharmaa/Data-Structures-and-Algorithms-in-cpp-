#include <iostream>
using namespace std;
struct person{
    string name;
    int age;
    int salary;
};
main() {
    person p1;

    p1.name="Aniket";
    p1.age=22;
    p1.salary =20000;

    cout<<p1.name <<endl;
    cout<<p1.age <<endl;
    cout<<p1.salary;

}