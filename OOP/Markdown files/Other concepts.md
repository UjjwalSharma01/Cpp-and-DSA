# Const Keyword, Macros

## Const keyword
![Const](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1802).png)

it's just like a promise, that you won't change the value but as in you do in realife, you can also break this promise

- value declared using "const" keyword cannot be changed 
- example - cont int x=10; now you cannot reassign the value of x again, throughout the code

### this is done to
- simplify the code 
- agr "const" se koi variabke declare kia h toh when you use this variable, compiler will do some optimisation and  will load it in "READ_ONLY MEMORY" which will make the code even more smoother -> access fast hoga

### concept of V value and R value
- l value -> variable having memory location. ex -> int x; char y; etc
- R vlue -> varables which doesn't have memory location ex-> 5; , int& a = b ;(here a is the reference variable to b uski memory main koi location nahi h) etc

### How to modify the value of a const variable
- using const_cast<>() function
- using pointers

using pointer - code (Doesn't work in new compilers)
```cpp
#include <iostream>
using namespace std;
int main () {
    const int x = 10;
    int *ptr = &x;
    *ptr = 20;
    cout << x << endl;
    cout << *ptr << endl;

    return 0;
}
```
using const_cast<>() function - code
```cpp
#include <iostream>
using namespace std;
int main () {
    const int x = 10;
    int *ptr = const_cast<int *>(&x);
    *ptr = 20;
    cout << x << endl;
    cout << *ptr << endl;

    return 0;
}
```
### const with Pointers
concept of memory leak
```cpp
#include <bits/stdc++.h>
using namespace std;
int main (){
  int* a = new int;
  *a = 5;
  cout << *a << endl;
  int b = 10;
  a = &b;
  cout << *a << endl;
  return 0;
}
```
- here, we have created a pointer a, and allocated a memory of size int to it, and assigned it a value of 5 and printed it
- then we have created a variable b and assigned it a value of 10
- then we have assigned the address of b to a, and printed it
- now, the memory allocated to a is not freed, and it is still pointing to the memory location of 5, which is a memory leak


here a is completely dissappeared and it's just b now , and the memory is being wasted, we should have deleted the a before moving on to b to avoid memory leak


it should be
```cpp
#include <bits/stdc++.h>
using namespace std;
int main (){
  int* a = new int;
  *a = 5;
  cout << *a << endl;
    delete a;
  int b = 10;
  a = &b;
  cout << *a << endl;
  return 0;
}

### CONST data, NON-CONST pointer
```cpp
#include <iostream>
using namespace std;
int main() {
    const int* a = new int(2); //initialisation with 2
    // int const *a = new int(2); //initialisation with 2 (both statements are same)
    cout << *a << endl;
    int b =10
    a = &b; // pointer is non-const so it can be re-initialised
    cout << *a << endl;
    return 0;
}
```
- here the int is a data ehich is constant but the pointer a which is pointing towards the data can be re-intialised to any other pointer
- if i write const before " * " then the content will be constant
- learn it in this way that the meaning of " * " this is value at this particular pointer so agr " * " se pehle const lga dia toh pointer ki value constant hojaege , whereas uske baad lgaya toh pointer constant hoga

### Const pointer, NON-CONST data
```cpp
#include <iostream>
using namespace std;
int main () {
// CONST pointer NON-CONST DATA

    cout<<"under the CONST pointer NON-CONST DATA concept"<<endl;
    int *const c = new int(2); // pounter is constant but the value can be 
    cout<<*c<<endl;
    *c =120; // value changed
    cout<<*c<<endl;

    // pointer change is not possible

    return 0;
}
```
---
### Use of const in classes

if you declared any function or the method as __const__ -> this method can't ever change  any of the member variable  
- isko un method main use krege jaha ham member variable change nahi krna chahte
- can be used with any function

```cpp
#include <bits/stdc++.h>
class abc {
    int x;
    int *y;
    public:
    void setx(int a) {
        x = a;
    }
    int getx() const { // syntax -> return_type function_name() const
        return x;
    }
    int gety(){
        return y;
    }
    void sety(int y){
        this->y = a;
}
};
int main() {
    abc a;
    a.getx();
    a.gety();

    return 0;
}
```


### Default Arguments
the arguments which are pre-define, in the function, apko explicitly main function se paas nahi krne pdte

```cpp 
int arg(int a, int b, int z=23 ){ //z is the default argument always given in the rightmost position otherwise will give error agr z dobara define  krdia in the main function toh prefined value over-ride ho jaegi

}; 
```

agr const function ke andr koi aur function call kr rhe h toh vo function bhi __constant__ hona chahiye, jo function call bhi kroge vo esa function nahi hona chahiye jo value change kre

### Changing the value of CONST
const is like a real world promise and promises can be broken
- used in debugging
- variable ko mutable bnake

syntax

```cpp
#include <iostream>
using namespace std;
class abc{
    public:
    int mutable x;
    int y;
    int getx()const{ 
        x=10; // this will work because X is mutable
        return x;
    }

}
int main(){
    abc a;

    return 0;
}
```
after this you can change the value using mutable keyword as a good programmer, mutable keyword use nahi krna bas debugging ke time use krna h

### INTIALISATION LIST
a new method to make a constructor


### what's the advantage ?
agr hamne koi "Z" variable ko __constant__ declare kra and we want it to intialise with 0 -> vo normal ctor (constructor) main nahi ho skta because vo dobra reassign consider krta h us value ko and shows an error but intialization list main ho skta h

#### syntax
``` cpp
// constructor / ctor : old style to write
    abc(){
    x=0;
    y = new int(0);
    const int z;
    }


    // new way to write ctor  = intilization list 
    abc(int _x, int _y, int _z =0):x(_x),y(new int(_y)),z(_z){}
    // syntax -> constructor_name (arguments): member_variable_name(argument), member_variable_name(argument) {other code}

    // same as
    // abc(int _x, int _y, int _z =0){
    //     x = _x;
    //     y = new int(_y);
    //     z = _z; -> won't work because z is constant
    // }

```
## Macros
![sc](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1805).png)
syntax -> using ``` #define ```
macros are pre processor directives which allows you to define Constant functions or code snippets that can be used throughout your code
```cpp
#include <iostream>
using namespace std;

#define PI 3.142912923 // its not consuming any space as such
#define MAX(x,y) (x>y ? x:y) // if else operatore "?" ke baad wala varable is if true to ye krdo else ":" ye krdo

float circlearea(float r) {
    return PI * r * r;
}

int main() {
    cout << circlearea(65.4) << endl;
    return 0;
}


```

keywords used  
- pre-processor
- #define


### Understanding pre-processor 

compilation process  
pre processing -> compile -> machine code -> exe  

compilatiions se pehele, __pi__ ki value uthaega, __#define__ hatadega and pi ki value ko replace kr dega


### Use of Macros

- increase redability and reusability and make the coding easy
- defined mostly in capital letters

