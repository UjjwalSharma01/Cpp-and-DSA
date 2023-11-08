// function overloading practice

/*
Write a C++ program that uses function overloading to find the area of a circle, rectangle, and square

*/
// #include <iostream>
// using namespace std;
//     class a{
//         int l;
//         int b;
//         float r;
//         int s;
//         public:
//         void setl(int l){
//             this->l=l;
//         }
//         void setb(int b){
//             this->b = b;
//         }
//         void setr(float r){
//             this->r=r;
//         }
//         void sets(int s){
//             this->s=s;
//         }
//         float getr(){
//             return r;
//         }
//         int gets(){
//             return s;
//         }
//         int getl(){
//             return l;
//         }
//         int getb(){
//             return b;
//         }
//          // functions to find area of rectangle, circle and square
//         void area(int l, int b){ // passing length and breadth of a rectangle
//         int arec;
//         arec = l*b;
//         cout<<"Area of rectangle is: "<<arec<<endl;
//         }
//         void area(int s){
//             int asquare;
//             asquare = s*s;

//             cout<<"the area of square is: "<<asquare<<endl;
//         }

//         void area(float r){
//             float ac;
//             ac = 3.14 * r *r;
//             cout<<"Area of circle is: "<<ac<<endl;
//         }
//     };
// int main(){
//         a obj;
//         obj.sets(12);
//         obj.setr(11.1);
//         obj.setl(20);
//         obj.setb(30);

//         obj.area(obj.getr());
//         obj.area(obj.getl(), obj.getb());
//         obj.area(obj.gets());
//     return 0;
// }
/* Write a C++ program that uses inline functions to perform arithmetic operations (addition, subtraction, multiplication, and division).  */
// #include <iostream>
// using namespace std;
// inline void addition (int a, int b){
//     int add;
//     add = a+b;
//     cout<<"the addition of the given two numbers is: "<<add<<endl;
// }
// inline void sub(int a, int b){
//     int s;
//     s = a -b;
//     cout<<"The subtraction of the given two numbers are: "<<s<<endl;
// }
// int main(){
//     int a = 5, b=10;
//      addition(a,b);
//      sub(b,a);
//     return 0;
// }

/* Write a C++ program that uses a friend function to access private data members of a class. */

// #include <iostream>
// using namespace std;
// class a{
//     int c =5;
//     int b =10;
//     public:
//     friend void access(a obj);
// };
// void access(a obj){
//     cout<<"The value of a is "<<obj.c<<endl;
//     cout<<"The Value of B is: "<<obj.b<<endl;
// }
// int main (){
//     a obj;
//     access(obj);
//     return 0;
// }

// program to find sum of complex number using operator overloading in friend function

// #include <iostream>
// using namespace std;
// class complex{
//     int r;
//     int i;
//     public:
//     void setr(int r){
//         this->r=r;
//     }
//     void seti(int i){
//         this->i=i;
//     }
//     int getr(){
//         return r;
//     }
//     int geti(){
//         return i;
//     }
//     friend complex operator +(complex a, complex b);
// };
// complex operator+(complex a, complex b){
//     complex c;
//     c.r = a.r+b.r;
//     c.i = a.i+b.i;
//     return c;
// }
// int main(){
//     complex a,b,c;
//     a.seti(10);
//     b.seti(10);
//     a.setr(10);
//     b.setr(10);
//     c = a + b;

//     cout<<c.geti()<<" "<<c.getr()<<endl;
//     return 0;
// }

// operator overloading in memberfunction to add two complex numbers

// #include <iostream>
// using namespace std;
// class complex{
//         int r;
//     int i;
//     public:
//     void setr(int r){
//         this->r=r;
//     }
//     void seti(int i){
//         this->i=i;
//     }
//     int getr(){
//         return r;
//     }
//     int geti(){
//         return i;
//     }
//     complex operator+(complex b){
//         complex c;
//         c.r = r+b.r;
//         c.i = i+b.i;
//         return c;
//     }
// };
// int main(){
//     complex a,b,c;
//     a.seti(10);
//     b.seti(10);
//     a.setr(10);
//     b.setr(10);
//     c = a + b;

//     cout<<c.geti()<<" "<<c.getr()<<endl;

//     return 0;
// }


// Write a C++ program that uses a static member function to count the number of objects created for a class.

// #include <iostream>
// using namespace std;
// class a{
//     static int b;
//     public:
//     a(){
//         b++;
//     }
//     int getb(){
//         return b;
//     }
// };
// int a::b = 0;
// int main (){
//     a c,d,e,f,g;
    
//     cout<<"Number of the objects creared are "<<c.getb()<<endl;
//     return 0;
// }

/* Write a C++ program that uses an array of objects to display the details of 5 students (roll number, name, and marks).
 */


// #include <iostream>
// using namspace std;
// class student{
//     int roll number;
//     string name;
// };
// int main(){
//     return 0;
// }



// Write a C++ program that uses parameterized constructors to initialize the data members of a class and display them.


// Parametrized ctor

// #include <iostream>
// using namespace std;
// class a{
//     public:
//     int c;
//     int b;
//     a(int c, int b){
//         this->c =c;
//         this->b =b;
//     }
// };
// int main (){
//     a obj(10,20);
//     a obj2 = a(10,20);
//     cout<<obj.c<<" "<<obj.b<<endl;
//     return 0;
// }


#include <iostream>
using namespace std;
class c {
    public:
    int a =5;
    int b ;
    c(int x, int y){
        a = x;
        b = y;
    }
    void getb(int b){
        this-> b = b;
    }
    c(c &obj){
        a= 
    }
};
int main(){
    c obj1(10,20);
    // obj1.getb(10);
    c obj2 = obj1;
    cout<<obj2.b<<endl;
    return 0;
}
/*
Learnings - class ka number or data member ka naam same nahi ho skta kisi bhi halat main
- agr aap friend function bnare ho toh usme aapko object pass krna hi pdega and then you can directly access the elements of that object 
- jab overloading member function se hogi toh first part or the first parameter will be bassed without dot operator
- static class ke bahar initialise hoga and usko ese likhega int b::a = 0;
- object bnate hi ctor call krna h badme nahi chalega ex - a obj(10,20);

*/
/*

Write a C++ program that uses dynamic memory allocation to create an array of integers and then delete it using the delete operator.

*/