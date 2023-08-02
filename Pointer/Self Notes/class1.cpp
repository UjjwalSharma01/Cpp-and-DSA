/*
*********************************************************CONCEPTS************************************************************************************************

any location in the memory can be identified by it's address 

int a = 5;
an address will be assigned to the operator a in the memory location where the value 5 is stored

There is a Data structure known as symbol table which contains variable mapped with the corresponsing memory address

-> the location is automatically designed -> the memory management is done by OS

-> example 2

int x =12;
symbol table main x ki entry bnegi jisme value store hogi 12, and uske corresponding ek address assign hoga


********************************************************************************************************************************************************************
FETCHING THE ADDRESS OPERATOR

using address of operator -> "&"

-> we cannot define ki exact kis location pe daalna h, memory management ka kaam OS ka hame ye chinta nahi krni

********************************************************************************************************************************************************************************

WHAT ARE POINTERS?

-> my learning till now -> a pointer is a type of variable which stores the address of other variables


int* ptr = &a; // a pointer is declared which will store the address the value of address of "A"

ptr is a pointer to integer data

char* p -> p is a pointer to char data

"&" -> address of opertor
"*" -> deference operator


*************************************************************************************************************************************************************************************
SIZE OF POINTER
-> pointer ka data sizr same rehta h independent of integer ka h ya char ka h, kitne bytes legs that's system dependent

-> what is 64 bit system -> pointer ka ans 8 hi kyu aaya


***********************************************************************************************************************************************************************************************

WHY DO WE NEED POINTER

-> dynamic memory allocation
-> to access hardware
-> memory managment
-> memory allocation


****************************************************************************************************************************************************************************************************

COPYING A POINTER

a=5;

int* ptr = &a;
int* dusraptr = ptr;

cout<<*dusraptr<<endl;

*/


#include <bits\stdc++.h>
using namespace std;
int main(){
    // int a =5;
    // cout<<&a<<endl; // address of operator is being used, so A ka address print hoga
    // int b =5; // alag se allocate hoga it won't be same as A because the value is 5 hr baar intialise krne be value alag aaeegi
    // cout<<&b<<endl;

    // int a =5;
    // int* p = &a; // -> p is a pointer to interger data
    // cout<<*p<<endl;


    // BAD PRACTICE -> will give segmentation error
    // int* ptr; // nahi pta h toh ese initilise hi mat kro
    // cout<<*ptr<<endl;


    // null pointer
    // int* ptr =0;

    // new version
    // int* ptr = nullptr;


    // POINTER ARITHMENTIC
    // int a =5;
    // int* ptr = &a;
    // cout<<ptr<<endl;

    // ptr = ptr+1; // will add 4 to the pointer address because it's a pointer to a integer and the space accupied by the integer is 4
    // cout<<ptr<<endl;

    // *ptr = *ptr+1; // will increase the original value by 1
    // cout<<*ptr<<endl;

// COPYING POINTER


int a=5;

int* ptr = &a;
int* dusraptr = ptr;

cout<<*dusraptr<<endl; // this will store the value of the address of the "A " which is store in ptr and then we de-reference the value stored in this we will get the actual value



    return 0;
}