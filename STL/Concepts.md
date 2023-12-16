# Complete STL,Algorithms and Their Time Complexities
[STL](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/STL/Images/Screenshot%20(342).png)
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
Example 2
```cpp
/* basically a dynamic array in STL nothing else than that */
#include <iostream>
#include<vector> // use this library to use vector in your program
using namespace std;
int main(){
    // Syntax 
    // vector<datatype> name;
    vector<int> v = {1,2,3,4,5};
    
    // traveral of this vector
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    
    // random access
    cout<<v.at(2)<<endl; // using at operation
    
    // random access is also possible like we do in array
    cout<<v[2]<<endl;
    
    // front and back operation
    cout<<v.front()<<endl; // it will return the first element of the vector
    cout<<v.back()<<endl; // it will return the last element of the vector
    
    // size of the vector
    cout<<v.size()<<endl; // it will return the size of the vector
    
    // empty function
    cout<<v.empty()<<endl; // it will return 0 if the vector is not empty and 1 if the vector is empty
    
    // push_back function
    v.push_back(6); // it will add the element at the end of the vector
    
    // pop_back function
    v.pop_back(); // it will remove the last element of the vector

    // iterator what is v.begin
    /* v.begin is the iterator which points to the first element of the vector */
    // iterator what is v.end
    /* v.end is the iterator which points to the last element of the vector */
    
    // insert function
    v.insert(v.begin(), 10); // it will insert the element at the given position
    
    // erase function
    // you can use this in 2 ways when you have to delete an single element or a range of elements
    // if i want to erase element at index 2 
    v.erase(v.begin()+2);
    // if i want to erase a range of elements
    v.erase(v.begin()+2, v.begin()+4); // it will erase the elements from index 2 to index 4
    // difference between pop_back and erase
    /* pop_back is used to remove the last element of the vector and erase is used to remove the element at the given position */

    // swap function
    vector<int> v2 = {1,2,3,4,5};
    v.swap(v2); // it will swap the two vectors
    arr.clear(); // it will clear the array but the size of the array will remain the same


    // if we want to create new vector and copy existing one into it
    vector<int> last(arr); // this will have all the elements of the array
    // enough for now

    return 0;
}
```
Push back vs emplace back what's the difference? and which one is faster?
push_back is used to add the element at the end of the vector and emplace_back is used to add the element at the end of the vector but it is faster than push_back 

## Double ended queue
deletion and insertion is possible at both the ends in deque, and random access is also possible
```cpp
#include <iostream>
#include<deque> // use this library to use deque in your program
using namespace std;
int main(){
    // Syntax
    deque<int> d;
    d.push_back(1); 
    d.push_front(2);

    // traversal
    for (int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    
    // random access
    cout<<d.at(1)<<endl;
    
    // front and back operation
    cout<<d.front()<<endl; // it will return the first element of the deque
    cout<<d.back()<<endl; // it will return the last element of the deque
    
    // size of the deque
    cout<<d.size()<<endl;// it will return the size of the deque
    
    // empty function
    cout<<d.empty()<<endl;// it will return 0 if the deque is not empty and 1 if the deque is empty
    
    // pop_back function
    d.pop_back();// it will remove the last element of the deque
    
    // pop_front function
    d.pop_front();// it will remove the first element of the deque
    
    // insert function
    d.insert(d.begin(), 10);// it will insert the element at the given position
    
    // erase function
    // you can use this in 2 ways when you have to delete an single element or a range of elements
    // if i want to erase element at index 2 
    d.erase(d.begin()+2);
    // if i want to erase a range of elements
    d.erase(d.begin()+2, d.begin()+4); // it will erase the elements from index 2 to index 4
    return 0;
}
```
## List 
- it is a doubly linked list
- it is a linear data structure
- it is a sequence container
- it is dynamic in nature

