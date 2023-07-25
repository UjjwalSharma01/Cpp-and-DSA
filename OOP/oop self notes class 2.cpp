/*

********************************************************* Concepts ******************************************************



sabse jaada interview questions is concept se puche jaate h 4 pillars of OOPs
all these things are interalted and all lies under abstraction // to be verified later

4 PILLARS 
1. Encapsulation
2. inheritance 
3. polymorphism
4. Abstraction -> most tricky to use and all of these 4 pillars seems to be exactly same but don't get confused




************************************************************************************************************


Encapsulation (data hiding)
Defintion - 
when you wrap your daramembers and member function in a bigger entity, or wrapping the data members and the data function inside a parent identity is called as encapsulation

1. Physical example - or in a more physical world you can say maine apne 500 and 2000 ke notes purse main dalke encapsule krdtiye
2. practical example - you have cells of remote and tumne unhe remote main daldia -> encapsulation and then tumne uske upr ek cover lga dia -> data hiding


-> when we create class, it contains the data member (DM) and the data funtions (DF) and it is combining or warpping both the things so we can say that class is also an example of encapsulation

Perfect Encapsulation/full Encapsulation -> jab hamne saare data members ko private mark kia hota h

what's the usage of this thing?
-> we have increased the security/privacy of your code and if i want i can set my class to read only
-> the main use is that, you decide konsa data apko dikhana h konsa data apko nahi dikhana h (abstraction se alag nahi h koi, don't try to differentiate between abstraction and the other pillars)
-> Re-usablity - OOPs ke kisi bhi concept ke sath add krlo ye toh....
-> multipe entitied pe kaam krne main sahuliyat milti h like there are 10 integers hame unpe kaam krna h but agr unke upr koi ek parent entity hogi toh unke upr kaam krna aasaan rhega



ABSTRACTION - // small info
-> story, manlo tumhari koi gf h dono apas main gussa h and she slapped you now this slap is the abstract way to show all of her anger rather than make you count all the reasons

so basically in abstraction you do implementation hiding -> ek tarika h apke paas cheezo ko detailed way main explain krne ka ki bhai ye issue and all and then there is a abstract way of explaining things by saying, ye nahi chal rha

abstraction is->  upr upr se btana, kisi bhi cheez ke bareme upr upr se baat krna



INHERITANCE
why we use it? -> to increase the reusability of the code
just like in humans, child inherit some properties from their parents, in the same manner there are two things in the oops
-> Base class/super class/Parent class
-> derived class/Subclass/child class

here child class inherit the propeties(Data members and data functions) from the parent class

SYNTAX - 

class child: <mode of inheritance> parent;

MODE OF INHERTIANCE
-> public 
-> private
-> protected

TYPE OF INHERITANCE
1. Single
2. Multi-level
3. Multiple
4. Hierarchical
5. Hybrid



-> SINGLE INHERITANCE
when there is a single parent class and a single child class is present and the child inherts the porperties from the parent, then this is known as single inheritance

there is always a "IS A " relationship in single inheritance 
for example - RANGE ROVER is a CAR


-> MULTI LEVEL INHERITANCE
there are multiple level of classes 

        Parent - car / fruit
          ^
          |
        CHILD - fortuner / mango
          ^
          |
        GRANDCHILD - Legender / Alphonso


here the child is inherting properties from the parent and the grand child is inheriting the properties form the child , here the child is behaving is a parent for grand child so this is called as multi-level inheritance you can increase
the levels as per your choice


-> MULTIPLE LEVEL INHERITANCE 
in the previous types of inherticance we had single parent from which the properties are being inherited but in this type of inheritance 
two parents are present and the properties are derived to child class from both parent classes 

dono parent class ki properties aajaegi



DIAMOND PROBLEM / INHERITANCE ABIHUITY PROBLEM
if two classes have same members in this case let's say chemistry is present in both classes A and B, and the compiler will get confused konsa print krna h so in this case we use scope resolution operator
SCOPE RESOLUTION OPERATOR
WE WILL DEFINE THE CLASS JAHA SE VALUE UTHANI H


-> HEIRARCHIAL INHERITANCE 
inverse of the MULTIPLE INHERITANCE 

-- one parent --- two child


-> Hybrid

mixture of all sort of inherritance










*/






#include <bits/stdc++.h>
using namespace std;


// ENCAPSULATION EXAMPLE

    // class animal{ // hamne apne data members ko class ke andar encapsulate krne ka try kia h and to achieve perfect encapsulation we will be marking it as private
    //     private:
    //     int age;
    //     int weight;

    //     public:
    //     void eat(){
    //         cout<<"eating"<<endl;
    //     }
    //     int getage(){ // use to access private members of a class
    //         return this->age;
    //     }
    //     void setage(){
    //         this->age=age;
    //     }

    // };






    // Inheritance example


    // // parent class
    
    // class animal{
    //     public:
    //     int age;
    //     int weight;

    //     void eat(){
    //         cout<<"eating"<<endl;
    //     }

    // };

    // // child class
    // class dog:public animal {

    // };


    // single inherticance examole

    // class car{
    //     public:
    //     int age;
    //     int speed;
    //     int weight;


    //     void speeding(){
    //         cout<<"full speed ahead"<<endl;

    //     }
    //     void brake (){
    //         cout<<"braking "<<endl;
    //     }
    // };

    // class rangerover: public car{

    // };





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


    // MUTLTIPE INHERITANCE
    // class a {
    //     public:
    //     int physics;
    // };
    // class b{
    //     public:
    //     int chemistry;
    // };

    // class c: public a,public b{
    //     public:
    //     int maths;
    // };








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





int main() {
    // dog d1; // execution of "inheritcance example"
    // d1.eat(); // the function is inhertied from the parent function everything is kinda copied from the parent functions

    // object creation for single inheritance
    // rangerover ujjwalki;
    // ujjwalki.speeding();
    // ujjwalki.brake();


    // object creation for multi-level inhertiance
    alphonso a;
    cout<<a.name<<" "<<a.weight<<" "<<a.sugar<<endl;


    // object creation of multiple inhertiance
    c obj;
    // cout<<obj.physics<<" "<<obj.chemistry<<" "<<obj.maths<<endl;




    // Diamond problem
    cout<<obj.physics<<" "<<obj.a::chemistry<<" "<<obj.maths<<endl;
    // hamne define krdia ki A class wali chemistry ki calue chahiye mark this as very important



    // -> HEIRARCHIAL INHERITANCE
    scorpio s12;
    s12.speed();

    legender g;
    g.speed();



    return 0;
} 


/*
Important info

protected class - behaves sames as the private class in all the cases but it can be accessed within the child class
difference between protected and private 

private ko inherit kroge toh inherit nahi hoga, protected ko kroge toh ho jaega


private will be inaccesible



SOME QUESTIONS RELATED TO INTERVIEW 

1. java main multiple inheritance possible nahi h
2. diamond problem
3. chart
4. questions from polymorphism
*/