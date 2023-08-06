/*concept
definition and points from the screenshot taken

it's just like a promise, that you won't change the value but as in you do in realife, you can also break this promise

-> value declared using "const" keyword cannot be changed 

example - cont int x=10; now you cannot reassign the value of x again, throughout the code

this is done to
-> simplify the code 
->agr "const" se koi variabke declare kia h toh when you use this variable will do some optimisation and will load it in "REAL_ONLY MEMORY" which will make the code even more smoother -> access fast hoga
-> screenshot




*******************************************************************************************


concept of V value and R value
l value -> variable having memory location. ex -> int x; chary; etc
R vlue -> varables which doesn't have memory location ex-> 5; , int& a =b


**********************************************************************************************************8

2. COnst with pointers

BONUS COONCEPT
CONCEPT OF MEMORY ALLOCATION
    int *a = new int;
    *a=2;
    delete a; //edit
    cout<<*a<<endl;
    int b =5;
    a = &b; //value is changed due to this thing - b is pointing to B
    cout<<*a;


here a is completely dissappeared and it's just b now , and the memory is being wasted, we should have deleted the a before moving on to b to avoid memory leak



CONST data, NON-CONST pointer

const int *a = new int;  

-> here the int is a data ehich is constant but the pointer a which is pointing towards the data can be re-intialised to any other pointer

-> if i write const before "*" then the content will be constant
-> learn it in this way that the meaning of "*" this is value at this particular pointer so agr "*" se pehle const lga dia toh pointer ki vaue constant hojaege , whereas uske baad lgaya toh pointer constant hoga


****************************************************************************************************************************************************************************************************************************



USE OF CONST IN CLASS

if you declared any function or the method as  const -> this method can't ever change  any of the member variable
-> isko un method main use krege jaha ham member variable change nahi krna chahte
-> can be used with any function



*******************************************************************************************************************************************************************************************************************************
DEFAULT ARGUMENT IN A FUNCTION 
the arguments which are pre-define, in the functi, apko explicitly main function se paas nahi krne pdte

int arg(int a, int b, int z=23 ){ //z is the default argument always given in the rightmost position otherwise will give error
agr z dobara define krdia toh prefined value over-ride ho jaegi

};

agr const function ke andr koi aur function call kr rhe h toh vo function bhi constant hona chahiye, 
jo function call bhi kroge vo esa function nahi hona chahiye jo value change kre



**********************************************************************************************************************************************************************************************************************************
CHANGING THE VALUE OF CONST VARIABLE
const is like a real world promise and promises can be broken
-> used in debugging
-> variable ko mutable bnake

syntax
mutable int x;
after this you can change the value using mutable keyword as a good programmer, mutable keyword use nahi krna bas debugging ke time use krna h



*****************************************************************************************************************************************************************8


INTIALISATION LIST
a new method to makr a constructor
what's the advantage 
agr hamne koi "Z" variable ko constant declare kra and we want it to intialise with 0 -> vo normal ctor main nahi ho skta it will show an error but intialization list main ho skta h


*************************************************************************************************************************************************************************************************************************



MACROS
->screenshot
syntax -> using #define
macros are pre processror directives which allows you to define constansts functions or code snippets that can be used throughout your code
*/





#include <bits\stdc++.h>
class abc{
    int x;
    int *y; // pointer variable y is declared
    int z;
    public:

    // constructor / ctor : old style to write
    abc(){
    x=0;
    y = new int(0);
    }


    // new way to write ctor  = intilization list 
    // abc(int _x, int _y, int _z =0):x(_x),y(new int(_y)),z(_z){}

    // getter and setter of x and y
    int getx() const { // now it cannot change the member variable
    // x=10; won't work, as the member variable inside this won't change
        return x;
    }
    void setx(int value){
        this->x=value;
    }
    int gety()const {
        return *y;
    }
    void sety(int value){
        this->y=&value;
    }
};
using namespace std;
int main(){
    // execution

    // initilisation can be done but we cannot reassign the value
    const int x= 10;
    // x= 12; //won't work-> error-> experssion must be a modifiable value
    cout<<x<<endl;


    // how to change the value of const

    // int* p = &x;
    // *P=12; //value will be changed but it's not working anymore in modern compilers

// *****************************************************************************************************************************************************


    // execution of 2.

    const int *a = new int(2); //CONST data, NON-CONST pointer -> explained in the concept section
    // int const *a = new int(2); // both are same
    // *a=2; // connot change the content of the pointer
    // a cannot be re-intialised, pointer ka content reassign nahi kr skte but pointer assign kr skte h
    cout<<*a<<endl;
    int b =5;
    a = &b; //value is changed due to this thing - b is pointing to B -> pointer can be reassigned
    cout<<*a<<endl;





    // CONST pointer NON-CONST DATA

    cout<<"under the CONST pointer NON-CONST DATA concept"<<endl;
    int *const c = new int(2); // pounter is constant but the value can be 
    cout<<*c<<endl;
    *c =120; // value changed
    cout<<*c<<endl;

    // pointer change is not possible




    //CONT pointer and CONST data
    // const int* /*data constant*/ const a /*pointer const*/ = new int(10); // initialisation of the intger
    

// **************************************************************************************************************************************************************************************************************

// IMPLEMENTATION OF CONST IN CLASS
    // calling the getter setter of the value x
    cout<<"calling getters and setters"<<endl;
    abc ujj;
    cout<<ujj.getx()<<endl;
    ujj.setx(199);
    cout<<ujj.getx()<<endl;
    // calling getter and setter of y
    cout<<ujj.gety()<<endl; 
    ujj.sety(199);
    cout<<ujj.gety()<<endl;



    
    
    return 0;
}
/**/