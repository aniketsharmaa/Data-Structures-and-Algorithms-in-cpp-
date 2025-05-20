#include <bits/stdc++.h>
using namespace std;
class Weight
{
private:
    int kg;

public:
    Weight()
    {
        kg = 0;
    }
    Weight(int w)
    {
        kg = w;
    }
    void display()
    {
        cout << "The weight of the person is : " << kg<<endl;
    }
    operator ++(){
        ++kg;
    }
    operator ++(int ){
        kg++;
    }
};
int main()
{
   
    Weight w(3);
    w.display();
    ++w;
    w.display();
    w++;
    w.display();


    return 0;
}