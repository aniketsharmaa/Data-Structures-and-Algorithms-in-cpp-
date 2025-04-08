#include <iostream>
using namespace std;
    char toLower(char ch){
        if (ch >= 'a' && ch <= 'z')
        {
            return ch;
        }
        else{
            char temp;
            temp = ch - 'A' + 'a';
            return temp;
        }
        
    }
main(){




    cout<<toLower('A')<<endl;
    cout<<toLower('a')<<endl;
    cout<<toLower('Z')<<endl;
}