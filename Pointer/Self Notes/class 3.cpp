/* concepts

PASS BY REFERENCE MEANS- > SAME MEMORY DIFFERENT NAMES

pointer to a pointer -> double pointer
int a=8;
int* ptr = &a;
int** ptr2 = &ptr;  --> double pointer / pointer to a pointer

*************************************************************************************************

REPLACEMENT OF POINTER

REFERENCE VARIABLE -> when we have option we use reference variable
-> suppose a person is having an official name and the nickname -> ab kisi bhi nam se bulao you are pointing to the same person -> this is the concept of reference variable


-> same memory location ko different nam se bula skte h -> the same thing was using pointer -> koi ek "a" variable ko ptr se bhi bula skte h

symbol table main ek aur memory location create hogayi and ab ek aur varable / name same memory block ko point kr rha h

SYNTAX
int& b =a;

SAME MEMORY LOCATION DIFFERENT NAMES


why to use?

-> kisi bhi reference variable ko null pe set nahi kr skte but pointer ko kr skte h -> saftey jaada h
-> pointer are difficult to understand whereas readability of code and easy to access
-> generally used to implement pass by reference concept





*/


#include <bits\stdc++.h>
using namespace std;


// REFERENCE VARIABLE -> syntax of pass by reference usng this function
void func(int* u){
    u++;
    cout<<"INSIDE THE FUNCTION"<<endl;
   

}

void solve(int& p){
    p=p+1;
    cout<<"INSIDE THE FUNCTION"<<endl;
    cout<<"updated things "<<p<<endl;

}
int main() {
    int a=8;
    int* ptr = &a;
    int** ptr2 = &ptr; 
    int*** ptr3 = &ptr2;

    // DE - REFERENCING OF MULTI-LEVEL POINTER
    // printinh value of a using ptr2
    cout<<"the value of a is: "<<**ptr2<<endl;
    //printing value of a using ptr2
    cout<<" the value of a using ptr3 is: "<<***ptr3<<endl;

    // printing value stored in prtr using ptr3

    cout<<"the value store in the ptr is" << **ptr3<<endl;


    // PASS BY VALUE AND PASS BY REFERENCE
     int b =9;
     int* p = &b;

     cout<<"before function"<<endl;
     cout<<*p<<endl;
     cout<<p<<endl;
     cout<<b<<endl;

     func(p);
     cout<<"after function"<<endl;
     cout<<*p<<endl;
     cout<<p<<endl;
     cout<<b<<endl;
    
    // the value won't change because it is passed by value and not the reference 
    // using " *p=*p+1; " will change the actual value
    
    // REFERENCE VARIABLE
    int u=99;
    cout<<u<<endl;
    solve(u);
    int& j =u; // reference variable syntax (REVISE AND REVISE)
    cout<<j<<endl;



//  PASSING POINTER BY REFERENCE 

/*

FUNCTION MAIN 
-> void function (int*& p){ -> ese paas krege 
    function
}
-> screenshot

*/

    return 0;
}


/* homework 

-> return by reference
-> output of the following code -> VERY VERY IMPORTANT QUESTION -> INTERVIEW MAIN AA SKTA H

int* solve() {
    int a=5;
    int* ans = &a;
    return ans;
}
*/

