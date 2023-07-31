#include <iostream>
using namespace std;
/* header files are of two types 
1. System header files - it comes with compiler
example - #include <iostream>
2. user defined header files - it is written by programmer
example- #include "this.h"--> this will produce an error if "this.h" is not included in the current directory
there is a complete list for this if you want to find the whole list of header you want to use in c++ just go to google.com and search "cpp reference for header files" --> if you need any kinda reference realted to c++ just go on cpp reference website "https://en.cppreference.com/"
---> <<endl can be used in place of \n
---> shortcut for multi cursor or make copy of above line of code  is alt+shit and drag with mouse or select with mouse
*/
int main() {
  int a=4, b=5;
  cout<<"operators in C++"<<endl;
  cout<<"following are the types of operators in C++"<<endl;
  //Arithmetic operators
  cout<<"The value of a + b is "<<a+b<<endl;
  cout<<"The value of a - b is "<<a-b<<endl;
  cout<<"The value of a / b is "<<a/b<<endl;// the real ans would be 0.8 but as it is an integer so the ans will also be in integer that's why the output is only 0
  cout<<"The value of a * b is "<<a*b<<endl;
  cout<<"The value of a % b is "<<a%b<<endl; // % stands for modulues
  cout<<"The value of a ++ is "<<a++<<endl; // it means print a and add +1 in a, now the the next line, the value of a is 5
  cout<<"The value of a -- is "<<a--<<endl; // it means print a and then do -1 from a, now for the nect line the value of a is 4
  cout<<"The value of ++a is "<<++a<<endl; // it meas increase the value of a by one and then print a
  cout<<"The value of --a is "<<--a<<endl; // it means decrease the value of a by one and then print a 
  cout<<endl;
  
  
  /* Assignment operators --> use to assign value to variables
  for example
  int a = 9, b = 10;
  char d = 'd'; */

  // Comparison operators ---> use to compare values
  // as a rule of C++ u have to use () otherwise program will get confused ki konsa operation cout ko dena h
  cout<<"The value of a == b is "<<(a==b)<<endl; // equal to
  cout<<"The value of a != b is "<<(a!=b)<<endl; // not equal to
  cout<<"The value of a >  b is "<<(a>b)<<endl; // greater than
  cout<<"The value of a < b is "<<(a<b)<<endl; // less than
  cout<<"The value of a <= b is "<<(a<=b)<<endl; // less then or equal to
  cout<<"The value of a >= b is "<<(a>=b)<<endl; // greater than or equal to
  cout<< endl;

  // Logical operators
  cout<<"following are the types of logical operators"<<endl;
  cout<<endl;
  //give parathesis to the whole function otherwise complier will be confused
  cout<<"The value of this logic and operator is : ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl; // logical and operator
  cout<<"The value of this logic or operator is : ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl; // logical or operator,either one of them is true
  cout<<"The value of this logic not operator is : (!(a==b)) is "<<(!(a==b))<<endl; // logical not operator,result ka ulta kr deta h

  // Bitwise operators to be covered later
  
  return 0;
}