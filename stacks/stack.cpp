#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    s.push(3);
    s.push(2);
    s.push(31);
    s.push(9);
    s.push(6);

    while(!s.empty()){
        cout<<s.top()<< '\n';
        s.pop();
    }

    return 0;
}