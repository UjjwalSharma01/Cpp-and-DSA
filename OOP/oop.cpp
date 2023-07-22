#include <bits/stdc++.h>
using namespace std;
int main (){
    // creating of class
    // syntax
    // class animal {

    // };

    // size of the empty class is a
    class ujjwal{
        int age; // 4
        int wt; //4
        char ch; // answer should be 9 but it is coming out to be 12 so find this out

    };
    cout<<"size of the empty class is: "<<sizeof(ujjwal)<<endl;
    // why the answer is one, because if it doesn't occupy the memory we won't be able to identify it
    // so in order ton indentify the particular class we have given it the minumum possible memory i.e 1

// public and private in combo example
    // class animal{
    //     // state or properties
    //     public: // the area below this is public
    //     int age;
    //     private: // the area below this is private
    //     string name;

    //     // behaviour/functions/methods
    //     void eat (){

    //     }
    //     void sleep (){

    //     }

    // };
     class animal{
        // state or properties
        public:
        int age;
        string name;

        // behaviour/functions/methods
        void eat (){
            cout<<"eating"<<endl;
        }
        void sleep (){
            cout<<"sleeping"<<endl;
        }

    };

    // object creation

    // static allocation
    animal ramesh; // we have made an object of animal type which is known as ramesh
// we want to access the property of any object then we have to use dot(.) operator
    ramesh.age = 12; // inserting values
    ramesh.name = "lion";

    cout<<"the age of ramesh is: "<<ramesh.age<<endl;
    cout<<"the name of ramesh is: "<<ramesh.name<<endl;
    ramesh.eat(); // we have to use () in order to call the behavior or the methods otherwwise there will be no difference in calling states and methods
    ramesh.sleep();

    // but if we try to run this code we will get an error saying int decalred is private

    // dynamic allocation

    // function calling

    return 0;
}
// what is padding and greedy alignment

//  access modifier - they define the scope of your access
// if a state or behavior is public then we can access it inside the class and outside the class both
// 1. public
// 2. Private - if a state or behavior is private marked then we can only access it inside the class only and by default all the members are private marked
// members -  states and behaviour
// 3. Protected (will do in the nex class)

// so to public mark the access modifier we have to use the keyword public

/*
Before 

    class animal{
        // state or properties
        int age;
        string name;

        // behaviour/functions/methods
        void eat (){

        }
        void sleep (){

        }

    };


AFter 


    class animal{
        // state or properties
        public:
        int age;
        string name;

        // behaviour/functions/methods
        void eat (){

        }
        void sleep (){

        }

    };



*/