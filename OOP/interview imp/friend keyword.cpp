/*
CONCEPTS
-> screenshot

used to share information of the class which was previously hidden/private maked
for example private members are hidden from all other classes and the only way of modification is getters and setters similarly the protected members
are hiddem from all the classes excpet children classes

mainly used in hertiance when the child class is inherited in the protected scope and you also want to access the public members of the parent class in the child class
-> check the inheritance table for more clarity



FRIEND KEYWORD


agr aap friend ho toh ek dusre ki private cheeze and gossip share kr skte ho

exampl of friend class -> #1

example of friend function -> #2



cons

-> to be avoided in real world because it makes the maintainablity of the code harder


*/

#include <bits/stdc++.h>
using namespace std;

class A {
private:
    int x;

public:
    A(int _val) : x(_val) {}

    // getter and setter for x 
    int getX()const {
        return x;
    }

    void setX(int value) {
        this->x = value;
    }
    friend class B; // B mera friend h -> example of friend class #1
    friend void print( const A&a); // #2
};

class B {
public:
    void print(const A &a) {
        // cout << a.getX() << endl; // error aaega because getx is not constant -> make it constant 
        cout<<a.x<<endl; // i cannot directly access because it's a private member but i want that it should be accessible to class b not the whole world but class b so we will use the concept of friend keyword
        // agr aap friend ho toh ek dusre ki private cheeze and gossip share kr skte ho
    }
};

void print( const A&a){
    cout<<a.x<<endl; //#2
}

int main() {
    A a(5); // object creation using the constructor
    B b;
    b.print(a);
    print(a);

    return 0;
}


/*

INTERVIEW QUESTION

private keyword kya krta h?
and how can you access the members of the private class - using friend keyword

*/