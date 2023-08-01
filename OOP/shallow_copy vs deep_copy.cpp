/*
CONCEPTS 

suppose there is a container jiske andr kuch cheeze h and its outer color is whitw

SHALLOW COPY- copying only the outer content -> outer color of the box

DEEP COPY - also copying the inside content of the box along with it's outer features


*/


#include <bits\stdc++.h>
using namespace std;

class abc{
    public:
    int x;
    int *y;

    abc(int _x, int _y):x(_x),y(new int (_y)){}

//     // default dumb copy constructor -> shallow copy
//    abc(const abc &obj){
//      x= obj.x;
//     y = obj.y;
//    }

    // DEEP COPY constructor
//     abc(const abc &obj){
//      x= obj.x;
//     y = new int(*obj.y); // new memory is assigned jiski value y ke same hogi
//    }

    ~abc(){
        delete y;
    }

    void print () const {
        cout<<"the value of X is "<<x<<" the value of Y is "<<*y<<" the pointer of y is "<<&y<<endl;
    }

};
int main(){
    // abc a(1,2); // intialsed with A
    // cout<<"using  A"<<endl;
    // a.print();
    // abc b =a; // call hota h copy contructor -> dumb copy consturctor
    // cout<<"using B"<<endl;
    // b.print();

    // my compiler is showing different pointer address for A and B in variable Y but in the course video it shows the same pointer
    // this way the Y variable of both the objects become interdependent on each other, and if we change one variable in the next execution the other variable will be changed automatically
    // also if we free the memory of variable Y of object A then the variabke Y of the object will loose its existence
    



    // MEMORY LEAK ISSUE

    abc *a = new abc(1,2);
    abc b = *a;
    delete a; // mera chalgya but bhaiya ka nahi chla
    b.print();

    return 0;
}