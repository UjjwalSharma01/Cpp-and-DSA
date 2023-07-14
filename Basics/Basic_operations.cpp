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
  return 0;
}