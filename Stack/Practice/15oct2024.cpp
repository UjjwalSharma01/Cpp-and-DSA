// practicing after a long time

// All the things learned so far in stack

#include <bits/stdc++.h>
using namespace std;
// find the mid of the stack
/*
passed parameters
size of the stack 
mid - calculated on the based of stack
and the stack itself
 */

int findMidInStack(int size, int mid, stack<int> &s){
    // since recursion will be used then we will tell them the topping condition
    if(mid<=size){
        return s.top();
    }

    int temp  = s.top();
    s.pop();
    size--;
    // recursive call
    findMidInStack(size, mid, s);
}

int main(){
    cout<<"Skeleton Check"<<endl;
    return 0;

}