//LECTURE 10 For, While and do-while loops in C++
// loops are the block statments which keeps executng repeatedly if you want to run a code with some specific conditons
#include <iostream>

using namespace std;

int main() {
  /*Loops in C++:
  There are three types of loops in C++:
  1. For loop
  2. While Loop
  3. do-While Loop
  Syntax for "for loop"
  for(initialization; condition; updation) {
    loop body(C++ code);
  }
*/
  /*for (int i = 0; i <= 999999; i++) {
    cout<<i<<endl;
  }*/
  /* example of infinite for loop
  for (int i = 1; 34 <= 40; i++) {
  cout<<i<<endl;
  } */
  /*********** while loop ****************** 
  -------->    Syntax 
  while (contions); {
  c++ statements
  }*/
  /*int i=1;
  while (i<=99){
    cout<<i<<endl;
    i++;
  }*/
  //example of infinite while loop
  /*int i=1;
  while (true){
    cout<<i<<endl;
    i++;
  }
  return 0;*/
  /******** Do-While loop********* */
  int i = 0;
  do{
    cout<<i<<endl;
    i++;
  }while(i<=40);//agr condition false hogi toh ek baar toh loop chalega hi ye main difference h
  return 0;
}

/* **************** Some Important Point ************************ 
"int i" in for loop will be executed once only then there will be a loop on conditon and updation
SEQUENCE will be like this after intitial integer value :
condition-----------> loop body ------------> updation ------------> condition , till the condition is false 
QUES. Is infinite For Loop possible?
ANS. Yes , it depends on condtion
--> memory consumption will increase by using infinite loop, so avoid using it.
*/
/* ************ Alternative Code/Original Source Code ***************
#include <iostream>

using namespace std;
int main()
{
/* Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop  */

    /*For loop in C++*/
    // int i=1;
    // cout<<i;
    // i++;

    // Syntax for for loop
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    // for (int i = 1; i <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    // Example of infinite for loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    /*While loop in C++*/
    // Syntax:
    // while(condition)
    // {
    //     C++ statements;
    // }

    //  Printing 1 to 40 using while loop
    // int i=1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of infinite while loop
    // int i = 1;
    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    /* do While loop in C++*/
        // Syntax:
        // do
        // {
        //     C++ statements;
        // }while(condition);
        
    //  Printing 1 to 40 using while loop
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(false);

//    return 0;