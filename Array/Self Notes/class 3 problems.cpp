#include <bits/stdc++.h>
using namespace std;
int main(){
    // row sum
    int arr[5][4];
    int sum=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    // print this thing
      for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        } 
        cout<<endl;
    }

    // sum
      for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            sum = sum+arr[i][j];
        }
        cout<<"sum of row "<<i<<" is "<<sum<<endl;
        sum = 0;
    }
    return 0;
}