# Memory layout of a program , Deep and shallow copy (IMPORTANT), Global and Local Variables, Static Keyword, Friend Keyword (Important), Inline Functions , Friend Keyword, Constructor (Private)
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

initial condition -> each object have their unique X and Y
![initial](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1813).png)
final condition, X and Y are same for both the objects
![final](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1815).png)

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
#include <bits/stdc++.h>
using namespace std;

// class abc{
//     public:
//     int x ,y;
//     void print()const
//     {
//         cout<<x<<" "<<y<<endl;
//     }
// };


// EXCUTION OF STATIC KEYWORD
class abc{
    public:
    static int x ,y; //static function main access krne ke liye ye bhi static hone chahiye
    static void print()
    {
        cout<<x<<" "<<y<<endl; // we can only access static members in static functions
    }
};

// intialisation
int abc::x; //definiting that x and y are related to all the instances made via this class
int abc::y;
int main () {
//     abc obj1;
//     obj1.x=1;
//     obj1.y=2;
//     abc obj2;
//     obj2.x=4;
//     obj2.y=5;
//     obj1.print();
//     obj2.print();



// execution of STATIC KEYWORD



    abc obj1;
    obj1.x=1; // alteratively -> abc::x=1;
    obj1.y=2; // abc::y=1;
    abc::print();
    abc obj2;
    obj2.x=4; // x and y will be changed for all the instances
    obj2.y=5;
    abc::print();
    cout<<endl;
    obj1.print(); // alternatively should be written as abc::print();
    return 0;
}
```


## Inline Functions

![url](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1818).png)

- inline function -> compiler will copy the code of the function in the place where it is called
- it is used to reduce the overhead of function call in the stack memory

what is overhead?
- overhead is the extra time and space required to call a function in the stack memory everytime it is called
- when we call a function in the main function a new memory is allocated to that function(segment tree will be formed in static memory) and it's parameter in the stack, and then the function is excuted then the memory is freed from the resource 
- so this is called as function calling overhead and to avoid this we use inline functions
- agr millons of time koi function call hoga and then vo again and again call hoga and baar baar segment tree form krane se achha usko main function main hi daldo, but then apko baar baar pura function likhna pdega , so to overcome these issues we use inline function
- function call hone ki jagah, function ka code copy krke waha paste krdo jaha call krna hai

### Cons of inline functions

-> increases the size of executable file
->check screenshot
-> can be used for short functions only


WHEN TO USE
-> code kaafi chota h

compilers are smart enough to remove inline if the code is too big


COMPARISON WITH MACROS AND PRE-PROCESSOR DIRECTIVES

isme toh certain level of optmisation is possible maybe sizr bde ya na bde but define main bdhna hi h vo expand hoga hi hoga

```cpp

#include <bits\stdc++.h>
using namespace std;
inline void numbershow(int num){
    cout<<num<<endl;
}
int main(){

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

    // this is how the compiler will perfom the task
    
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
    
    return 0;
}
```

## Friend keyword

![url](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1823).png)



mainly used in hertiance when the child class is inherited in the protected scope and you also want to access the public members of the parent class in the child class  
- check the inheritance table for more clarity



### Keyword


agr aap friend ho toh ek dusre ki private cheeze and gossip share kr skte ho

- example of friend class -> #1
- example of friend function -> #2



cons

- to be avoided in real world because it makes the maintainablity of the code harder


``` cpp
#include <bits/stdc++.h>
using namespace std;

class A {
private:
    int x;

public:
    A(int _val) : x(_val) {}

    // getter and setter for x 
    int getX()const {
        return x;
    }

    void setX(int value) {
        this->x = value;
    }
    friend class B; // B mera friend h -> example of friend class #1
    friend void print( const A&a); // #2
};

class B {
public:
    void print(const A &a) {
        // cout << a.getX() << endl; // error aaega because getx is not constant -> make it constant 
        cout<<a.x<<endl; // i cannot directly access because it's a private member but i want that it should be accessible to class b not the whole world but class b so we will use the concept of friend keyword
        // agr aap friend ho toh ek dusre ki private cheeze and gossip share kr skte ho
    }
};

void print( const A&a){
    cout<<a.x<<endl; //#2
}

int main() {
    A a(5); // object creation using the constructor
    B b;
    b.print(a);
    print(a);

    return 0;
}
```

![url](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1825).png)


## Constructor (Private)
yes we can make a constructor private, but why would we do that?
- we can make a constructor private so that no one can create an object of that class except the class itself and it's friend class
- used in singleton design pattern (study it later)
- google constructor c++ microsoft article

## virtual keyword

![url](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1832).png)
- virtual table -> vtable is created when we use virtual keyword corresponding to the class having atleast one virtual function, it is created after the constructor is called

![url](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1833).png)

- virtual function -> function jo derived class main override ho skti h
- vptr -> virtual pointer -> pointer to the virtual table, it points to the virtual table of the current class

![url](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1834).png)

![url](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1835).png)
![url](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1836).png)
![url](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1837).png)

as a good practice, destructor of base or parent class should always be made virtual


## IMPORTANT

classes acts like a datatyp
-> if you want to simultaneously define an object and initalise it you need to create a constructor, you can't do it using default constructor



-> stack ke andr runtime ke time call kiye gaye functions ki value hoti h


-> copy constructor -> by reference paas krna pdega vrna baar baar call hoke loop ba jaega inifinite
const keyword
memory layout


IMPORTANT 

dymamic allocation of array wala

