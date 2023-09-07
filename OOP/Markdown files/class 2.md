# Class 2

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


## implementation of encapsulation
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

### INHERITANCE
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

### MODE OF INHERTIANCE
- public 
- private
-  protected


### Chart for mode of inheritance 

![Chart](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1783).png)


### TYPE OF INHERITANCE
1. Single
2. Multi-level
3. Multiple
4. Hierarchical
5. Hybrid


## SINGLE INHERITANCE
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
### MULTI LEVEL INHERITANCE
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