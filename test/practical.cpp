// OBJECTIVES 
/*
1. Overload "+" operator to carry out concatination of two strings
2. overload "=" to carry copy string to another 
3. overload "==" to compare two strings
4. function to find the length of the string
5. function to lowe case
6. function to upper case

*/


#include <bits/stdc++.h>
using namespace std;
class str{
    public:
    string s;
    str(string s){
        this->s =s;
    }
    str(){}

    str operator+(str obj){
        str temp;
        temp.s = s.append(obj.s);
        return temp;
    }
    bool operator==(str obj){
        if(s.compare(obj.s) ==0 ){
            return true;
        }
        else {
            return false;
        }
    }

    int leng(){
        int temp;
        temp = s.length(); // you cannot pass arguments inside "()" i donno for some reasons in any inbuilt function
        return temp;
    }

    // Lowercase
    void low(){
        string u;
        int i=0;
        while(i!='\0'){
            u[i] += toupper(s[i]);
            i++;
        }
        cout<< u <<endl;
    }
};
using namespace std;
int main(){
    str s4("ujjwal"),s5("ujjwal"),s6("ujjwal");
    s6.low();
    // cout<<s6.s<<endl;
    if(s4==s5){
        cout<<"Equal"<<endl;
    }
    else{
        cout<<"Not Equal"<<endl;
    }
    int l = s4.leng();
    cout<<"The length of the string is: "<<l<<endl;
    // int choice;
    // cout<<"Which operation you want to perform? "<<endl;
    // cout<<"1. Concatination\n2. copy\n3. comparison of two strings\n4. Find the Length of string\n5. Perform Lower Case operation\n6. Perform Upper Case Operation\n";
    // cin>>choice;
    // switch(choice){
    //     case 1: str s1("Ujjwal"),s2(" Sharma"), s3;
    //             s3 = s1+s2;
    //             cout<<"Initial value passed in object one is Ujjwal and Sharma to the object 2"<<endl;
    //             cout<<s3.s<<endl;
    //             break;
    //     case 2: 
    //     case 3: 
    // }
    return 0;
}


// Find the different btween strcat() ans s. append(s1)