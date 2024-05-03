/*
what is recursion?
-> bookish ->  when a function calls itself directly or indirectly  
-> Desi -> jab ek bigger problem ka solution depend krta ho, choti and same type ki problem pr -> then we apply recursion

example of bigger and smaller problem

FACTORIAL -> 5! (bigger problem) - > 5X4! (smaller problem)

COUNTING - > reverse counting 
f(n) -> print counting from n to 1
f(5) -> print counting from 5 to 1
f(5) (BIGGER PROBLEM) -> print(5) + f(4) (SMALLER PROBLEM)


REAL LIFE EXAMPLE 
tumhe apne ghr jaana h 10 steps total h (bigger problem) -> tumne ek step lia and now tumhe 9 steps lene h (smaller problem)

FIBONACCI SERIES
0 1 1 2 3 5 8 13 21 . . . . . . . . . . . . .
n = n-1 + n-2
f(n) = f(n-1) + f(n-2) -> one bigger problem is dependent of smaller problem 


COMPONENTS OF RECURSIVE CODE
-> base condition - > rukna kab h -> always use return statement in this
-> recursive relation / call
-> processing (calculations) (optional)

*****************************************************************************************************************************************************************************************
RECURSIVE STACK - Visualisation

STACK - > LEFO - > LAST IN FIRST OUT
-> screenshot

-> jab ek function call hota h toh uski entry banti h stack main above the main
-> recursion - > alag alag funtions call hore h baar baar - > toh alag alag entries form hogi -> kyu? to track the function

|       |       and so on -> hr ek recusrive function ki stack main seperate memory create hogi one by one, fir jab kaam pura hoga toh ek ek memory khtm hogi
|-------|
|f(4)   |
|-------|
|f(5)   |   
|-------|
|main   |  
|-------|
|-------|  STACK MEMORY

in the form of TREE - > RECUSIVE TREE
main
|
p(5)
|
p(4)
|
p(3)
.
.
.
p(1)


// HEAD / TAIL RECURSION - > problem dependent

TAIL RECURSION
- > base case
- > Processing
- > Recursive relation

HEAD RECURSION
- > base case
- > Recursive relation
- > Processing



FIBONACCI working tree
- > jo bhi recursive call pehle aati h vo, pehle execute hone chali jaati h, second baadme check hoti h
- > screenshot



IMPORTANT 
- > 1 case solve krdo baki recursion sambhal lega
- > example factorial of 5
- >  ham ASSUME krege ki 4 ka factorial recursion ko already pta hoga hame bas ek case solve krna h toh we will write it as - > 5 X 4!

*/




// #include <bits/stdc++.h>

// // factorial
// // int fact(int n){

// //     // base case
// //     if(n==0 || n ==1){
// //         return 1;
// //     }
// //     else {
// //         return n*fact(n-1);
// //     }
// // }

// using namespace std;

// // reverse counting
// // void count(int k){
// //     // base case
// //     if(k==0){
// //         return;
// //     }
// //     else{
// //         //processing
// //         cout<<k<<" ";
// //         //recursive relation
// //         count(k-1);
// //     }
// // }

//    // FIBONACCI
//     int fib(int n){
//         // base case
//         if(n==1){   //first term
//             return 0;
//         }
//         if(n==2){ //second term
//             return 1;
//         }
//         // processing
//         // cout<< n <<" ";
//         // recursive relation
//         return fib(n-2)+fib(n-1);
//     }
// int main() {
//     // int k,l;
//     // cout<<"give the number"<<endl;
//     // cin>>k;
//     // l=fact(k);
//     // cout<<l<<endl;


//     // REVERSE COUNTING CODE
//     // int k;
//     // cout<<"give the number for reverese counting"<<endl;
//     // cin>>k;
//     // count(k); // cannot use cout here i was making the mistake
//     int k,l;
//     cout<<"provide the number of terms"<<endl;
//     cin>>k;
//     l=fib(k);
//     cout<<l;
    
    
//     return 0;
// }


// code once again
// finding the factorial of a number
#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0|| n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n ==1){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    // cout<<"enter the number to find the factorial of"<<endl;
    // cin>>n;
    // int ans = factorial(n);
    // cout<<"The factorial of the program is "<<ans<<endl;

    // finding the fibonacci series of the number by inputting the length of the numbers needed
    cout<<"Enter the numbers you want in the series"<<endl;
    cin>>n;
    for(int i = 0;i<n;i++){
        cout<<fibonacci(i)<<" ";
    }

    return 0;
}