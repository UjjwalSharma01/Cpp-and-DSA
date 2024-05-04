/* 
__problem statement__ -how to reverse an array using recursion

__intuition__ - mereko ek baar base condition deni h + ek swap krna h baki aage ka recursion sambhal lega


*/
#include <bits/stdc++.h>
using namespace std;
// array by default is pass by reference
void reverseArray(int arr[], int n, int left, int right){
    if(left == right){
        return;
    }
    // swapping
    swap(arr[left], arr[right]);

    // recursive relation -> baki recursion sambhal lega
    return reverseArray(arr, n, left+1, right-1);
}
int main(){
    int n;
    cout<<"Enter the size array to be reversed"<<endl;
    cin>>n;
    int arr[n] = {0};
    cout<<"Now enter the values into the array"<<endl;
    for(int i = 0;i<n;i++){
        cout<<"Enter the value of arr["<<i<<"]"<<endl;
        cin>>arr[i];
    }
    cout<<"Printing the entered array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // calling the reverse function 
    int right = n-1;
    int left = 0;
    reverseArray(arr,n,left,right);
    cout<<"Printing the reversed array using recursion"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}