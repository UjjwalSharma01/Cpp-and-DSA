# Encapsulation, Inheritance and Polymorphism | Basic intro of 4 pillars of OOPs

_Note_- apart from code snippets for actual execution visit the code folder  


sabse jaada interview questions is concept se puche jaate h 4 pillars of OOPs  
all these things are interalted and all lies under abstraction (to be verified later)

4 PILLARS  OF OOPs
1. Encapsulation
2. inheritance 
3. polymorphism
4. Abstraction -> most tricky to use and all of these 4 pillars seems to be exactly same but don't get confused

## Encapsulation (data hiding)
### Defintion 
when you wrap your datamembers and member function in a bigger entity, or wrapping the data members and the data function inside a parent identity is called as encapsulation

1. Physical example - or in a more physical world you can say maine apne 500 and 2000 ke notes purse main dalke encapsule krdtiye
2. Practical example - you have cells of remote and tumne unhe remote main daldia -> encapsulation and then tumne uske upr ek cover lga dia -> data hiding


-> when we create class, it contains the data member (DM) and the data funtions (DF) and it is combining or warpping both the things so we can say that class is also an example of encapsulation  


**Perfect Encapsulation/full Encapsulation** - jab hamne saare data members ko private mark kia hota h  

what's the usage of this thing?  
- we have increased the security/privacy of your code and if i want i can set my class to read only
- the main use is that, you decide konsa data apko dikhana h konsa data apko nahi dikhana h (abstraction se alag nahi h koi, don't try to differentiate between abstraction and the other pillars)
- Re-usablity - OOPs ke kisi bhi concept ke sath add krlo ye toh....
- multip;e entities pe kaam krne main sahuliyat milti h like there are 10 integers hame unpe kaam krna h but agr unke upr koi ek parent entity hogi toh unke upr kaam krna aasaan rhega

## ABSTRACTION -  small info
**Story**

 
manlo tumhari koi gf h dono apas main gussa h and she slapped you now this slap is the abstract way to show all of her anger rather than make you count all the reasons

**so basically in abstraction you do implementation hiding** -> ek tarika h apke paas cheezo ko detailed way main explain krne ka ki bhai ye issue and all and then there is a abstract way of explaining things by saying, ye nahi chal rha

abstraction is->  upr upr se btana, kisi bhi cheez ke bareme upr upr se baat krna


_just for info don't stress much on it right now_


## Implementation of Encapsulation
```cpp
// ENCAPSULATION EXAMPLE

    class animal{ // hamne apne data members ko class ke andar encapsulate krne ka try kia h and to achieve perfect encapsulation we will be marking it as private
        private:
        int age;
        int weight;

        public:
        void eat(){
            cout<<"eating"<<endl;
        }
        int getage(){ // use to access private members of a class
            return this->age;
        }
        void setage(int age){
            this->age=age;
        }

    };
```

### Inheritance
why we use it? -> to increase the reusability of the code  
just like in humans, child inherit some properties from their parents, in the same manner there are two things in the oops
- Base class/super class/Parent class
- derived class/Subclass/child class  

here child class inherit the propeties(Data members and data functions) from the parent class

SYNTAX -
```cpp
class child: <mode of inheritance> parent;
```

```cpp
  // parent class
    
    class animal{
        public:
        int age;
        int weight;

        void eat(){
            cout<<"eating"<<endl;
        }

    };

    // child class
    class dog:public animal { // public is the mode of inheritance

    };

```

### Mode of inheritance
- Public 
- Private
- Protected


### Chart for mode of inheritance 

![Chart](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1783).png)

### Protected Class - 

behaves sames as the private class in all the cases but it can be accessed within the child class


difference between protected and private 

private ko inherit kroge toh inherit nahi hoga, protected ko kroge toh ho jaega


private will be inaccesible
### Types of inheritance
1. Single
2. Multi-level
3. Multiple
4. Hierarchical
5. Hybrid


## Single Inheritance 
when there is a single parent class and a single child class is present and the child inherts the porperties from the parent, then this is known as single inheritance

there is always a _"IS A"_ relationship in single inheritance 
for example - RANGE ROVER is a CAR

