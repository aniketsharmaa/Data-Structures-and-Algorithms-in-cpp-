#include <bits/stdc++.h>
using namespace std;

string encode(vector<string> v)
{

    string final;
    for (auto it : v)
    {
        int length = it.length();
        final += to_string(length) + "#" + it;
    }
    return final;
}

// Decodes a single string to a list of strings.
vector<string> decode(string s)
{
    vector<string> vtr;
    int ptr = 0;
    while (ptr < s.size())
    {
        int pos = s.find("@", ptr);
        int len = stoi(s.substr(ptr, pos - ptr + 1));
        vtr.push_back(s.substr(pos + 1, len));
        ptr = pos + len + 1;
    }
    for(auto) 
    return vtr;
}

int main()
{
    vector<string> t1 = {"neet", "code"};
    vector<string> t2 = {"neet", "c4ode"};
    vector<string> t3 = {"neet", "c#ode"};

    string encoded = encode(t1);
    decode(encoded);

}