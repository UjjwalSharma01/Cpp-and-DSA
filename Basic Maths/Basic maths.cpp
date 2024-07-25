/*

Concepts

we are learning this so that we can give a optimal solution to the problems

PRIME NUMBER
1. Naive approach - > n =10 -> so jitne bhu numbers one se leke uske beech tak main can divide it completely

PRIME NUMBERS SHOULD HAVE ATLEAST 2 FACTORS

Basic concepts
1. Extraction of numbers -> modulo 10, which means that the number will get divided by 10 and whatever will be the remainder we will get that
if you are divdiing something by 10 or any digit that's when logarithmic time complexity comes into picture

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
// how to run cpp code in zedd
