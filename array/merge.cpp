#include <bits./stdc++.h>
#include <iostream>
using namespace std;

main()
{
    int arr1[]={2,3,6,7};
    int arr2[]={1,5,8,};

    // merging sorted arr 
    int newArr[]=0;

    int i=0;
    int j=0;
    int k=0;

    while(i > arr1.size() && j > arr2.size()){

        if(arr1[i]>arr2[j]){
            newArr[k]=arr1[i];
            i++;
            k++;
        }
        else{
            newArr[k]=arr2[j];
            j++;
            k++;
        }
        
    }
   for(int i=0;i<newArr.size();i++){
    cout<<newArr[i]<<endl;
   }


}