#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Vector initialisation and printing
    vector<int>arr(10,-1);
    for(int i =0; i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    arr.push_back(20);
    arr.push_back(30);
    arr.pop_back();
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // // Inserting 5 elements in the array
    // for (int i =1;i<6;i++){
    //     int n;
    //     cout<<"Enter the "<<i<<"th value"<<endl;
    //     cin>>n;

    //     arr.push_back(n);
    // }
    // printing
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // SIZE MENTIONED EXPLICITLY
    vector <int> brr(10);
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    vector<int> crr{10,20,30};
    return 0;
}