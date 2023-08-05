//************** Structures, Unions & Enums in C++ ***************
#include <iostream>
/* The structure is a user-defined data type that is used to combine different types of data types unlike array which is used to combine data of same datatype*/
using namespace std;
typedef struct employee{ // can be used both in global and local scope as per the usecase
  int eID; // 4
  char favchar; // 1
  float salary; // 4
}ep;
/*Unions - Unions are similar to structures but they provide better memory management than 
 structures.*/

typedef union money{ //currency naapi jaa rhi h yahape
  int rice; //let's assume this consumes 4bytes of data similarly 2 others
  char car; // 1
  float pounds; // 3
}uj; // ab ye jo money ko hamne define kia h vo ek time pr ham ek use krenge mtlb ya toh rice exchange ya fir we'll just simply use pounds to calculate it like that

// if we want to use one thing out of many at a time than we can use the superpower of c++ that is memmory management , wwhich can be done by union

// now c++ will use a shared memory in between of these 3 variables like it will be alloting 4 bytes to this function and itne main teeno ka kaam ho jaega while in the case of stuctrue 9bytes of memory will be used

int main() {
  uj m1; // as we have defined "ujjwal" above "m1" is same like that 
  m1.pounds = 2;
  cout<<m1.pounds<<" these is the output of union"<<endl; // if we will use value other than this at the same time , then it will return a garbage value
  /*struct employee ujjwal;*/
  ep ujjwal; /*by using "typedef ep" we can use this code instead of that whole big code*/
  ujjwal.eID = 1;
  ujjwal.favchar = 'b';
  ujjwal.salary = 999999;
  cout<<"The values are: "<<ujjwal.eID<<endl;
  cout<<"The values are: "<<ujjwal.favchar<<endl;
  cout<<"The values are: "<<ujjwal.salary<<endl;


 /*************** Enum ****************** */
  
  return 0;
}


/************** Some Points*************
1. by using "typedef ep" you simply mean that you will be using ep instead of "struct employee" nothing else than that its an optional shortcut to make your work easier  */




/* ***************************** Source code **********************************/

/* #include<iostream>
using namespace std;

typedef struct employee
{
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;

union money
{
    int rice; //4
    char car; //1
    float pounds; //4
};


int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1==2);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner; 
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;

    // ep harry;
    // struct employee shubham;
    // struct employee rohanDas;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout<<"The value is "<<harry.eId<<endl; 
    // cout<<"The value is "<<harry.favChar<<endl; 
    // cout<<"The value is "<<harry.salary<<endl; 
    return 0;
} */
