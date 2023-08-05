#include <iostream>
using namespace std;
int main() {
  //cout<<"This is tutorial 9 practice";
  int age;
  cout<<"Tell me your age"<<endl;
  cin>>age; 
  // 1. Selection control structure: If else-if else ladder 
  if ((age<18) && (age>0)) { /*used && because fir you cannot come to my party hi print hota cz condition yahi satisfy ho jaati */
    cout<<"You cannot come to my party"<<endl;
  }
  else if (age==18) {
    cout<<"You are a kid and you will get a kid pass"<<endl;
  }
  else if (age>50) {
    cout<<"you are a old man do bhajan at your home";
  }
  else if (age<1) {
    cout<<"you are not born yet unkil";
  }
  else {
    cout<<"you can come to my party"<<endl;
  }

  // 2. Selection control structure: Switch Case statements 
  switch (age){
    case 18: //bindi lagana na bhule
      cout<<"beta bachha h abhi tu"<<endl;
    break; // baki sab neeche ka bhulke successfull termination
    case 22:
      cout<<"omfoo my favourate age number lol"<<endl;
    break;
    case 0:
    cout<<"beta pdhai likhai kro code ke saath na khelo"<<endl;
    break;
    default:
      cout<<"No special cases"<<endl;
    break;
  }
   cout << "done with use cases"<<endl;
  return 0;
}

/************ Some imp notes ***************
switch(jiss variable ki value ko cases main batna chahte h)  
agr break nahi hoga toh saare print ho jaenge, uske neeche wale saare print ho jaenge

------------------------------------------------------------------------- */

/* ************** ALTERNATE CODE ******************
  #include <iostream>

using namespace std;

int main() {
  // cout<<"This is tutorial 9";
  int age;
  cout << "Tell me your age" << endl;
  cin >> age;

  // 1. Selection control structure: If else-if else ladder
  if ((age < 18) && (age > 0)) {
    cout << "You can not come to my party" << endl;
  } else if (age == 18) {
    cout << "You are a kid and you will get a kid pass to the party" << endl;
  } else if (age < 1) {
    cout << "You are not born yet" << endl;
  } else {
    cout << "You can come to the party" << endl;
  }

  // 2. Selection control structure: Switch Case statements
  switch (age) {
  case 18:
    cout << "You are 18" << endl;
    break;
  case 22:
    cout << "You are 22" << endl;
    break;
  case 2:
    cout << "You are 2" << endl;
    break;

  default:
    cout << "No special cases" << endl;
    break;
  }

  cout << "Done with switch case";
  return 0;
} */