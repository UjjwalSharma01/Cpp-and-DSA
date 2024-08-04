// // program to count number of 1s and zeros in a 1D array using the concept of vector
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <vector<int> > arr; // outer vector ke andr "vector int" type ka data push hoga and inner main int
//     vector <int> a= {1,2,3};
//     vector <int> b= {4,5,6};
//     vector <int> c = {7,8,9};

//     arr.push_back(a);
//     arr.push_back(b);
//     arr.push_back(c);

//     int size = arr.size(); // row size
//     int sizecol = arr[0].size(); //column size 

//     // printing the array vector

//     for(int i=0;i<size;i++){
//         for(int j=0;j<sizecol;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     vector<vector<int> > trr(5, vector<int>(5,-8));

//     return 0;
// }



// #include <iostream>
// using namespace std;

// class Array {
// private:
//     int m, n;
//     int** a;
//     int** b;
//     int** c;

// public:
//     Array(int row, int col) : m(row), n(col) {
//         a = new int*[m];
//         b = new int*[m];
//         c = new int*[m];
//         for (int i = 0; i < m; i++) {
//             a[i] = new int[n];
//             b[i] = new int[n];
//             c[i] = new int[n];
//         }
//     }

//     int getM()  {
//         return m;
//     }

//     int getN()  {
//         return n;
//     }

//     int** getA()  {
//         return a;
//     }

//     int** getB()  {
//         return b;
//     }

//     int** getC()  {
//         return c;
//     }

//     void setA(int** arr) {
//         a = arr;
//     }

//     void setB(int** arr) {
//         b = arr;
//     }

//     void setC(int** arr) {
//         c = arr;
//     }

//     void inputMatrix(int** matrix, const string& name) {
//         cout << "INPUT FOR " << name << " MATRIX:" << endl;
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 cout << "Enter the number at position (" << i << ", " << j << "): ";
//                 cin >> matrix[i][j];
//             }
//         }
//     }

//     void multiplyMatrices() {
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 c[i][j] = 0;
//                 for (int k = 0; k < n; k++) {
//                     c[i][j] += a[i][k] * b[k][j];
//                 }
//             }
//         }
//     }

//     void displayResult() {
//         cout << "The multiplication of the matrices is:" << endl;
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 cout << "\t" << c[i][j];
//             }
//             cout << endl;
//         }
//     }

//     ~Array() {
//         for (int i = 0; i < m; i++) {
//             delete[] a[i];
//             delete[] b[i];
//             delete[] c[i];
//         }
//         delete[] a;
//         delete[] b;
//         delete[] c;
//     }
// };

// int main() {
//     int row, column;
//     cout << "Enter the number of rows: ";
//     cin >> row;
//     cout << "Enter the number of columns: ";
//     cin >> column;

//     Array ar(row, column);
//     ar.inputMatrix(ar.getA(), "FIRST");
//     ar.inputMatrix(ar.getB(), "SECOND");
//     ar.multiplyMatrices();
//     ar.displayResult();

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int solve (int arr[], int target){
//     if(target == 0) {
//         return 0;
//     }
//     if(target < 0){
//         return INT_MAX;
//     }

//     int mini = INT_MAX;
//     for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
//         int temp = solve(arr, target - arr[i]);
//         if(temp != INT_MAX){
//             mini = min(mini, temp + 1);
//         }
//     }
//     return mini; // minimum number of coins to make this digit
// }
// int main(){
//     int arr[] = {2,3};
//     int target = 12;
//    cout<< solve(arr, target)<<endl;
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<13%10<<endl;
    return 0;
}