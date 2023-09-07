/*OOPs is a programming technique in which things revolve around objects and we perfrom all the operations on objects

an object is something which have
1. property/state - like a dog have  4legs, 2 eyes etc
2. behaviour/functions - like a dog can bark , he can eat and sleep etc.

Why we need oop?
1. it makes the code more readable
2. makes the code more resuable 
3. the code is now more easier to understand and maintain.

now further in the code we will be looking at the syntax of performing various things and some more concepts related to that     */



#include <bits/stdc++.h>
// #include <iostream>
using namespace std;


int main (){
    // creating of class
    // syntax
    // class animal {

    // };

    // size of the empty class is a
    class ujjwal{
        int age; // 4
        int wt; //4
        char ch; // answer should be 9 but it is coming out to be 12 so find this out

    };
    cout<<"size of the empty class is: "<<sizeof(ujjwal)<<endl;
    // why the answer is one, because if it doesn't occupy the memory we won't be able to identify it
    // so in order ton indentify the particular class we have given it the minumum possible memory i.e 1





// public and private in combo example
    // class animal{
    //     // state or properties
    //     public: // the area below this is public
    //     int age;
    //     private: // the area below this is private
    //     string name;

    //     // behaviour/functions/methods
    //     void eat (){

    //     }
    //     void sleep (){

    //     }

    // };





     class animal{
        // state or properties
        public:
        int age;
        string name;
        int weight;
        string type;


        // default constructor
        animal() {
            cout<<"constructor called"<<endl; // refer to the notes below -  is is called autmatically without any external code
            this->weight=0;
            this->age=0;
            this->name=""; // using this is a good practice 
            // using constructor we initialise things

        }



        // Parameterized constructor
         animal(int age) { // you can set as many parameters as you wants
            cout<<"constructor called"<<endl; // refer to the notes below -  is is called autmatically without any external code
            this->weight=0;
            this->age=age;
            this->name=""; 
            cout<<"parameterised constuctor called"<<endl;

        }



        // IMP COPY CONSTUCTOR
        // used when we copy an object to another
        // animal(animal obj){ // when we paas it like that the object will be passed using the concept of pass by value so a copy will be created, copy bngi toh copy constructor call hoga, fir copy bnegi , fir call hoga, infinite loop will be formed , so in order to resolve this thing, pass using call be reference
        //     this->age=obj.age;
        //     this->weight=obj.weight;
        //     cout<<"you are inside he copy constuctor";
        // }
        animal(animal &obj){ // when we paas it like that the object will be passed using the concept of pass by value so a copy will be created, copy bngi toh copy constructor call hoga, fir copy bnegi , fir call hoga, infinite loop will be formed , so in order to resolve this thing, pass using call be reference
            this->age=obj.age;
            this->weight=obj.weight;
            cout<<"you are inside the copy constuctor";
        }

        

        // destructor 
        ~animal(){
            cout<<"you just called the destruction for you"<<endl;
        }
        // all the statically defined variables will call this automatically
        

        

        // behaviour/functions/methods
        void eat (){
            cout<<"eating"<<endl;
        }
        void sleep (){
            cout<<"sleeping"<<endl;
        }
        int getweight(){ // will fetch the weight
            return weight;
        }
        void setweight (int weight){ // will set the weight
            this->weight=weight; 
        }


    };

    // object creation creation can be done in two ways 
    // 1. static allocation
    // 2. dynamic allocation

    // static memory allocation
    animal ramesh; // we have made an object of animal type which is known as ramesh
// we want to access the property of any object then we have to use dot(.) operator
    ramesh.age = 12; // inserting values
    ramesh.name = "lion";

    cout<<"the age of ramesh is: "<<ramesh.age<<endl;
    cout<<"the name of ramesh is: "<<ramesh.name<<endl;
    ramesh.eat(); // we have to use () in order to call the behavior or the methods otherwwise there will be no difference in calling states and methods
    ramesh.sleep();

    // but if we try to run this code we will get an error saying int decalred is private





    // dynamic memory allocation

    /*
    while coding we have two types of memories
    1. stack memory - available in small amount -> we were using this still now, this is being used whenever we use things like, int, string, float etc whenever we statically try to allocate memory

    2. heap memory - available in very large amount
    when we dynamically allocate the memoery it uses the heap memoery and we allocate memory in this part using the keyword "new"
    ex - new int(returns the address of the memory allocated);, so because it returns the address so we use the concept of pointer
    int* a = new int i; ( will complete the videos of pointers after this but here is the concept)
    


    -> here the pointer will be stored in the stack memory whereas the "new int i" will be stored in the heap memory
    -> the space or the memory taken the in stack can be automatically cleaned but the space in the heap cannot be automatically cleaned ( learn it like this- when you havee less storage space you delete things from your phone, whereas when you have plenty of space your really don't care about the amount of files which are there in the memory of your phone)
    -> allocation using "new keyword" and de-allocation using "delete" keyword

    
    */






    // EXECUTION OF DYNAMIC MEMORY ALLOCATION

    animal* suresh = new animal;
    (*suresh).age=90;
    (*suresh).type = "billi";

    // concept -> we are using (*suresh) because we want to access the object stored at that address if wre don't use it, we are just saying aht, the value of this address is this and that which is not logical at all

    // ALTETNATIVE METHOD ---  syntax

    suresh->age=18;
    suresh->type="kutta";

    suresh->eat();
    suresh->sleep();




    /******************************************/
    // ACCESSING A PRIVATE MEMBER OF THE CLASS, this concept is heavily used in industries

    // getter and setter execution
    ramesh.setweight(101);
    cout<<"weight: "<< ramesh.getweight();

// ***************************************************************

    // calling constructors

    animal a; // the default parameter will be passed for this because no parameter is given
    animal* b = new animal(100); // parameterised constructor will be called because we are passing one constructor

    // suppose we are passing to parameters to the object "b" then the system will look out for the parameter which is having 2 paramters in it's input value
    animal c =a;


    // another way of copying
    // animal1(c); // a new object 1 is created jisme c copy krre h 

    return 0;
}



