#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {2,3,5,1,5,63,2,34};
    auto iter = find(v.begin(),v.end(),63);
    cout<< *iter;
    return 0;
}