``` cpp
// single inherticance examole

    class car{
        public:
        int age;
        int speed;
        int weight;


        void speeding(){
            cout<<"full speed ahead"<<endl;

        }
        void brake (){
            cout<<"braking "<<endl;
        }
    };

    class rangerover: public car{

    };


```
### Multi-level Inheritance
there are multiple level of classes 
```
        Parent - car / fruit
          ^
          |
        CHILD - fortuner / mango
          ^
          |
        GRANDCHILD - Legender / Alphonso
```


here the child is inherting properties from the parent and the grand child is inheriting the properties form the child , here the child is behaving is a parent for grand child so this is called as multi-level inheritance you can increase
the levels as per your choic

```cpp
// Multi-level inheritance 

    class fruit {
        public:
        string name;

    };
    class mango: public fruit{
        public:
        int weight;
    };

    class alphonso: public mango{
        public:
        int sugar;
    };

```

![Concept](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1785).png)

### Multiple inheritance
when there are multiple parent classes and a single child class is present and the child inherts the porperties from the parent, then this is known as multiple inheritance

```cpp

    MUTLTIPE INHERITANCE
    class a {
        public:
        int physics;
    };
    class b{
        public:
        int chemistry;
    };

    class c: public a,public b{
        public:
        int maths;
    };

```
object creation of multiple inheritance
```cpp
// object creation of multiple inhertiance
    c obj;
    cout<<obj.physics<<" "<<obj.chemistry<<" "<<obj.maths<<endl; //it will have all the properties of the parent class
```

### DIAMOND PROBLEM / INHERITANCE ABIGUITY PROBLEM (VERY IMPORTANT)
if two classes have same members in this case let's say chemistry is present in both classes A and B, and the compiler will get confused konsa print krna h so in this case we use scope resolution operator  __"::"__
    
 ```cpp
   // Diamond problem

        class a {
        public:
        int physics;
        int chemistry;
    };
    class b{
        public:
        int chemistry;
    };

    class c: public a,public b{
        public:
        int maths;
    };
    c obj;
    // scope resolution operator
    obj.a::chemistry;
    obj.b::chemistry;

    out<<obj.physics<<" "<<obj.a::chemistry<<" "<<obj.maths<<endl;
    // hamne define krdia ki A class wali chemistry ki calue chahiye mark this as very important
```

SCOPE RESOLUTION OPERATOR  
WE WILL DEFINE THE CLASS JAHA SE VALUE UTHANI H

### Hierarchical inheritance
when there is a single parent class and multiple child class is present and the child inherts the porperties from the parent, then this is known as hierarchical inheritance

```cpp
// -> HEIRARCHIAL INHERITANCE - 1 parent 2 child
    class car {
        public:
        int age;
        int weight;
        string name;

        void speed() {
            cout<<"bhaago"<<endl;
        }

    };
    class scorpio:public car{

    };
    class legender:public car{

    };
```

### Polymorphism

__From Class__  
![Polymorphism](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/8f982220a7f5bc0817571dea3526ceedc597ab7e/Images/IMG20231004135913.jpg)

![Polymorphism](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/8f982220a7f5bc0817571dea3526ceedc597ab7e/Images/IMG20231004135913.jpg)

![Polymorphism](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/f44a26bf30772f0ccf8a5e41d59698fe4a5cf2b5/Images/IMG-20231005-WA0028.jpg)

What is POLYMORPHISM?  
POLY - many  
MORPH - forms  

so basically polymorphism means-> existing in many forms  
you can create two functions of same name using this



### Types of polymorphism
1. Compile-time Polymorphism
2. Run-time Polymorphism


### Compile-time Polymorphism

based on two concepts
- function overloading
- operator overloading



### Function overloading
when we make the function exist in multiple forms by changing it's signature each time,  


how we are changing the signature ?
- either by changing the number of parameters or by changing the type of parameters

_NOTE_ - 
__changing the return type doesn't change the signature__
    
 ```cpp

    // function overloading
    class maths{
    public:
    int sum(int a, int b){ // can create two functions of same name but they should have different input parameters/ signature alag hona chahiye
        return a+b;
        cout<<"im in the first signature"<<endl;
    }

    int sum(int a, int b, int c){ // polymorphism, function is existing in two different forms
        return a+b+c;
        cout<<"im in the second signature"<<endl;
    }
    int sum(int a, float b){
        return a+b;
        cout<<"im in the third signature"<<endl;
    }
};

int main(){
    maths obj;
    cout<<obj.sum(2,3)<<endl; // first signature
    cout<<obj.sum(2,3,4)<<endl; // second signature
    return 0;
}
```


