# Overview

STL - standard template library, it is the set of various containers (stores data),algorithms(process data), and iterators (points data just like pointers) use to extract data from containers

### Features

- pre built in c++ which are used to perfrom certain task which are already being available in the c++ and you don't have to re-invent the wheel -> also you don't have to
- write a very big code again and again , you can just use the pre-built things to execute things in a faster way

**Things we will be learning here**

1. Algorithms
2. Functions
3. Containers - first will be learning this
4. Iterators - and this

## Pairs

pair is a container which is used to store two values of different data types, actually a part of utility library
when we are storing integer, instead of storing them individually, we can also store them in pairs using pair container along with pair of different data types

__Example__
```cpp
#include <bits/stdc++.h>
using namespace std;
void pairexp() {
    // simple syntax
    pair<int, int> p= {1,2};
    cout<<p.first<<" "<<p.second; // one way  of storing "basic syntax" and accesing the data stores using (.) operator
    // nested pair function
    pair<int , pair<int, int>> c={1,{2,3}};
    cout<< c.first<<" "<<c.second.first<<c.second.second<<endl;
    // array of pair
    pair<int , int> arr[] = { {12,3}, {132,223}, {134,234}};
    cout<<arr[1].second<<endl;
    cout<<"My experimentation on pairs"<<endl;
    // cout<<arr[1]<<endl; - > cannot do this we can access one member at a time
    cout<<arr[1].first<<endl;

}
```

## Vectors
- __VECTOR IS A CONTAINER (STORES DATA) -> WHICH IS DYNAMIC IN NATURE (YOU CAN CHANGE THE SIZE WHEN REQUIRED)__
- vectors are just like array, they store the values of a datatype (elements) but unlike the array they have dynamic nature of memory allocation which means that they can be modified when requires -> the array, once declared, of a particular size , its size cannot be changed again,
- it is mostly used when you donot know the size of a particular data 
- it is a part of sequence containers of STL
__Example__
```cpp

void vectorexp() {
    // vector is a container -> will be there ins que,stack etc
    // syntax - vector<datatype> "name";
    vector<int> v ;// -> creates an empty container it will look like v= { }
    v.push_back(1); // will insert the value one into it now it will look like v = {1}
    v.emplace_back(2); // similar to pushback and it's dynamically increase the size of the  and insert to at the back of it, it generally faster than the push_back now the vector will look like v = {1,2}
    v.emplace_back(3);
    v.emplace_back(18);

    vector<pair<int, int>> vec; //vector of a pair datatype
    vec.push_back({1,2}); // in push back you have to use "{}" in order to input a pair
    vec.emplace_back(3,4); // remember this point that we don't use"{}" this sign here in the emblace back

    vector<int> ve(5,100); // it is the container containing the value 100 five time it looks something like this ve = {100, 100, 100, 100, 100}
    vector<int> vei(5); // -> a container with 5 instances of garbage value is initialised 

    vector<int> v1(5,20); // -> will create five instances of 20 - > we can even now increase it's size
    v1.emplace_back(8);
    cout<<"Accessing Vectors"<<endl;

    // accessing elements in the vector
    // METHOD 1
    cout<<v1[5]<<endl;
    //  METHOD 2 -> generally people don't use it
    cout<<v1.at(2)<<endl;
    vector<int> v2(v1); // copying one vector to another

    // ACCESSING USING ITERATORS
    /*
    it points towards the memory address (just like pointers) -> it points at the memory address whereever we want it to point

    SYNTAX

    DATA STRUCTURE<DATATYPE>::iterator name : name.positinj();
    
    */

   cout<<"Acessing using iterators"<<endl;

    vector<int>::iterator it = v.begin();
    it++; // -> shifted to the next memory location - > member of the vector
    cout<< *(it)<< " "<<endl;

    it = it+2;
    cout<<*(it)<<" "<<endl;

    /*
    example vector for understanding = {10,20,30,40}
    */

    // TYPES OF ITERATORS

    // vector<int>::iterator it = v.end(); -> the iterator will move to the position after 40 and not 40 -> when we will do "it--" then it will come back to 40 - > in short END points to the memory location just after thr last element
    // vector<int>::iterator it = v.rend(); -> Reverse end - > (NEVER EVER USED) - > considering the string in the reverse order {40,30,20,10} and it will start pointing at the memory location just after the 10
    // -> it also moves in the reverse way - > 40 - > 30 - > 20 - > 10
    // vector<int>::iterator it = v.rbegin(); -> reverse begin -> starts with the memory location just before the 40

    cout<<v[0]<<" "<<v.at(0)<<endl;
    cout<<v.back() << " "<<endl; // the last elemt

    // USING LOOPS

    for (vector<int>::iterator it = v.begin(); it !=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;



    // THE AUTO KEYWORD
    auto a = 5; //-> it automatically assign the datatype according to the given data
    auto b="Ujjwal"; //-> it automatically assign the datatype according to the given value



    // METHOD - 2 (shortcut)
    for(auto it= v.begin(); it!=v.end();it++){ // -> when you use auto-> it automatically asignes it to a vector iterator
        cout<<*(it)<<" ";
    }



    // FOR - EACH LOOP
    cout<<"using For-each loop"<<endl;
    // read as "it" on v
    for(auto it:v){ // it means for-each datatype - > automatically iterate on the datatype - > i need to read more about this (REVIEW)
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<"DELETING VECTORS"<<endl;

    v.erase(v.begin()+1);

    v.erase(v.begin()+2,v.begin()+4);

    //insert function
    vector<int> (2,100); //(100,100)
    v.insert(v.begin(),300);
    v.insert(v.begin()+1,2,10);

    vector<int> copy(2,50); //{50,50}
    v.insert(v.begin(), copy.begin(), copy.end());



    cout<<v.size();

    v.pop_back();


}
```
