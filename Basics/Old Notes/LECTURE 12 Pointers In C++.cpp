// Pointers in c++
// Pointers in C++
#include<iostream>
using namespace std;

// What is a pointer? ----> Data type (like float, int double etc.) which holds the address of other data types.

int main() {
  int a = 3;
  int* b= &a;//"int* means pointer variable,&" means mpercent  and in pointer it means , address of "a"
  
  
  //"&" --------> (address of){operator} "variable / reference operator/to get the address of pointer"
  cout<<"address of of a is "<<b<<endl;
  cout<<"address of of a is "<<&a<<endl;
  
  
  // now if you want to fetch the value of operator by its address
  // "*" ----------> (value at) dereference operator
  cout<<"the value at address b is "<<*b<<endl; //"*" before be will fetch the value of variable address stored in pointer variable b

  
  // Pointer to pointer concept
  
  int** c = &b; // ek esa pointer jo ki pointers ke address ko store krta h
  cout<<"The address of b is "<<&b<<endl;// this is the address of pointer b
  cout<<"The address of b is "<<c<<endl; 
  cout<<"The value at address c is "<<*c<<endl; // here integer will not appear because the actual value stored in c is the address of b
  cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; // here you will get the integer value because the value stored in the variable of c i.e "b" is a integer value
  return 0;
}

/***************************** important points ****************************
there should be a space between "*" and the defining variable to make the function work*

***************************** some definitions *****************************
when we define a variable , it stores in out memory AKA RAM and then it has a defined address and pointers are the data types to store the address of those variables; example - maine ek room lia kisi hotel main, mughe define kia gaya so mereko obviously ek room alot hoga and there will be a address of that room

*/



// ********************** Source code ***********************

/* #include<iostream>
using namespace std;

int main(){
    // What is a pointer? ----> Data type which holds the address of other data types
    int a=3;
    int* b;
    b = &a;

    // & ---> (Address of) Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * ---> (value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 

    return 0;
} */