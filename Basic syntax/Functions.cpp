/*functions*/
// functions are the set of program which performs a certain task
// functions are called modularise code
// functions are used to increase readability
// functions are used to use same code multiple time 


/* types of functions
void  -> which doesn't return anything, it will perform a task and it wont return anything
return
paramterided
non-paramterided*/



#include <bits/stdc++.h>
using namespace std;
void printname(){ // simple void function
  std::cout<< "Ujjwal Sharma"<<endl;
}
// now if i want a different name to be printed, then i can't do it beacause this function doesn't take anything as the parameter
// so in order to something similar to my idea we need to define a function which takes some parameter into account
void name2(string name){ // void and pramaterised function
  cout<<"hey "<<name<<endl; //this function right here takes the value as in input as a parameter and gives the output accodingly

}

int sum(int a, int b){ // example of a return function, the function is performing a certain task and returning one value as the output or in the name of completion
  return a+b;
}

// pass by value and pass by reference example 

void dosth(int l){
  cout<<l<<endl;
  l +=10;
  cout<<l<<endl;
  l +=10;
  cout<<l<<endl;
  l +=10;
  cout<<l<<endl;
  l+=10;
}

// pass by reference 
// void dosth(int &l){ // just add "&" symbol;
//   cout<<l<<endl;
//   l +=10;
//   cout<<l<<endl;
//   l +=10;
//   cout<<l<<endl;
//   l +=10;
//   cout<<l<<endl;
//   l+=10;
// }
int main (){
    printname();
    string name;
    cin>>name;
    name2(name);
    // we can reuse it again and again for printing different name at different places here comes the readablity and the usability comes into the picture

    /* take two numbers and prints its sum*/
    int a,b;
    cin>>a;
    cin>>b;
    sum(a,b);






    /*
    
    -> concept of pass by value and pass by reference 

    1. pass by value 
    when we passed the variable to the function "dosth" it passed the copy of the original component in the memory and did all the operations with it and gave the output
    meanwhile the original value of the variable didn't changed and it will reflect the value you passed it as the input 
    this concept is known as pass by value

    2. pass by reference
    here reference means address as, we saw in the paas by value example, when we pass the value of the valriable it took the value of variable and copied it passed to the function
    did operations with it , returned the value , but here what we gonna do is we will pe passing the address of the actual variable to all the changes that will be happending tot hat variable
    will happen with the original number
    
    */
   int l;
   cout<<"input the value of x "<<endl;
   cin>>l;
   dosth(l); //if it is a return type function you have to specify "int" before it`
   cout<<"the value of x in the final version is: "<<l<<endl;
   // the value is not changed as per the incerement in the "dosth"function we gave the variable value = 90 and after incrementing it via function it still is 90 
  //  while in the function it is clearly visibible that it is gone upto 120 as the per the requirements

  
    return 0;
}
/*
Points to remember, every time you are writing an int type function, make sure to write the return statement,
otherwise you gonna get  a garbage value

array is always passed with reference 
*/