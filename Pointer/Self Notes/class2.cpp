/* CONCEPTS -> also check codes , dhynan se 

Arrays and pointers

-> the name of array itself defines the base code

in symbol table 
arr is mapped with -> some address and uska khudka alag address alag nahi h
kuch bhi lgalo ye dega base address hi

*arr will show the value of the first memember of the array

********************************************************************************************************************************************************************************************************

DIFFERENCE BETWEEN AN ARRAY AND POINTER

1.

-> SIZE  -> size of array (size of one element * number of element) -> size of pointer -> constant = 8 (system architecture / compiler dependent)
-> array -> name -> sizeof() -> total space taken by array
-> pointer -> sizeof() -> constant -> architecture dependent


2.
array = arr+1 -> not possible -> we can't change value in symbol table -> you can perfrom artrithmetic operations(ex -> p =arr+1;) but cannot change it -> it's a constant Pointer value (FINAL)
pointer = pointer +1 -> possible -> pointer will shift and will point towards the next memory location -> shift will happen according to the datatypw

****************************************************************************************************************************************************************************************************
        CHAR -> enclosed in ''  quotes -> string enclosed in "" quotes

-> impelementation of "cout" is different for int type and char type array -> jabtak null character nahi milta , print krte rho
-> int type cout<<arr<<endl;- > gives the base address
-> char type cout<<ch<<endl -> gives the entire string

-> ek memory location ko multiple name de skte h, it's possible




************************************************************************************************************************************************************************************************************

POINTER WITH FUNCTIONS

->
*/



#include <bits\stdc++.h>
using namespace std;
int main(){
    int arr[4] = {22,33,11136,13428};

    // REMEMBER
    cout<<arr[0]<<endl;
    cout<<arr<<endl; // gives base address
    cout<<&arr[0]<<endl; // gives base address
    cout<<&arr<<endl; // gives base address

    int* p = arr;
    cout<<p<<endl;
    cout<<&p<<endl; // isme dono ki value alag aaegi but array main same aaegi



    // playing with pointers of the 
    cout<<*arr<<endl; // will print 22
    cout<<*arr +1<<endl; // will print 23
    cout<<*(arr +1)<<endl; // will print the second member of the array
    cout<<arr[1]<<endl; // it is resolved as the same the above statement and both statements will give the same value 
    // this basically means is go to base address and move forward by one int since it's a integer type array

    // *************************************************************************************************************888

    // NEW WAY OF WRITING / DIFFERENT WAY OF WRITING THINGS
    cout<<1[arr]<<endl; // it's working and important 
    cout<<*(1+arr)<<endl;
    // arr = arr+2; // cannot be done -> because be cannot change the value under symbol table
    // but we can access the sub-part of the array using this

    cout<<"size of the pointer is "<<sizeof(p)<<endl;




    // char array

//     char ch[13] =  "ujjwalsharma"; // -> there is a null character at the end
//     char* cptr = ch;

//     cout<<"starting char array: "<<endl;

//     cout<<ch<<endl; // address ki jagah naam aaega pura - > behaviour or implementation of cout is different
// // tabtak print hoga jabtak null character nahi mil jaata
//     cout<<&ch<<endl; // gives the base address
//     cout<<ch[0]<<endl; // char-> at zeroth location
//     cout<<*ch<<endl; // -> gives the first character
//     // -> *ch = *(ch+0) -> ch[0];
//     // -> *(ch+0) -> ch[1];
//     cout<<ch+2<<endl; // -> second character se leke end tak puri string print hogi
//     cout<<cptr<<endl; // -> will peint the entire string (FASEGE)

//     cout<< "char array ends here"<<endl;
//     cout<<endl;


// THE MOST CONFUSING PART OF POINTER
// CONFUSE - > string main null character apne aap insert hota h 

    // char c = 'k';
    // char* u = &c;

    // cout<< u <<endl; // -> will print a garbage value with it because there is no null character after k





    char name[13] = "ujjwalsharma"; //-> will print the entire name
    cout<<name<<endl;
/* STEPS
 
 -> Temp storage -> "ujjwalsharma"
 -> memory change -> copy to name array ki storage (permanent storage)
 */
    char* c = "ujjwalsharma"; // -> this will also print the entire name -> BAD PRACTICE
    cout<<c<<endl;
/* STEPS
 
 -> Temp storage -> "ujjwalsharma"
 -> memory change -> c pointer points to the first practice
 */
    return 0;
}