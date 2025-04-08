#include <iostream>
using namespace std;
main()
{
    string name = "12345";
    string reversed;
    for (int i = 0, j = name.length() - 1; i < name.length(); i++, j--)
    {
        reversed[j]=name[i];
    
    }
    // cout<<reversed.length();
    // cout<<name.length();
    for(int k=0;k<=name.length();k++){
        cout<<reversed[k];
    }
}