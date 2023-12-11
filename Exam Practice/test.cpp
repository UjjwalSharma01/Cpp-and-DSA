// #include <iostream>

// using namespace std;

// class LIST {
// public:
//     virtual void store(int value) = 0;
//     virtual int retrieve() = 0;
// };

// class Stack : public LIST {
// private:
//     int stack[100];
//     int top;

// public:
//     Stack() : top(-1) {}

//     void store(int value) override {
//         if (top < 99) {
//             stack[++top] = value;
//         } else {
//             cout << "Stack is full. Cannot store more values.\n";
//         }
//     }

//     int retrieve() override {
//         if (top >= 0) {
//             int value = stack[top--];
//             return value;
//         } else {
//             cout << "Stack is empty. Cannot retrieve a value.\n";
//             return -1;
//         }
//     }
// };

// class Queue : public LIST {
// private:
//     int queue[100];
//     int front, rear;

// public:
//     Queue() : front(-1), rear(-1) {}

//     void store(int value) override {
//         if (rear < 99) {
//             if (front == -1) {
//                 front = 0;
//             }
//             queue[++rear] = value;
//         } else {
//             cout << "Queue is full. Cannot store more values.\n";
//         }
//     }

//     int retrieve() override {
//         if (front <= rear && front != -1) {
//             int value = queue[front++];
//             if (front > rear) {
//                 front = rear = -1;
//             }
//             return value;
//         } else {
//             cout << "Queue is empty. Cannot retrieve a value.\n";
//             return -1;
//         }
//     }
// };

// int main() {
//     Stack myStack;
//     Queue myQueue;

//     myStack.store(10);
//     myStack.store(20);
//     myStack.store(30);
//     cout << "Retrieved from stack: " << myStack.retrieve() << endl;
//     cout << "Retrieved from stack: " << myStack.retrieve() << endl;

//     myQueue.store(5);
//     myQueue.store(15);
//     myQueue.store(25);
//     cout << "Retrieved from queue: " << myQueue.retrieve() << endl;
//     cout << "Retrieved from queue: " << myQueue.retrieve() << endl;

//     return 0;
// }


#include <iostream>
#include <cmath>
using namespace std;
#define tol 0.00001


double function(int x){
    return x * x * x - 8 * x - 3;
}
double bisection(double x, double y){
    double mid, approx;
    int itr = 0;
    while(fabs(x-y)>tol){
        mid = (x+y)/2.0;
        approx = function(mid);
        cout<<"iteration "<<++itr<<" approximation = "<<approx<<endl;
        if(approx * function(x)<0){
            y= mid;
        }
        else{
            x = mid;
        }
return mid;
    }
}
int main(){
    double a,b;
    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;

    cout<<"Accurate root is "<<bisection(a,b);
    return 0;
}