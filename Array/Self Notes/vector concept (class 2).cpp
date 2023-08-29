/*
INITIAL CONCEPT

- > Vector - > part of stl, it behaves like an array but array itself is static in nature, whereas vectoe is dynamic in nature - >  "it can increase or decrease it's size"
default size - > 0
jab size full ho jata h then it doubles itself - > memory loss is there
optimal solution - > best solution for the given problem according to it's time and space complexity
Brute-force solution - >  simple solution to a particular problem






INITIALISATION OF VECTOR

initialisation of vector using the values instead of size
vector<int> arr{10,20,30}; - > {10,20,30}

initialising by explicitly mentioning the size of the array
vector<int> brr(10); - > size is 10 and by default vecctor is initialised with zero when the size is given

intialising with some particular value
vector <int> arr (4,-1); - > {-1,-1,-1,-1}


RUN TIME DEPENDENT
int n
cin>>n;
vector <int> arr(n); // we are defining that we will be storing N number of elements into this



INSERTING VALUES

arr.push_back(5);


REMOVING THE ELEMENT
arr.pop_back();



SIZE 
arr.size();




IF EMPTY?
arr.empty()




SIZE AND CAPACITY 
- > number of elements currently stored in the vector - > size
- > number of elements that can be stored in the vector - > capacity



*/



// #include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
void fun(int arr[]){
    cout<<sizeof(arr)<<endl;
}
int main() {
    
    // int arr[] = {1,2,3,4,5,6,7,8,9};
    // fun(arr);

    // defining the vector
    vector <int> arr1;
    cout<<"The size of the array is "<<arr1.size()<<" and the capacity of the array is "<<arr1.capacity()<<endl;






    // explicitly defining the size of the vector
    vector <int> arr(10); //- > here the size of the arr is 10 now and capacity will also be 10

    // inserting values
    arr.emplace_back(10);
    arr.push_back(11);


    // printing values
    int size = arr.size();

    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    // removing values
    arr.pop_back(); // - > removed the last value







    // INITISALITING USING A PARTCULAR NUMBER

    vector<int> brr(10,-1); //-> an array of size 10 is initilised with -1
    // checking
     int size2 = brr.size();

    for(int i = 0;i<size2;i++){
        cout<<brr[i]<<" ";
    }

    cout<<endl;





    // DEFINING SIZE ON RUNTIME
    int n;
    cin>>n;
    vector <int> crr(n,-122);
    // printing
    for(int i = 0;i<n;i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;







    // entering values while defining itself

    vector<int> drr{10,20,30,40,50}; // -> idhr curly braces use hoge -> bohot kam use hota h ye wala tarika
    // printing
    int size3 = drr.size();
    for(int i = 0;i<size3;i++){
        cout<<drr[i]<<" ";
    }

    // finding the number of values in the vector
    vector <int> err{10,20,30};

    cout<<"The size of the vector err is: "<<err.size()<<endl;
    


    return 0;
}