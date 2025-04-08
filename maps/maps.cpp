#include <bits//stdc++.h>
using namespace std;

main()
{
    map<string,int> m1;
    m1["this"]=12;
    m1["thfis"]=99;
    m1["hhss"]=12;

    map<string,int> ::iterator it=m1.begin();
    while(it!=m1.end()){
        cout<<(*it).first<<endl;
        it++;

    }
}