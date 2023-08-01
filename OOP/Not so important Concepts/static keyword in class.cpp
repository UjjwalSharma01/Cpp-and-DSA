/*
CONCEPT


in short agr kisi member ya function ko sabhi objects ke liye same rkhna ho
static function main static members hi pass hoge because it doesn't contain "this->" pointer




static keyword in classes

classes-  bunndle of custom data membersc-> instances of class -> objects
there is a this pointer pointing to the individual object within the class


STATIC KEY DATA MEMBER
that variable is going to share memory with all of the class instances
-> ek members sabke saath share hoga
-> summary -> sabke apne apne members nahi hoge object classs ka hoga which will be same for all the objects

STATIC MEMBER FUNCTION
there no instance of that class being passed into that method

in the simple execution of classes and objects in the below execution code we have seen that x and y of both objects are different/unique for each other,
but now we will create X and Y which will be shared between two objects
-> method puri class ka hoga kisi particulat object ka nahi
-> method ke andr this-> pointer exist hi nahi krta
->summary -> this pointer doesn't exist in this and it's common for all the objects of that class -> it cannot differentiate betwee x and y of other objects so you can't access them
*/


#include <bits/stdc++.h>
using namespace std;

// class abc{
//     public:
//     int x ,y;
//     void print()const
//     {
//         cout<<x<<" "<<y<<endl;
//     }
// };


// EXCUTION OF STATIC KEYWORD
class abc{
    public:
    static int x ,y; //static function main access krne ke liye ye bhi static hone chahiye
    static void print()
    {
        cout<<x<<" "<<y<<endl;
    }
};

// intialisation
int abc::x; //definiting that x and y are related to all the instances made via this class
int abc::y;
int main () {
//     abc obj1;
//     obj1.x=1;
//     obj1.y=2;
//     abc obj2;
//     obj2.x=4;
//     obj2.y=5;
//     obj1.print();
//     obj2.print();



// execution of STATIC KEYWORD



    abc obj1;
    obj1.x=1; // alteratively -> abc::x=1;
    obj1.y=2; // abc::y=1;
    abc::print();
    abc obj2;
    obj2.x=4; // x and y will be changed for all the instances
    obj2.y=5;
    abc::print();
    cout<<endl;
    obj1.print(); // alternatively should be written as abc::print();
    return 0;
}