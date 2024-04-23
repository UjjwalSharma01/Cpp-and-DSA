#include <bits/stdc++.h>
using namespace std;
int main (){
    int arr [] = {1,2,3,1,1,1,1,1};
    int hash [4]= {0}; // initializing the values with 0 initially
    for(int i=0;i<8;i++){
        hash[arr[i]] = hash[arr[i]]+1;
    }
    cout<<hash[1]<<endl;
    return 0;
}