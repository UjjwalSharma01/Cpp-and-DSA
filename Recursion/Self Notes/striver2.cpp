/*
### Palindrome check in recursion using single pointer
__Problem Statement__ -> check if the given array or the string is palindrome or not using a single pointer not two pointer approach

__intuition__ -> will initialise the pointer `i` with 0 and to compare the other thing i will use the basic math of `n-i-1` to point to the equavalent position from the end 
Stopping condition, if(i<=n/2), kyuki median element ke dono side ke element check krne h

__solution code__
*/

#include <bits/stdc++.h>
using namespace std;

bool palindromeCheck(string arr, int size, int i){
    if(i >= size/2){
        return true;
    }
    if(arr[i] != arr[size-i-1]){
        return false;
    }
    return palindromeCheck(arr, size, i+1);
}

int main(){
    cout << "Enter the size of the string" << endl;
    int n;
    cin >> n;
    string arr;
    cout << "Enter the string" << endl;
    cin >> arr;
    cout << "Printing before palindrome check " << endl;
    cout << arr << endl;
    cout << "Calling the palindromeCheck function" << endl;
    int index = 0;
    int size  = n;
    bool ans = palindromeCheck(arr, size, index);
    cout << (ans ? "True" : "False");
    return 0;
}