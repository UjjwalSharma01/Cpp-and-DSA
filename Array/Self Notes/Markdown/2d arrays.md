# 2d arrays

how it is read and alloted in the memory

![2d arrays](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Array/Images/Screenshot%20(1856).png)



_Note_ : agr input col wise lia h toh output row wise hoga otherwise column wise print nahi hoga -> hamne col wise lia input fir col wise print kraege toh vo row wise ban jaega, agr input row wise lia h toh column wise print krne ke liye __arr[i][j]__ ki jagah __arr[j][i]__ krdege

```cpp
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
    // output column wis
    cout<<"The elements of the array are"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
```

While passing 2d array to a function we have to specify the number of columns in the function call otherwise it will give an __error__

#### Example

```cpp
#include <iostream>
using namespace std;
void printRowArray(int arr[][3], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[j][i];
        }
    }
    printRowArray(arr, row, col);
}
```

why?
![2d arrays](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Array/Images/Screenshot%20(1867).png)


because to map the 2d array in the memory we need to know the number of columns the formula is c*(i)+j - where c is the number of columns, i is the row number and j is the column number

### Linear Search in 2d array

focus on the return type of the function and how to handle them

```cpp
#include <iostream>
using namespace std;
bool find(int arr[][3], int row, int col, int key)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                return true; // focus on these return types and the way they are operating
                break;
            }
        }
    }
    return false;
}
int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int key;
    cout << "Enter the key what you want to search: ";
    cin >> key;
    if (find(arr, row, col, key))
    {
        cout << "found it";
    }
    else
    {
        cout << "not found it";
    }
}
```

## 2D array as a vector

Visualisation
![2d arrays](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Array/Images/Screenshot%20(1874).png)

ham vector of vector bnaege, toh har ek vector ke andar ek vector hoga just like vector of int bnate h toh hr ek column ke andr int type ka data hota h

### Declaration
```cpp

vector<vector<int> > arr; // 2 ">" ke beechme space rkhna, kabhi kabhi error aajata h
```

### Different operations
```cpp
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

    return 0;
}
```

use  **int size = arr.size();**  to get the size of row of the vector array  **int sizecol = arr[0].size();** to get the size of the column, ye use case main chalega jab __number of columns in each row same ho__ agr different h toh we will use __arr[i].size()__ to get the size of the column of the ith row

### Another way

```cpp
vector<vector <int> > arr(row, vector<int> (col,0)); 
```

#### Breakdown of the above code

![2d arrays](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Array/Images/Screenshot%20(1878).png)

### home work
![2d arrays](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Array/Images/Screenshot%20(1885).png)