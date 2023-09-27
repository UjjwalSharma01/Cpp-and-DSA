# Concepts

## Algorithm

- a series of step to fullfill a task and the collection of those steps is known as algorithms
## Data Structure 
- ek esi entitiy jiske andr ham data store kr skte h -> tarika alag ho skta h but data sab store kr rhe h

__BEHIND THE SCENE IN THE MEMEORY__

- the elements are stored in the continous manner and one after the another

## Arrays

### Why array is needed ?
when we have to operate with a very large number of data -> we can't create individual variables one by one so we will be using array while operating
- A set of similar elements stored in the continous memory -> SEM 1 definition
- memory wastage also takes place -> internal fragmentation (OS TOPIC)
- suppose you are having two continous memoery block of 16 bytes and 24 bytes in your memory but you want to create an array of 10 intger elements -> now the sspace is not available in continous manner for this operation
- although 16+24 =40 you have the space but it's in descrete manner ->  it should be in continous manner -> so memory wastage hui h yha pe

### __IMP__
- Default initialization is with 0
- indexing starts from __0 till n-1__ where n is the size of the array

### Significance of Index 0
-> whenever we write ```arr[0]``` it is interpreted/representedf as ```arr[0X4]``` -> arr -> and then is address pe jo value hoti h usko print kra dete h , we are basically navigating the addresses using these indexes
-> ```arr[4]``` this is interpreted as -> value at ```arr+ [4X4]`` which means that -> __value at base address + 16__


when youu try to access the memory location which doesn't comes under your array then either it will return a garbage value or will a segmentation error -> because you are trying to access the memory which is not yours


## Initialisation of Array 
1. WITH 0

     agr hamne array bas initliaze kia and uske andar koi value nahi dali -> print kra liya then it will give garbage values as output and agr khali values ko zero se initialise krna h toh atlease ek value toh dalni pdegi
     EX ->
     ```cpp
     int arr[10] = {0}; THE WHOLE ARRAY IS NOW INTIALISED BY 0
     for(int i=0;i<10;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
     ```


2. **WITH DIFFERENT VALUES -> USE memset function**


## ARRAY AND FUNCTIONS


- __ARRAY IS ALWAYS PASSED BY REFERENCE__ 
    - make this your habit, whenever you are passing an array to a function then uske size ko bhi paas krna pdega


## Important    
- MAXIMUM NUMBER IN AN ARRAY
SOME BEST PRACTICES TO FOLLOW
- always initialise maximum number with = ```INT_MIN``` and minumum number with ```INT_MAX```  but you have to use ```#include<limits.h>``` for this
- this way we are intialising these variables with the maximum and the minumum value ever possible in c++ and then we will compare the values of the array with these values and then we will swap the values if the value of the array is greater than the max value or smaller than the min value
    
 
DRY RUN  -> WE WILL CHECK EACH VALUE OF THE ARAAY AND SEE IF IT'S BIGGER OR SMALLER THAN THE MIN OR MAX VALUE , IT YES THEN WE WILL SWAP THAT VALUE WITH THE ORIGINAL VALUE OF BOTH VARIABLES

## 2D ARRAY
what is 2D array ?
- array of arrays
- 2D array is a collection of 1D arrays
- 2D array is also known as matrix
- 2D array is stored in the form of rows and columns
- 2D array is always passed by reference

__All codes__
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
```
## Vectors

you have to include ```#include<vector>``` in order to use vectors  
it's a part of stl(Structured template library), it behaves like an array but array itself is static in nature, whereas vectoe is dynamic in nature ->  "it can increase or decrease it's size"  
__default size -> 0__  
jab size full ho jata h then it doubles itself -> memory loss is there

### What is optimal and Brute-force solution ?
__optimal solution__ -> best solution for the given problem according to it's time and space complexity
__Brute-force solution__ ->  simple solution to a particular problem

### INITIALISATION OF VECTOR

initialisation of vector using the values instead of size
```cpp
vector<int> arr{10,20,30}; -> {10,20,30}
```
initialising by explicitly mentioning the size of the array
```cpp 
vector<int> brr(10); //-> size is 10 and by default vecctor is initialised with zero when the size is given 
```

intialising with some particular value
```cpp
vector <int> arr (4,-1); -> {-1,-1,-1,-1}
```

## Run Time Dependent
Vector is run time dependent -> it's size can be changed at run time
```cpp
int n
cin>>n;
vector <int> arr(n); // we are defining that we will be storing N number of elements into this
```

__INSERTING VALUES__
```cpp
arr.push_back(5);
```
__REMOVING THE ELEMENT__
```cpp
arr.pop_back();
```
__SIZE__
```cpp 
arr.size();
```
__IF EMPTY?__
```cpp
arr.empty()
```
### SIZE AND CAPACITY 
- number of elements currently stored in the vector -> size
- number of elements that can be stored in the vector -> capacity
