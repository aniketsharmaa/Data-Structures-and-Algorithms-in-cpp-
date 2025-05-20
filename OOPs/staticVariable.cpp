#include <bits/stdc++.h>
using namespace std;
class Base{
    public :
    static int count;
    // default constructor 
    Base(){
        count++;
    }
    static int getCount(){
        return count;
    }
};
int Base::count =0;
int main(){

    cout<<"Initial count value: "<<Base::getCount()<<endl;
    Base b1;
    Base b2;
    cout<<"Count value after creating object : "<<Base::getCount();
    
    return 0;
}