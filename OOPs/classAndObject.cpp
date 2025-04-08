#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class car{
    public:
    string name;
    string model;

    int topSpeed(string name){
        return 220;
    }
    int milage(string name){
        return 39;
    }
    void details(string name ,string model){
        cout<<"The name of the car is : "<< this->name << " & the model is :" << this->model <<" and have the milage of: "<<milage(this->name)<<endl;
    }
};

int main(){

    cout<<"Class and Object"<<endl;

    car c1;
    c1.name = "Maruti";
    c1.model = "Brezza";

    c1.details(c1.name,c1.model);
    return 0;
}