### Operator overloading
We use "+" symbol to add two numbers we can use this also to subtract two numbers -> this concept is known as operator overloading  
- jo uss operator ka kaam nahi bhi tha vo bhi hamne usse kralia
- different forms of a single operator is defined in this

SYNTAX 
```cpp
return_type operator<operator sign>(parameters){
    // function .....
}
```

__Uses__  

used very rarely

for example

perform this in homework and also try to overload __">>"__ -> Whenever you use this function it should perform the print function
if we have some sort of values in our class so instead of creating a __"PRINT"__ function to print all the members of the class we will overload the __"<<"__
function such that by using this sign in this way 

``` cpp
 cout<<obj; 
 ```
 
 we should be able to print all the members of the class  

 EXAMPLE
```cpp
// operator overloading
class para{ // para = parameter
    public:
    int val;
    void operator+(para& obj2){
        int value1= this->val; // value of the current object "a"
        int value2 = obj2.val;
        cout<<(value2 - value1)<<endl;
    }
};
int main(){
    para obj1, obj2;
    obj1.val = 7;
    obj2.val = 2;
    // this should print the difference between them
    obj1+obj2; /*A+B -> here a is the current object and "+" ki definiton with respect to A dekhi jaegi, jisme B as a input hoga, it is same as
a.add(b); function call add(which is considered to be a member function) in which b is the input parameter*/

    return 0;
}
```


### How operator works in the case of operator overloading
A+B -> here __"A"__ is the current object and __"+"__ ki definiton with respect to __A__ dekhi jaegi, jisme __"B"__ as a input hoga, it is same as
__"a.add(b);"__ function call add in which __b is the input parameter__

--- 

### Operators which can't be overloaded
- __"::"__ scope resolution operator
- __"."__ member access operator
- __"?:"__ conditional operator or The ternary operator
- __sizeof()__ size of operator
- __Sizeof()__ Operator

### Operator overloading using friend function
```cpp
class a{
    public:
    int val;
    friend void operator+(a& obj1, a& obj2);
};
void operator +(a& obj1, a& obj2){
    int value1 = obj1.val;
    int value2 = obj2.val;
    cout<<(value1+value2)<<endl;
}
int main(){
    a obj1, obj2;
    obj1.val = 2;
    obj2.val = 3;
    obj1+obj2;
    return 0;
}
```

---
### Some Impostant points to remember
- while implementing operator overloading using member function the first object invokes the operator and the second object is passed as the parameter
Example
```cpp
class a{
    public:
    int val;
    void operator+(a& obj2){
        int value1= this->val; // value of the current object "a"
        int value2 = obj2.val;
        cout<<(value2 - value1)<<endl;
    }
};
int main(){
    a obj1, obj2;
    obj1.val = 7;
    obj2.val = 2;
    obj1+obj2; // the obj1 is invoking the operator and obj2 is passed as the parameter
    return 0;
}
```
- while implementing operator overloading using friend function both the objects are passed as the parameter
Example
```cpp
class a{
    public:
    int val;
    friend void operator+(a& obj1, a& obj2);
};
void operator +(a& obj1, a& obj2){
    int value1 = obj1.val;
    int value2 = obj2.val;
    cout<<(value1+value2)<<endl;
}
int main(){
    a obj1, obj2;
    obj1.val = 2;
    obj2.val = 3;
    obj1+obj2; // both the objects are passed as the parameter
    return 0;
}
```
### RUN-TIME POLYMORPHISM | DYNAMIC POLYMORPHISM

![url](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/5c0f7690be6660f99403bda406f567befaad4140/Images/IMG-20231010-WA0013.jpg)

![url](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/5c0f7690be6660f99403bda406f567befaad4140/Images/IMG-20231010-WA0014.jpg)

polymorphism that is being experienced DURING the execution of the program in the runtime is known as runtime polymorphism  
We do function/method overiding here, overloading happens in Compile-time polymorphism  

