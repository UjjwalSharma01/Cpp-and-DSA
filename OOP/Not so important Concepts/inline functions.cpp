// NOT SO IMPORTANT 

/* CONCEPTS

function calling overhead

when we call a function in the main function a new memory is allocated to that function(segment tree will be formed (in static memory) -> check the screenshot) and it's parameter in the stack, and then the function is excuted then the memory is freed from the resource 

so this is called as function calling overhead and to avoid this we use inline functions

agr millons of time koi function call hoga and then vo again and again call hoga and baar baar segment tree form krane se achha usko main function main hi daldo, but then apko baar baar pura function likhna pdega , so to overcome thes  issues we use inline function




CONS

-> increases the size of executable file
->check screenshot
-> can be used for short functions only


WHEN TO USE
-> code kaafi chota h

compilers are smart enough to remove inline if the code is too big


COMPARISON WITH MACROS AND PRE-PROCESSOR DIRECTIVES

isme toh certain level of optmisation is possible maybe sizr bde ya na bde but define main bdhna hi h vo expand hoga hi hoga
*/

#include <bits\stdc++.h>
using namespace std;
inline void numbershow(int num){
    cout<<num<<endl;
}
int main(){


    // inline function will perfom this task it will replace the function with the excution itself
    cout<<10<<endl;
    cout<<10<<endl;
    cout<<10<<endl;
    cout<<10<<endl;
    cout<<10<<endl;
    cout<<10<<endl;
    cout<<10<<endl;
    cout<<10<<endl;
    cout<<10<<endl;
    cout<<10<<endl;
    cout<<10<<endl;


    // inline function calls
    numbershow (10);
    numbershow (10);
    numbershow (10);

    numbershow (10);
    numbershow (10);
    numbershow (10);
    numbershow (10);
    numbershow (10);
    numbershow (10);
    numbershow (10);

    numbershow (10);
    numbershow (10);
    numbershow (10);
    numbershow (10);
    numbershow (10);
    numbershow (10);
    numbershow (10);
    numbershow (10);
    
    return 0;
}