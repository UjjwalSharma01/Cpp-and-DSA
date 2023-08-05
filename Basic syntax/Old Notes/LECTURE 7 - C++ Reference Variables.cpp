//LECTURE 7 - C++ Reference Variables & Typecasting 
#include <iostream>
using namespace std;
int c = 45;
int main() {

  /* *************Build in Data types****************
   int a, b, c;
   cout<<"Enter the value of a:"<<endl;
   cin>>a;
   cout<<"Enter the value of b:"<<endl;
   cin>>b;
   c = a + b;
   cout<<"The sum is "<<c<<endl;
   cout<<"The global c is "<<::c; ---> "::" is called scope resolution operatorse when you want to use global variable instead of local because preceding of local is higher than the gobal variable 


   ************* Float, double and long double Literals****************
   float d=34.4F; // by default in c++ if both double and float having the same value then c++ will consider that value as double so you need to specify the type of variable by putting "F"or "L" you can wither use small or capital letters
   long double e = 34.4L;
   cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
   cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
   cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
   cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
   cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
   cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;

   *************Reference Variables****************
   use when you want to call a value with two different variables/names or references
   Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
   float x = 455;
   float & y = x; it means y is a reference variable pointing towards x or you can say the value of x and y is same
   cout<<x<<endl;
   cout<<y<<endl;

   *************Typecasting**************** 
   typecasting means to convert one variable to other one for example if you want to convert double to float or integer to float kinda things */
  int a = 45;
  float b = 45.46;
  cout << "The value of a is " << (float)a << endl; // not a was a integer but by using this syntax its datatype now being converted to float no other changes are made
  cout << "The value of a is " << float(a) << endl;

  cout << "The value of b is " << (int)b << endl; // both syntax are similar
  cout << "The value of b is " << int(b) << endl;
  int c = int(b);

  cout << "The expression is " << a + b << endl;
  cout << "The expression is " << a + int(b) << endl;
  cout << "The expression is " << a + (int)b << endl;

  return 0;
}
