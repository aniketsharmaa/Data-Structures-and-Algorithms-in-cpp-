#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(vector<int> nums)
{
    set<int> s;
    vector<int> temp;

    for(auto it: nums){
        s.insert(it);
    }
    for(auto it: s){
        temp.push_back(it);
    }
    return temp;
}


int main()
{
    vector<int> sortedArray = {1, 2, 3, 3, 3, 4, 4, 5, 6, 7, 7};
    vector<int> res = removeDuplicates(sortedArray);
    for(auto it: res){
        cout<<it<<" ";
    }

    return 0;
}