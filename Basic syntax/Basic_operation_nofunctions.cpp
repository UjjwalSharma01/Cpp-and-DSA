// #include <bits/stdc++.h>
// using namespace std;
// int main () {
//   cout<<"Ujjwal Sharma"<<endl;
//   int a;
//   cin >> a;
//   cout<<"the value is"<<a;
//   return 0;
// }

// datatypes
#include <bits/stdc++.h>
using namespace std;
int main (){
  // long
  long b=15;
  // long long
  long long c =15;
  // float and double
  float y = 5;
  cout << "hello"<<endl;
  // string
  // it conclude the value given before the space or the enter
  // in order to overcome this use 
  string str1;
  // getline (cin,str1);
  // cout<<str1<<endl; 
  // char
  char ch1 = 'g';
  // datatypes should be be used in a way that they do not consume the more memory than the required one
  // learn the range of each datatype in the round of figure in 10 to the power

  // write a program that takes an input of agee
  // and prints if you are adult or not

  int a;
  // cout<<"please enter the age"<<endl;
  // cin >> a;
  // if(a>=18){
  //   cout<<"you are an adult"<<endl;
  // }
  // else {
  //   cout<< "you are not an adult"<<endl;
  // }

  cout<<"Enter your marks : "<<endl;
  cin >> a;
  if(80<a<100){
    cout<<"A"<<endl;
  }
  else if (60 <a<70){
    cout <<"B"<<endl;
  }
  else if (50 <a<59){
    cout <<"C"<<endl;
  }else if (45 <a<49){
    cout <<"D"<<endl;
  }
  else if (25 <a<44){
    cout <<"E"<<endl;
  }else if (25<a){
    cout <<"F"<<endl;
  }

  // THIS IS BIT OF MORE MATHEMATICAL INSTEAD USE 
  // if (a>20 && a<50) for multiple statement

  // switch case statements
  // used when we have limited number of possible outcomes and we have to give the output based on that 
  /*important point to remember in this is
  1. use the break statement after each case otherwise all the cases below the condition satisfying case till be executed 
  2. use the "default tag in case there is any other command given"
  */
//   array
/*used to store the multiple data of similar datatype, no matter if it's a character or the integer */
// basic syntax of array
// defining an array
int arr[10] = {10,120,13201,313,1,3,4242,2424,3,45};
// indexing starts from zero and goes till n-1 of the defined number in the array
cout<<arr[0]<<endl;
// everything has to be off similar data type in an array, it stores only homogenous data, array elements are stored in consecutive memory addressed but we do not know about the address of the first one
// after getting the address of the first one we can consequtively find the another one

/*there are two types of arrays , 1D array and 2d array*/
/* *************************** String ************************

it also stores the items in terms of the index starting from the zeroth index , the last index will be the length -1*/
string s = "ujjwal";
int len = s.size();
cout<<len;
cout<<s[len -1]<<endl; // to get the last member of the string using the lenght as a parameter


/*Loops*/
// For Loop
for(int i =1;i<=10;i++){
  cout<<"ujjwal sharma"<<endl;
}
// it goes by the format (initialization, condition, updation)
// now if i try to print the value of "i" it won't recognize it because it is limited to the space where it is defined , it is having local scope
// in order to get the value of "i", i need to define it outside of the fore loop and then i can print the value of for ex-

int k;
for(k =1;k<90;k++){
  cout<<"ujjwal sharma"<<" the value of k is "<<k<<endl;// using this syntax we can print the value of K and the for loop statment simultaneously

}

// While loop
/* it first checks the condition of the variabler and then get into the iteration*/
// syntax

int n =1;
while(n<5) {
  cout<< "executing while loop "<<n<<endl;
  n++;
}
/* it goes by the syntax
declaration
condition {
  execution
  updation
}
*/



// do while loop it is used when you want your line of code to be executed minimum one time independent of the conditon
do {
  cout<<"ujjwal sharma"<<endl;
}while (n<10);

 return 0;
}