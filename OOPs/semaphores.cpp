#include <bits/stdc++.h>
using namespace std;
int main()
{

    // counting semaphones
    // int semaphore =1;
    // for(int i=1;i<20;i++){

    //     if(semaphore==0){

    //         cout<<i <<"\n";
    //         semaphore++;
    //     }
    //     else{
    //         semaphore--;
    //     }
    // }

    // binary semaphones
    int semaphore =true;
    for(int i=1;i<20;i++){

        if(semaphore==false){

            cout<<i <<"\n";
            semaphore= !semaphore;
        }
        else{
            semaphore= !semaphore;
    
        }
    }

    return 0;
}