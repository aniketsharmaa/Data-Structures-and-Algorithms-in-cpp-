// friend function is the special function that are declared outside the class but still have access to all the data members of the class, this function is initialize with the help of friend keyword .

#include <iostream>
using namespace std;
class aniket
{
private:
    int data=4;

public:
    aniket(int n)
    {
        data = n;
    }
    friend void printData(aniket &a);
};

void printData(aniket &a){
    cout<<a.data;
}
int main()
{
    aniket ani(3);
    printData(ani);
    return 0;
}
