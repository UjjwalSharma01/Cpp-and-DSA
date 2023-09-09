# Memory layout of a program , Deep and shallow copy (IMPORTANT), Global and Local Variables, Static Keyword
## Memory layout of a program (Not so important)
![Memory layout of a program](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1806).png)

- ASM - > assembly machine language, init -> intialised
- Initalised data -> Exp - int a = 10;
- heap -> dynamic memory allocation
- stack -> function call, local variables

## Deep and shallow copy
Shallow copy - Copying the outermost object, not the inner objects.
Deep copy - Copying the outermost object as well as the inner objects.

Shallow copy image
![Shallow copy image](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1807).png)
Deep copy image
![Deep copy image](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1808).png)

code
```cpp

#include<iostream>
using namespace std;
class abc{
    public:
    int x;
    int *y;
    abc(int x,int y):x(x),y(new int(y)){}
    // default copy constructor -> Does shallow copy
    // abc(const abc &obj){
    //     x=obj.x;
    //     y= obj.y;
    // }

    // deep copy constructor
    abc(const abc &obj){
        x=obj.x;
        y= new int(*obj.y); // allocating new memory
    }

    void print(){
        cout<<x<<" "<<*y<<"The pointer of y is"<<y<<endl;
    }
};
int main (){
    abc a(10,20);
    a.print();
    abc b=a;
    b.print();
    return 0;
}
```

- __shallow copy__ -> copy the value of the pointer (i.e the value it is pointing to ), not the value of the pointer is pointing 
- __deep copy__ -> copy the value of the pointer and the new pointer will point to a new address

### IMPORTANT FROM INTERVIEW PERSPECTIVE
if we use default constructor/ shallow copy constructor output would be  
    
10 20The pointer of y is0x559e328dbeb0  
10 20The pointer of y is0x559e328dbeb0  
now y is pointing to the same address in both the cases, so if we change the value of y in one case, it will change in the other case as well  

if we free the memory in one case, it will free the memory in the other case as well and it will give an error  
![concept](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1809).png)



## Global and Local Variables
![Global and Local Variables](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1809).png)
__global variables__ -  
- written outside a function
- accessible to all function -> same copy


__Local Variables__

- written inside a function
- accessible inside that function scope only
- scoped
```cpp
#include <bits/stdc++.h>
using namespace std;

int x=2; //global variable
void func(){
    int x=60;
    cout<<x<<endl;
    cout<<::x<<endl; // accesing global variable with ::(scope resolution operator)
}
int main(){
    x=4; //global x
    int x =20; //local to main function -> this will be printed -> most local variable ko same preference milti h

    cout<<x<<endl;

    cout<<::x<<endl; // accesing global variable with ::

    {
        int x =50;
        cout<<x<<endl; // most local is 50
        // you cannot access 20 wala x here but global one can be accessed

        cout <<"again accessing global x "<<::x<<endl;
    }
    func();
    return 0;
}

```
## Static Keyword

in short agr kisi member ya function ko sabhi objects ke liye same rkhna ho  
static function main static members hi pass hoge because it doesn't contain "this->" pointer




static keyword in classes

classes-  bunndle of custom data membersc-> instances of class -> objects  
there is a __this->__ pointer pointing to the individual object within the class  


### Static Data Members
that variable is going to share memory with all of the class instances
- ek members sabke saath share hoga
- summary -> sabke apne apne members nahi hoge object classs ka hoga which will be same for all the objects

### Static Member Functions
there no instance of that class being passed into that method

in the simple execution of classes and objects in the below execution code we have seen that x and y of both objects are different/unique for each other,
but now we will create X and Y which will be shared between two objects
- method puri class ka hoga kisi particulat object ka nahi
- method ke andr this-> pointer exist hi nahi krta
- summary -> this pointer doesn't exist in this and it's common for all the objects of that class -> it cannot differentiate between x and y of other objects so you can't access them
```cpp

```
