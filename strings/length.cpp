
#include <iostream>

using namespace std;

void reverse(string name){
    int i =0;
    int j = name.size()-1;
    while(i<=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
    cout<<name;
}

int main()
{
    string name;
    cout<<"Enter a name to reverse: ";
    cin>>name;
    reverse(name);
}
