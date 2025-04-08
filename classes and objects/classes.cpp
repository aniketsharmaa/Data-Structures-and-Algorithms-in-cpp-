
#include <iostream>
#include <string>

using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;
};

main()
{
    student arr[2];
    for(int i=0;i<2;i++) {
        cin>> arr[i].name;
        cin>> arr[i].age;
        cin>> arr[i].gender;
    }
   cout<<arr[1].name;

} 

