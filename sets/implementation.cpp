#include <bits/stdc++.h>

using namespace std;
int main()
{
    set<string> s;
    s.insert("c");
    s.insert("b");
    s.insert("a");
    s.insert("d");
    s.insert("a");
    auto whereIsA = s.find("a");
    if ((*whereIsA))
    {

        cout << (*whereIsA);
    }
    // for(auto it: s){
    //     cout<< it <<endl;
    // }
}