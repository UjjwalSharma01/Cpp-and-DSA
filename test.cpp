// program to count number of 1s and zeros in a 1D array using the concept of vector
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <vector<int> > arr; // outer vector ke andr "vector int" type ka data push hoga and inner main int
    vector <int> a= {1,2,3};
    vector <int> b= {4,5,6};
    vector <int> c = {7,8,9};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    int size = arr.size(); // row size
    int sizecol = arr[0].size(); //column size 

    // printing the array vector

    for(int i=0;i<size;i++){
        for(int j=0;j<sizecol;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<vector<int> > trr(5, vector<int>(5,-8));

    return 0;
}