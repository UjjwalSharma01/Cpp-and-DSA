//************************* Arrays ******************************
#include<iostream>
using namespace std;

/* Arrays are just the simple collection of data stored in memory (check the hectic definition from notes screenshot) usually used when we have to use multiple data of same kind  so individually writing and alloting each variable is not a very feasible process so we make arrays instead of that 
Arrays are used to combine same type of data
for ex - if we want to store marks of 2500 students then its a very hecting/non feasable task to define "int" for every single variable because there will be 2500 line doing this process only and then after defining the we also have to perform certain ooperations on that, so intead of that we will be defining an array with size 2500 to store those values
----> Defining an Array - int marks[2500] = {values} ; here this is an integer array which can store upto 2500 integers
-----> Acessing Elements of an Array - marks[1] , marks[2] , marks[3] ; so by putting these kinda general numbers in "[]" you can access the elements of an array.
*/

int main(){
  //Array example
  int marks[] = {23,45,56,67}; /*it is not compulsory to write [4] in between you can leave "[]" this box emply like this, c++ will auto detech that the number of values are 4  */
  cout<<"These are marks :"<<endl;
  cout<<endl;
  cout<<marks[0]<<endl; //since indexing starts from zero
  cout<<marks[1]<<endl;
  // int marks[2] = 120;** mistake made by me, if you put int again it will redifine it and will show an error out of it ,so you don't need to type "int"again while chaanging the values of array.
  marks[3] = 100; // value will change from "56" to "100" by this code, print hone se pehle pehle change krna h bas
  cout<<marks[2]<<endl;  
  cout<<marks[3]<<endl; 

  // other way of defining an array
  int math[4];
  math[0] = 2278;// can be defined individually
  math[1] = 738;
  math[2] = 378;
  math[3] = 578;
  cout<<endl;
  cout<<"These are math marks :"<<endl;
  cout<<endl;
  cout<<math[0]<<endl; //since indexing starts from zero
  cout<<math[1]<<endl;
  cout<<math[2]<<endl; 
  cout<<math[3]<<endl; 
  cout<<endl;

  int i = 0; // always define the value of i otherwise either it will show an error or will ignore the loop
  
  /*printing these values using for loop instead of "cout" again and again*/
  
 /* cout<<"I'm printing these values using for loop"<<endl;
  cout<<endl;
  for(int i = 0;i < 4; i++){
    cout<<marks[i]<<endl;
  } */
   do{
    cout<<"using do while loop "<<marks[i]<<endl;
    i++;
  }
    while(i < 4);
  cout<<endl;

  /* while (i<4){
    cout<<"using while loop "<<marks[i]<<endl;
    i++;
  } */


  //*************************** POinters and Arrays*************************************

  /*so normally if we have a int variable when we need to find the address of that integer we use the quer "&" but in case of arrays the name of array intself is the address of the first block of array and you should not use "&" in case of array otherwise it will give you an error 

----> Pointer arithmetic formula - address new =  address cureent +i*(size of data type)*/

  int* p = marks;
  cout<<"The value at marks[0] is : "<<*p<<endl;// deference variable used to extract the actual data stored in the address of Pointer
  cout<<"The value at marks[1] is : "<<*(p+1)<<endl;
  cout<<"The value at marks[2] is : "<<*(p+2)<<endl;
  cout<<"The value at marks[3] is : "<<*(p+3)<<endl; // you need to put these "()" otherwise code won't work
  
  return 0 ;
}
/* *******************Some Important Points ************************* 
1. in c++ indexing/counting starts from 0
2. Hand written important notes by harry -  https://www.notion.so/ujjwalsharma/Arrays-Pointers-Arithmetic-in-C-78b3022690fd48249f62f3c0f07fccb1
*/
// ******************** SOURCE CODE **********************

/* #include<iostream>
using namespace std;

int main(){
    // Array Example
    int marks[] = {23, 45, 56, 89};

    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    // You can change the value of an array
    marks[2] = 455;
    cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    // Quick quiz: do the same using while and do-while loops?

    // Pointers and arrays
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 
    
    return 0;
} */