```cpp
#include <iostream>
#include<list> // use this library to use list in your program
using namespace std;
int main(){
    // kind of all same operations like the above two data structures nothing new here
    
    // Syntax
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    
    // traversal
    for (int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    
    // random access
    cout<<l.at(1)<<endl;
    
    // copy
    list<int> l2(l); // it will copy all the elements of l into l2
    
    // front and back operation
    cout<<l.front()<<endl; // it will return the first element of the list
    cout<<l.back()<<endl; // it will return the last element of the list
    // enough because all function are same

    return 0;
}
```
## Stack
it is a LIFO data structure
```cpp
#include <iostream>
#include<stack> // use this library to use stack in your program
using namespace std;
int main(){
    // Syntax
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    
    // traversal
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    
    // size of the stack
    cout<<s.size()<<endl; // it will return the size of the stack
    
    // top function
    cout<<s.top()<<endl; // it will return the top element of the stack
    
    // pop function
    s.pop(); // it will remove the top element of the stack
    
    // empty function
    cout<<s.empty()<<endl; // it will return 0 if the stack is not empty and 1 if the stack is empty
    return 0;
}
```
## Queue
it is a FIFO data structure
```cpp
#include <iostream>
#include<queue> // use this library to use queue in your program
using namespace std;
int main(){
    
    // Syntax
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    
    // traversal
    for(int i:q){
        cout<<i<<" ";
    }
    cout<<endl;
    
    // size of the queue
    cout<<q.size()<<endl; // it will return the size of the queue
    
    // front function
    cout<<q.front()<<endl; // it will return the front element of the queue
    
    // back function
    cout<<q.back()<<endl; // it will return the back element of the queue
    
    // pop function
    q.pop(); // it will remove the front element of the queue
    
    // empty function
    cout<<q.empty()<<endl; // it will return 0 if the queue is not empty and 1 if the queue is empty
    return 0;
}
```
## Priority Queue
- it is made using the concept of min and max heap and it is a max heap by default
- if made using max heap then the element with the highest priority will be at the front of the queue
- if made using min heap then the element with the lowest priority will be at the front of the queue
```cpp

#include <iostream>
#include<queue> // use this library to use priority queue in your program
using namespace std;
int main(){
    // Syntax
    priority_queue<int> pq; // it is a max heap by default
    priority_queue<int, vector<int>, greater<int>> p; // it is a min heap
    pq.push(1);
    pq.push(2);
    pq.push(3);
    // traversal
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    int n = pq.size();
    // using for loop to traverse
    for(int i=0;i<n;i++){ // we cannot use pq.`size()` here because it is not a member function of priority queue
        cout<<pq.top()<<" ";
        pq.pop();
    }


    // Same operations for min heap
    p.push(1);
    p.push(2);
    p.push(3);
    // traversal
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    int n = p.size();
    
    // size
    cout<<p.size()<<endl; // it will return the size of the priority queue
    
    // top function
    cout<<p.top()<<endl; // it will return the top element of the priority queue
    
    // pop function
    p.pop(); // it will remove the top element of the priority queue
    
    // empty function
    cout<<p.empty()<<endl; // it will return 0 if the priority queue is not empty and 1 if the priority queue is empty
    return 0;
}
```
## Set

it is a data structure which stores the unique elements in sorted order  
cannot modify the elements once inserted  
behind the scene it is implemented using BST(Binary Search Tree)  
elements are returned in sorted order  

difference between ordered and unordered set  
ordered set -> elements are returned in sorted order it is relatively solower than unordered set  
unordered set -> elements are returned in random order  


how its impelemented? a pictorial example via BST in which smaller elements go left and larger elements go right  
        5
       / \
      3   7
     / \ / \
    1  4 6  8

