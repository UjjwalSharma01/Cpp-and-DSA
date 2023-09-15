/*
what is 2D array













*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3]; // Declaration of 2D array
    int crr[3][3];
    // initialisation
    int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // input
    // Row wise
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    // input column wise in crr
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>crr[j][i];
        }
    }

    // output
    cout<<"The elements of the array are"<<endl;
    // Row wise
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // output column wise
    cout<<"The elements of the array are"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<crr[i][j]<<" "; // agr input col wise lia h toh output row wise hoga otherwise column wise print nahi hoga -> hamne col wise lia input fir col wise print kraege toh vo row wise ban jaega
        }
        cout<<endl;
    }

    




    return 0;
}