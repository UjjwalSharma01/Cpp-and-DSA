/*

STAIR CASE PROBlem

- > total number of ways to reach nth stair
- > 1 - > step - n-1
- > 2 - > step - n-2

- > total number of ways to reach nth star  n = (n-1)+(n-2)

// BASE CASE

check constarins ki ko konsi values aa skti h and aapka ans kis hisab se aara h - > give according to chat

*/




#include <bits/stdc++.h>
using namespace std;

// printing of array using recursion
void print(int arr[], int n ,int i){
    
    // base condition
    if(n==i){
        return;
    }
    // processing - > ek case solve kra 
    cout<<arr[i]<<" ";
    // recursive relation - > recursion sambhal lega
    print(arr,n,i+1);

    
}

int main() {
    int arr[8] ={12,20,243,1342,4,2,42,22};
    int n =8;
    int i=0;
    print(arr, n , i);
    return 0;
}
