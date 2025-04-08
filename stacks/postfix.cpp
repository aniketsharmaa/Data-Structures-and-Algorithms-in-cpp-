#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 4, 6, 7, 9, 4}; // output =4
    int count = 0;
    int current;
    int smallest ;
    for (auto it : arr)

    {
        // current = it;
        if (current < smallest)
        {
            smallest = current;
            count++;
        }
        if (count == 3)
            cout<< smallest;
            return 0;
    }
    cout<<"answer is "; //

    return 0;
}