### Over-riding
suppose we have two class, one is parent class and one is child class and the child class is inherted from the parentclass, assuming the name of the classes are as follows  
- PARENT CLASS - ANIMAL - it contains a function named speak which prints "speaking"
- CHILD CLASS - DOG - since it is inherited from the animal class itself so it also contains the function "SPEAK" buthere we want the function to be more specific kyuki kutta bolta nahi h it barks so when we will __DEFINE or CUSTOMIZE the function by ourself after the inheritance, then thisconcept is known as FUNCTION OVER-RIDING__

__one line - to get the custom behavior of the inherited function, by explicitly defining it in the child class is known as function over-riding__

```cpp
// function over-riding
    class animal{
        public:
        void speak(){
            cout<<"speaking"<<endl;
        }
    };

    class dog:public animal{
        public:
        void speak(){
            cout<<"barking"<<endl;
        }
    };

    int main (){
        dog obj;
        obj.speak(); // this will print barking instead of inherited function -> function overridden
        return 0;
    }
```

### Upcasting 
whenever you define or you dynamically define a variable using __parent__ class as the pointer and the __child__ class as the variable then it is known as __UPCASTING__


SYNTAX 

```cpp
animal* a = new dog();
a->speak(); // this will print speaking
```

this will print the function of the parent

code
```cpp
#include <iostream>
using namespace std;
class animal {
    public:
    virtual void speak(){
        cout<<"speaking"<<endl;
    }
};

class dog:public animal{
    public:
    // over-riding
    void speak(){
        cout<<"Barking"<<endl;
    }
};
int main () {
// upcasting
    animal* a = new dog();
    a->speak(); // this will print speaking unless the virtual keyword is used
    return 0;
}    
```

Concept


In upcasting if pointer is of parent class and object is of child class then the function of the parent class will be called, but if we want to call the function of the child class then we have to use the __virtual__ keyword in the parent class function

### Downcasting

when you use the child class as the pointer and the parent class as the object then it is known as downcasting

_whenever you do downcasting or upcasting_ __without using the virtual keyword, hamesha pointer ka method call hoga and agr virtual keyword apply kia h then object ka function call hoga aur virtual keyword apply krne ke baad object ka function ya method call hoga__

```cpp
   // DOWNCASTING

    // dog *f = new animal; // won't run
    // f->speak();


    // to make it work

    dog *f = (dog* )new animal;
    f->speak();

    // now it will work
```
---

## IMPORTANT FOR INTERVIEW
patterns possible

- parent* a = new parent();
- parent* a = new child();
- child* a = new child();
- child* a = (child*)new parent();

pointer type(left side) ke basis pe by default method ya function call hoga and and agr main chahta hu type of object(right hand side of the pattern) ke basis pe pick ho then i need to use virtual keyword in that method

### Questions based on constructors made in different classes 


cases
- Parent consturctor is called
- child constructor is called
- parent and child both constructor is called

```cpp
// constructor calling
    class parent{
        public:
        parent(){
            cout<<"parent constructor"<<endl;
        }
    };

    class child:public parent{
        public:
        child(){
            cout<<"child constructor"<<endl;
        }
    };

    int main(){
        // case 1
        parent* a = new parent(); // parent constructor will be called
        // case 2
        child* a = new child(); //both parent and child constructor will be called because of the default behaviour of inheritance, child class ka constructor chalne se pehle parent ka chalega
        // dog a; -> both dynamically and statically same ans aaega
        parent* a = new child(); // both parent and child constructor will be called


        // KYUKI ACTUALLY OBJECT KIS TYPE KA BNA H IT DEPENDS ON RIGHT SIDE

        // case 3 
        child* a = (child*) new parent(); // parent constructor will be called because parent doesn't depend on any other class 
        return 0;
    }
```

__You have to check the dependency of the class on the other class while answering the question__


also experiment this by yourself


## Constructors
![Constructor](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/8f982220a7f5bc0817571dea3526ceedc597ab7e/Images/IMG20231004142627.jpg)

![Ctor](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/f44a26bf30772f0ccf8a5e41d59698fe4a5cf2b5/Images/IMG-20231005-WA0029.jpg)
