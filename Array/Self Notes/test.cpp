#include <bits/stdc++.h>
using namespace std;
int main(){
        // max element in array 
    int n;
    int arr[n];
    cout<<"Enter the number of elements you want to store "<<endl;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Values stores in the array";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // max;

    int max = INT_MIN;
    int min = INT_MAX;
    // choices
    int k;
    cout<<"what kind of number you want to find?"<<endl;
    cout<<"1. Min"<<endl;
    cout<<"2. Max"<<endl;
    cin>>k;
    if (k==1){
        for(int i=0;i<n;i++){
            if(min > arr[i]){
                min = arr[i];
            }
        }
        cout<<"The Minimum number in the array is: "<<min<<endl;
    }
    else {
        for(int i=0;i<n;i++){
            if(max < arr[i]){
                max = arr[i];
            }
        }
        cout<<"The maximum number in the array is: "<<max<<endl;

    }



    return 0;
}