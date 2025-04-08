#include <bits/stdc++.h>
using namespace std;


// functoion to remove the punctuation 
string removePunctuation(string data){
    string ans;
    for(int it=0;it<data.size(); it++){
        if(isalpha(data[it])){
            ans += data[it];
        }
    }
    return ans;
}
int main()
{
    string result = removePunctuation("an34iket@");
    cout<<result;
    return 0;
}