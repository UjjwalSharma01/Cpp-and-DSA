# Concepts 

any location in the memory can be identified by it's address 
**example 1**
```cpp
int a = 5;
```
using this code an address will be assigned to the operator __a__ in the memory location where the value 5 is stored

## Where the information about address and variable is stored?

There is a Data structure known as symbol table which contains variable mapped with the corresponsing memory address

- the location is automatically assigned to the variable accordingly -> the memory management is done by OS

__example 2__
```cpp
int x =12;
```
symbol table main __x__ ki entry bnegi jisme value store hogi __12__, and __uske corresponding ek address assign hoga__


## Fetching the address of a variable

```cpp
using address of operator -> "&"
```

we cannot define ki exact kis location pe daalna h, memory management ka kaam OS ka hame ye chinta nahi krni


## What is a pointers?

my learning till now -> a pointer is a type of variable which stores the address of other variables

```cpp
int* ptr = &a; // a pointer is declared which will store the address the value of address of "A"
```

ptr is a pointer to integer data

## How to access the value of a pointer?

```cpp
char* p //p is a pointer to char data
```

__"&" -> address of opertor__
__"*" -> deference operator__


## Size of a pointer

-> pointer ka data sizr same rehta h independent of integer ka h ya char ka h, kitne bytes lega that's system dependent

-> what is 64 bit system -> pointer ka ans 8 hi kyu aaya -> because 64 bit system me 8 bytes ka address hota h

## Why we need pointers?

FOR
- dynamic memory allocation
- to access hardware
- memory managment
- memory allocation


## Copying a pointer

```cpp

a=5;

int* ptr = &a;
int* dusraptr = ptr;

cout<<*dusraptr<<endl;
```

### Full code 

```cpp

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
```
---
## CLASS 2
## Arrays and pointers

__the name of array itself defines the base code__

```cpp
int arr[5] = {1,2,3,4,5};
```

### How its working in symbol table 

arr is mapped with -> some address and uska khudka alag address alag nahi h, __kuch bhi lgalo ye dega base address hi__

``` *arr ``` will show the value of the first memember of the array
```cpp
    int arr[4] = {22,33,11136,13428};

    // REMEMBER -> sab ek hi cheez return krege -> base address
    cout<<arr[0]<<endl;
    cout<<arr<<endl; // gives base address
    cout<<&arr[0]<<endl; // gives base address
    cout<<&arr<<endl; // gives base address
```
### Different operations on the array (Interview/OA point of view)
```cpp
 // playing with pointers of the 
    cout<<*arr<<endl; // will print 22
    cout<<*arr +1<<endl; // will print 23
    cout<<*(arr +1)<<endl; // will print the second member of the array
    cout<<arr[1]<<endl; // it is resolved as the same the above statement and both statements will give the same value 
    // this basically means is go to base address and move forward by one int since it's a integer type array
    // NEW WAY OF WRITING / DIFFERENT WAY OF WRITING THINGS
    cout<<1[arr]<<endl; // it's working and important 
    cout<<*(1+arr)<<endl;
```
### Difference between array and pointer

```cpp
    int arr[4] = {22,33,11136,13428};
    int* ptr = arr;

    cout<<arr<<endl; // gives base address
    cout<<ptr<<endl; // gives base address
```

1.  Read very carefully

- SIZE  -> size of array (size of one element * number of element) -> size of pointer -> constant = 8 (system architecture / compiler dependent)
- array -> name -> sizeof() -> total space taken by array
- pointer -> sizeof() -> constant -> architecture dependent


2.
- array = arr+1 -> not possible -> we can't change value in symbol table -> you can perfrom artrithmetic operations(ex -> p =arr+1;) but cannot change it -> it's a constant Pointer value (FINAL)
- pointer = pointer +1 -> possible -> pointer will shift and will point towards the next memory location -> shift will happen according to the datatypw

__CHAR -> enclosed in ''  quotes -> string enclosed in "" quotes__

- impelementation of "cout" is different for int type and char type array -> jabtak null character nahi milta , print krte rho
- int type ```cout<<arr<<endl;```-> gives the base address
- char type ```cout<<ch<<endl;``` -> gives the entire string

```cpp
    char name[13] = "ujjwalsharma"; //-> will print the entire name
    cout<<name<<endl;
/* STEPS
 
 -> Temp storage -> "ujjwalsharma"
 -> memory change -> copy to name array ki storage (permanent storage)
 */
    char* c = "ujjwalsharma"; // -> this will also print the entire name -> BAD PRACTICE
    cout<<c<<endl;
/* STEPS
 
 -> Temp storage -> "ujjwalsharma"
 -> memory change -> c pointer points to the first practice
 */
```


ek memory location ko multiple name de skte h, it's possible

## Class 3
### pointer to a pointer -> double pointer
pointer variable which stores the value of another pointer variable

```cpp
int a=8;
int* ptr = &a;
int** ptr2 = &ptr;  //--> double pointer / pointer to a pointer
```
### Pass by Reference
MEANS-> SAME MEMORY DIFFERENT NAMES -> REFERENCE VARIABLE


it's a __REPLACEMENT OF POINTER__

__REFERENCE VARIABLE__ -> when we have option we use reference variable
- suppose a person is having an official name and the nickname -> ab kisi bhi nam se bulao you are pointing to the same person -> this is the concept of reference variable
- same memory location ko different nam se bula skte h -> the same thing was using pointer -> koi ek "a" variable ko ptr se bhi bula skte h

symbol table main ek aur memory location create hogayi and ab ek aur varable / name same memory block ko point kr rha h

SYNTAX
```cpp
int& b =a;
```

__SAME MEMORY LOCATION DIFFERENT NAMES__


### why to use?

- kisi bhi reference variable ko null pe set nahi kr skte but pointer ko kr skte h -> saftey jaada h
- pointer are difficult to understand whereas readability of code and easy to access
- generally used to implement pass by reference concept



