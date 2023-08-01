/* concept


global variables -
-> written outside a function
-> accessible to all function -> same copy


Local Variables

-> written inside a function
-> accessible inside that function scope only
-> scoped














*/


#include <bits/stdc++.h>
using namespace std;

int x=2; //global variable
void func(){
    int x=60;
    cout<<x<<endl;
    cout<<::x<<endl;
}
int main(){
    x=4; //global x
    int x =20; //local to main function -> this will be printed -> most local variable ko same preference milti h

    cout<<x<<endl;

    cout<<::x<<endl; // accesing global variable with ::

    {
        int x =50;
        cout<<x<<endl; // most local is 50
        // you cannot access 20 wala x here but global one can be accessed

        cout <<"again accessing global x "<<::x<<endl;
    }
    func();
    return 0;
}