/*
**************************************** CONCEPTS ********************************************


what is POLYMORPHISM?
POLY - many
MORPH - form

so basically polymorphism means-> existing in many forms
-> can create two functions of same name using this



TYPES OF POLYMORPHISM
1. Compile-time Polymorphism
2. Run-time Polymorphism


Compile-time Polymorphism

based on two concepts
-> function overloading
-> operator overloading



FUNCTION OVERLOADING
when we make the function exist in multiple forms by changing it's signature each time,
how we are changing the signature 
-> either by changing the number of parameters or by changing the type of parameters
-> changing the return type doesn't change the signature 


OPERATOR OVERLOADING
We use "+" symbol to add two numbers we can use this also to subtract two numbers -> this concept is known as operator overloading
-> jo uss operator ka kaam nahi bhi tha vo bhi hamne usse kralia
-> different forms of a single operator is defined in this

SYNTAX 

return_type <operator keyword> (operator sign){
    function
}
 
USES

used very rarely

for example

// perform this in homework and also try to overload ">>"
if we have some sort of values in our class so instead of creating a "PRINT" function to print all the members of the class we will overload the "<<"
function such that by using this sign in this way "cout<<obj" we would be able to print all the members of the class


RELATED TO THE EXECUTION OM HOW THE OPERATOR WORKS, IN THE PROGRAM SPECIALLY IN THE CASE OF OVERLOADING
A+B -> here a is the current object and "+" ki definiton with respect to A dekhi jaegi, jisme B as a input hoga, it is same as
a.add(b); function call add in which b is the input parameter



    RUNTIME POLYMORPHISM / DYMANIC POLYMORPHISM
    polymorphism that is being experienced DURING the execution of the program in the runtime is known as runtime polymorphism
    We do function/method overiding here, overloading happens in Compile-time polymorphism

    OVER-RIDING
    suppose we have two class, one is parent class and one is child class and the child class is inherted from the parent class, assuming the name of the classes are as follows
    -> PARENT CLASS - ANIMAL - it contains a function named speak which prints "speaking"
    -> CHILD CLASS - DOG - since it is inherited from the animal class itself so it also contains the function "SPEAK" but here we want the function to be more specific kyuki kutta 
    bolta nahi h it barks so when we will DEFINE or CUSTOMIZE the function by ourself after the inheritance, then this concept is known as FUNCTION OVER-RIDING


    AFTER EXECUTION OF OVER-RIDING
    QUESTION- 

    when we are defining the custom behaviour each time then why we are defining the function in the parent class, fir dobara bhi toh define krna hi h na

    -> in the companies and the real world example - sirf function initiate kra jaata h parent class main usko pura define nahi krte
    -> other case would be apko kuch cheeze exact same cheez chahiye but kuch cheezo according to the usecase apko change krni h toh you have full control over it, and you can OVER-RIDE it



    UPCASTING 
    whenever you define or you dynamically define a variable
    using parent class as the pointer and the child class as the variable then it is known as UPCASTING
    SYNTAX 
    animal* a = new dog();
    a->speak();

    this will print the function of the parent











*/










#include <bits/stdc++.h>
using namespace std;
 

// FUNCTION OVERLOADING
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



// operator overloading
class para{
    public:
    int val;
    void operator+(para& obj2){
        int value1= this->val;
        int value2 = obj2.val;
        cout<<(value2 - value1)<<endl;
    }
};


/*************************************************** OVER-RIDING***************************************/
class animal {
    public:
    void speak(){
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





int main(){
    maths obj;
    cout<< obj.sum(2,5)<<endl; // first function is called here in this case
    cout<<obj.sum(2,4,5)<<endl; // second signature or function is called in this case
    // cout<<obj.sum(2,4.1)<<endl; // fat jaega function overloaded -> 4.1 ko ye by default double consider krta h and we have float value there in the parameter section
    // of the function 


    // to correct this thing we have to use "f" after the number to denote that it's a floating point number
    cout<<obj.sum(2,4.1f)<<endl; // now it will run


    // operator overloading
    para obj1, obj2;
    obj1.val = 7;
    obj2.val = 2;
    // this should print the difference between them
    obj1+obj2;


/*************************************************** OVER-RIDING***************************************/
    animal a;
    a.speak();
    dog d1;
    d1.speak(); // functiom over ridden

    animal* b = new dog();
    b->speak();
    
    return 0;
}


/*
HOMEWORK

-> kon konse operators ko overload kr skte ho?
*/