// what is padding and greedy alignment

//  Access modifier - they define the scope of your access
// if a state or behavior is public then we can access it inside the class and outside the class both


// TYPES OF ACCESS MODIFIER - kisi members ko kaha access kr skta hu kaha nahi hota h - isse vo define hota h
// 1. public
// 2. Private - if a state or behavior is private marked then we can only access it inside the class only and by default all the members are private marked
// members -  states and behaviour
// 3. Protected (will do in the next class)

// so to public mark the access modifier we have to use the keyword public




/****************************************************************************************************************************************************
 When we want to access a private member outside of the class then we have to use the concept of "getters and setters"
 these are basically the functions 
 getter -> used to fetch the property of the class
 setter -> use to set the property of the class



*/
 

/*
Before 

    class animal{
        // state or properties
        int age;
        string name;

        // behaviour/functions/methods
        void eat (){

        }
        void sleep (){

        }

    };


After 


    class animal{
        // state or properties
        public:
        int age;
        string name;

        // behaviour/functions/methods
        void eat (){

        }
        void sleep (){

        }

    };



*/
// class is a format and object is the application of the class
// class is used to define the user defined datatype and using that class or you can say on the basis of this class you create objects 




// ************************************************************8



/*

as we know that while defining the pointer we use the symbol "*" with the keyword which of the exact same dataype of the value, jiska address ye store kr rha h
example - int* a = int a;
so here we are using int with a "*", symbol to denote that hame jab value read krni h toh hame 4 byte read krne h, the value at this address is actually a integer




**************** THIS OPERATOR ***************
this is a pointer to current object



Before
     class animal{
        // state or properties
        public:
        int age;
        string name;
        int weight;
        string type;

        // behaviour/functions/methods
        void eat (){
            cout<<"eating"<<endl;
        }
        void sleep (){
            cout<<"sleeping"<<endl;
        }
        int getweight(){ // will fetch the weight
            return weight;
        }
        void setweight (int weight){ 
            weight=weight; 
        }


    }; // here the program won't function properly because the system is confused, which system are we talking about , so on and so forth, so in order to differentiate the key word the have to use "this " operator
    so "this" is the pointer which points towards the current object 

    how to identify the current object ?
    when we try to access a member using the dot operator we use ("a.member") so here a is the current object 
    
    AFTER 


         class animal{
        // state or properties
        public:
        int age;
        string name;
        int weight;
        string type;

        // behaviour/functions/methods
        void eat (){
            cout<<"eating"<<endl;
        }
        void sleep (){
            cout<<"sleeping"<<endl;
        }
        int getweight(){ // will fetch the weight
            return weight;
        }
        void setweight (int weight){ 
            this->weight=weight; 
        }



***************************************************************************************************************************************************************


    Object Creation (created by default if not created by use)

-> constuctor - initialises the object 
constructor is a type of function having
-> no return type
-> name same as class
-> intialise object
jab khudka constuctor bnate h toh it over ride the default one present and hmare banae hue run krte h






*****************************************************8

why copy constructor -  by default constuctor shallow copy krta h, and aap uss shallow copy se bachne ke liye khud deep copy krna chahte h, that's why

what is shallow copy ?

pending --------


****************************************************************************************************************************************************************
DESTRUCTOR

use to free the memory, constuctor ne memory li and allot kri, ye us memory ko free krega
in static memory allocation -  called automatically
in dynamic memory allocation - you have to call manually

won't have any 
return type and input parameter

then what's the difference between the code of constuctor and destuctor 
"~" this sign

 can be called manually using the "delete keyword"

delete "name of the object";


static ke andar jaise hi uska scope end hoga then the destuctor will be called automatically

*/







// homework
// learn about padding and greedy alignment 
// learn about memory leak and garbage collector(not there in c++ but pdhlena)
// const keyword - variable and functions
// how to create static variables and static functions
// initialisation list