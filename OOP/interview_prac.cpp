#include <bits\stdc++.h>
using namespace std;

class animal{
        public:
        animal(){ //constructor
            cout<<"im inside the animal -> constructor"<<endl;   
        }
        void speak(){
            cout<<"Speaking"<<endl;
        }
    };

    class dog:public animal{
        public:
        dog(){ //constructor
            cout<<"im inside the Dog -> constructor"<<endl;   
        }  
    };

int main(){

    // ANIMAL KA CONSTRUCTOR CALL HOGA
    // animal *a = new animal();
    // a->speak();


    // Dono ka consturctor call hoga but print barking hoga
    // animal *a = new dog();
    // a->speak();


    // AGAIN DONO CONSTRUCTOR AND BARKING
    // this is the behaviour of inhertiance pehle parent class ka constructor call hoga and then child ke constructor and functions

    // dog *a = new dog();
    // a->speak();

    // SIRF ANIMAL KA CONSTRUCTOR CALL HOGA, because animal type ka consturctor kisipe depend nahi krta
    dog *a = (dog*)new animal();
    a->speak();


    return 0;
}


/* NOTES
tumne kis type ka object bnaya h that depends upon the right side of the new, heap main dog type ka constructor call hoga
but refer kaise kree ho -> animal ke pointer se
  dog *a = new dog();
    a->speak();



the new <object> jispe depend krra h uska and us object ke khudka constuctor call hoga

focus on the object near the new - > fir check krna ki kispe dependent h



WHY YOU DO UPCASTIMG NA DOWNCASTING

we generally do upcasting only
sort* a - new quicksort();

*/