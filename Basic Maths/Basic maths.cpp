/*          

Concepts

we are learning this so that we can give a optimal solution to the problems

PRIME NUMBER 
1. Naive approach - > n =10 -> so jitne bhu numbers one se leke uske beech tak main can divide it completely

PRIME NUMBERS SHOULD HAVE ATLEAST 2 FACTORS

2. SQRT approach -> 




*/

#include <bits/stdc++.h>
using namespace std;
int main () {
    // naive approach prime number
    int n;
    int k;
    cout<<"enter the number to check for prime number"<<endl;
    cin>>n;
    for(int i=2;i<n;i++){
       
        k=n%i;
        if(k==0){
            break;
        }
    }
    if(k==0){
        cout<<"Not a prime number"<<endl;
    }
    else{
        cout<<"Prime number"<<endl;
    }



    return 0;
}
