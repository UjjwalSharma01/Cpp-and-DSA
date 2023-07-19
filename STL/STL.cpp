// learn OOPS before this 
#include <bits/stdc++.h>
using namespace std;
   /*
   PAIRS - actually a part of utility library */
//   pairs
/* when we are storing array, instead of storing them individually, we can also store them in pairs using pair container */
// pair example
void pairexp() {
    // simple syntax
    pair<int, int> p= {1,2};
    cout<<p.first<<" "<<p.second; // one way of storing "basic syntax"
    // nested pair function
    pair <int , pair<int, int>> c={1,{2,3}};
    cout<< c.first<<" "<<c.second.first<<c.second.second<<endl;
    // array of pair
    pair<int , int> arr[] = { {12,3}, {132,223}, {134,234}};
    cout<<arr[1].second;

}

/******************************************************************/

// Vectors 
/*
vectors are just like array, they store the values of a datatype (elements) but unlike the array they have dynamic nature of memory allocation
which means that they can be modified when requires the array, once declared, of a particular size , its size cannot be changed again,
mostly used when you donot know the size of a particular data structure

*/

void vectorexp() {
    // vector is a container
    // syntax - vector<datatype> "name"
    vector<int> v ;//(name) - creates an empty container it will look like v= {}
    v.push_back(1); // will insert the value one into it now it will look like v = {1}
    v.emplace_back(2); // similar to pushback and it's dynamically increase the size of the  and insert to at the back of it, it generally faster than the push_back now the vector will look like v = {1,2}

    vector<pair<int, int>> vec; //vector of a pair datatype
    vec.push_back({1,2}); // in push back you have to use "{}" in order to input a pair
    vec.emplace_back(3,4); // remember this point that we don't use"{}" this sign here in the emblace back

    vector<int> ve(5,100);
    vector<int> ve(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);


    vector<int>::iterator it = v.begin();




}




int main(){
    /*
    STL - standard template library, it is the set of various containers (stores data),algorithms(process data), and iterators (points data just like pointers),
    pre built in c++ which are used to perfrom certain task which are already being available in the c++ and you don't have to re-invent the wheel
    
    things we will be learning here 
    1. Algorithms
    2. Functions
    3. Containers - first will be learning this
    4. Iterators -  and this
    
    */
   pairexp();


    return 0;
}