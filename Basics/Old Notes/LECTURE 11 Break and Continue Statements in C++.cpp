//LECTURE 11 Break and Continue Statements in C++
#include<iostream>
using namespace std;

int main() {
  /********** Break Statement ********
  for(int i=0;i<4;i++){
    cout<<i<<endl;
    if(i==2){
      break;//it will come out of the code to the end, 2 bhi aaega because cou function is before this statement and agr uss function ko iske neeche likhenge toh 2 aate hi bahar aa jaega + 2 print nahi hoga ("used only in loops ")
    }
  }*/
  for (int i = 0; i <= 40; i++)
    {
        if(i==2){
            continue;//it won't print 2 jaise hi 2 aaega it will say jo neeche likhi hui iteration h use rokdo and continue kro
        }
        cout<<i<<endl;
    }

  return 0;
  }
/************ Some Important Points ********************* 
-------> break ka matlab h bas ab code se bahar nikal jai 
-------> continue ka matlab h ki abhi jo iteration h /abhi jo code selected h usko bas yahi pe rokdo , agle code pe chale jao*/

/*  *********** ORIGINAL SOURCE CODE ***********  
#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 40; i++)
    // {
    //     if(i==2){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }
    for (int i = 0; i < 40; i++)
    {
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }

    
    return 0;
}

*/