if we try to store already existing element in the set then it will not be stored in the set  
```cpp
#include <iostream> 
#include<set> // use this library to use set in your program
using namespace std;
int main(){
    // Syntax
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    // traversal
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    
    // size of the set
    cout<<s.size()<<endl; // it will return the size of the set
    
    // find function
    // after getting the iterator we can start traversal from that point or any other operation
    auto it = s.find(2); // it will return the iterator pointing to the element 2
    // or we can define the iterator like this
    set<int>::iterator it2 = s.find(2); // manually entering iterator type
    
    // erase function - here the value is passed in the erase function 
    s.erase(2); // it will erase the element 2 from the set
    
    // empty function
    cout<<s.empty()<<endl; // it will return 0 if the set is not empty and 1 if the set is empty
    
    // count function -> used to check if a particular value is present or not
    cout<<s.count(2)<<endl; // it will return 1 if the element is present in the set and 0 if the element is not present in the set
    return 0;

}
```
## Map
it is a data structure which stores the data in the fomat of key value pairs  
all the keys are unique  
one key can point to only one value  
2 values can point to same key but one key cannot point to 2 values  
```cpp
#include <iostream>
#include<map> // use this library to use map in your program
using namespace std;
int main(){
    // Syntax -format
    // map<key datatype, value datatype> name;
    map<int, int> m;
    m[1] /*Key*/ = 2; /*Value*/
    m[2] = 3;
    m[3] = 4;
    // traversal
    for(auto i:m){ //auto is used to automatically detect the datatype of the iterator
        cout<<i.first<<" "<<i.second<<endl; // i.first will give the key and i.second will give the value
    }
    cout<<endl;
    // size of the map
    cout<<m.size()<<endl; // it will return the size of the map

    // find function
    auto it = m.find(2); // it will return the iterator pointing to the element 2
    
    // erase function - here the value is in the erase function
    m.erase(2); // we just have to pass the key in the erase function
    
    // empty function
    cout<<m.empty()<<endl; // it will return 0 if the map is not empty and 1 if the map is empty
    
    // insert function
    m.insert({2,3}); // it will insert the key value pair in the map
    return 0;
}
```
# Algorithms
```cpp
#include <iostream>
#include<algorithm> // use this library to use algorithms in your program
using namespace std;
int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // traversal
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    // binary search - syntax -> binary_search(starting iterator, ending iterator, element to be searched)
    // for static array replace starting iterator with array name and ending iterator with array name + size of the array
    cout<<binary_search(v.begin(), v.end(), 3)<<endl; 
    // it will return 1 if the element is present in the vector and 0 if the element is not present in the vector

    // lower bound - syntax -> lower_bound(starting iterator, ending iterator, element to be searched)
    lower_bound(v.begin(), v.end(), 3); // it will return the iterator pointing to the element 3
    // for simplicity iterator = index

    // upper bound - syntax -> upper_bound(starting iterator, ending iterator, element to be searched)
    upper_bound(v.begin(), v.end(), 3); // it will return the iterator pointing to the element 4

    // max function - syntax -> max(element1, element2)
    cout<<max(2,3)<<endl; // it will return the maximum of the two elements

    // min function - syntax -> min(element1, element2)
    cout<<min(2,3)<<endl; // it will return the minimum of the two elements
    
    // sort function - syntax -> sort(starting iterator, ending iterator)
    sort(v.begin(), v.end()); // it will sort the vector in ascending order
    // Behind the scene is working on intro sort with the combination of quick sort, heap sort and insertion sort

    // reverse function - syntax -> reverse(starting iterator, ending iterator)
    reverse(v.begin(), v.end()); // it will reverse the vector/ string

    // rotate function - syntax -> rotate(starting iterator, middle iterator, ending iterator)
    // current vector -> 1 2 3
    rotate(v.begin(), v.begin()+1, v.end()); // it will rotate the vector by 1 element
    // output  -> 2 3 1
    // if we want to rotate two elements
    rotate(v.begin(), v.begin()+2, v.end()); // it will rotate the vector by 2 elements
    // output  -> 3 1 2
    return 0;
}

```

# All time complexities of the functions used 
the complexity of each function in these STL containers  
### in all other functions other than set and map  
1. random access -> O(1)
2. insertion or deletion at the end -> O(1)
3. insertion or deletion at the beginning -> O(n)  // because we have to shift all the elements
4. insertion or deletion in the middle -> O(n)

### in set and map
1. insertion -> O(logn) // because it is implemented using BST and it takes logn time to insert an element in BST
2. deletion -> O(logn)
3. searching -> O(logn)
4. traversal -> O(n)
5. Find -> O(logn)
6. Erase -> O(logn)
7. Count -> O(logn)
8. Lower bound -> O(logn)
9. Upper bound -> O(logn)
10. Swap -> O(1)
11. Reverse -> O(n)
12. Rotate -> O(n)
13. Max -> O(1)
14. Min -> O(1)
15. Sort -> O(nlogn)
