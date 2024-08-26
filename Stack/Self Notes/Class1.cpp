// // impementation of stack and all

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
    
//     // Implementation of the stack using arrays

//     int size;
//     cout<<"Enter the size of the Stack you want to implement"<<endl;
//     cin>>size;
//     arr[size];
//     int top = 0;

//     // functions
//     // push function
//     while(top<size){
//         int temp;
//         cin>>temp;
//         arr[top] = temp;
//         top++;
//     }

//     // pop function
//     if(!arr.empty()){
//         cout<<arr[top];
//         top--;
//     }


    

//     return 0;
// }






















#include <bits/stdc++.h>
using namespace std;

void reverseStack(stack <int> &s){
    // base case
    while(s.empty()){
        return;
    }

    int temp = s.top();
    s.pop();
    reverseStack(s);
    

    inserAtEnd(s);
}
int main(){
    
    return 0;
}