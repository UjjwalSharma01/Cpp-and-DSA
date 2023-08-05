// LECTURE 4  data types and variable scope
#include <iostream>
using namespace std;
int b = 4; // priority will be given to local scope variable 
int main() {
  int a = 9; 
  int b = 9;
  float pi = 3.14;
  cout<<"this is practice session,\n the value of a is "<<a<<", and the value of b is "<<b; //u need to put it like this.
  cout<< " the value of pi is "<<pi ;
  return 0;
}

/* \n is used as a line break. only one char at a time is being used in chat daya type 
global and local variabke can be of same name but local variable to jaada importance di jaegi
if value of boolean is true then the output will be 1 else 0 */
 