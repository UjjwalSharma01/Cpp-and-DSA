# Abstraction and Dynamic Memory Allocation

_Note_ - Complete abstraction after completing other 3 pillars

### Introduction
__Abstraction__ 
- implementation hiding, don't seperate it from encapsulation, dono ko seperate nahi kr skte they overlap with each other, it overlaps with all 3 pillars

- encapsulation is a subset of _"ABSTRACTION"_

if you call them like this (sirf theory main number milege is tarike se)  
Encapsulation - Data hiding   
abstraction -  impelementation hiding    


_Note_ - DO NOT EXPLAIN THIS IN THE INTERVIEW, IT'S CORRECT BUT NOT FROM A LEARNING PERSPECTIVE, ITS CONFUSING

- Encapsulation is a subset of abstraction
- Abstraction can be achieved by access modifiers just like encapsulation (Written in many documentations)
- You can't differentiate between them because jab aapne implementation kre aapne object and class bnai, toh encapsulation toh apne aap achieve ho gayi
- there is not coding example to seperate abstraction and encapsulation
- Abstraction is a concept, encapsulation is a technique to achieve it 

a group of things -> both encapsulation and abstraction

### Example
```cpp
sort* a = new qucksort();
```

ab hamne end user ko sort nam ka pointer pakdta dia usko nahi pta konsi sorting technique use hui h, usko nahi pta konsi implementation use hui h 
so we can say this is abstraction and, you used the concept of class and  objects toh encapsulation toh vese ho hogayi use


__confusion hori h, explain krne main, toh you can explicity say ki they both everlap each other__


__INTERVIEWER SE BOL SKTE H__

Abstraction -> we are trying to achieve __generalisation (key keyword)__ by hiding the implementation of various algorithms and we are sharing things from a generic point of view  
Encapsulation -> in this you __warp data inside a parent entity__

- Encapsulation - > mere paas ek theli h usme bohot saari cheeze h aur vo theli maine pakad li, so basically its wrapping or encapsulation -> you are wrapping data
- Abstraction - > maine ek sort type ka printer bnaya and maine vo user ko pakda dia ek generic form main, maine nahi btaya ki konsa sort use kr rhe h we are basically trying to achieve generalisation by hiding  implementation of various algorithms.

__Real life example -__  
we are putting books in a bag - > encapsulation  
we are not telling what books we have but we are saying this bag contains book, without specifying the books - > abstraction


hmare paas, purse h, jiske andar paise h alag alog type ke - encapsulation  
but purse ke andr paise h without telling ki ko kon se notes h is-  abstraction

 
---
### INTERVIEW QUESTION 

 what is the different between compile time and run time polymorphism

 inheritance - diamond problem 

 abstraction and encapsulation - difference - or chalta firta example  - sorting wala de skte ho

 ---

 ## Dynamic Memory Allocation

ek program ko do tarike se memeory allocate kr skte h 
1. stack memory - stores local variable and parameters of the function -> stack memory is less in amound by default
2. Heap memeory - -> by default heap memory badi hoti h

and we can change this allocation by 
- compiler setting
-  OS config


### How memory is allocated in stack and heap
if we use  
int a =5 ; -> without using -> "new" keyword, tabtak stack main se allocate hoga  
``` int*a = new int; ``` -> will use heap memory -> stack will hold address to the memory allocated for data in heap  
left side wala pointer hamesha stack main allocate hoga and stack main memory apne aap deallocate hojati h

__NEW INT__ - > when we write this an address is returned and address hamesha pointer main store hota h so we will use pointer
we have to deallocat by ourself khudse nahi hoga, static main khudse use hota h


### How to deallocate memory in heap
for dellocation we use the operator - __"delete"__ because we have to manually delete the memory allocated in heap

why we use heap?

whenever we use ``` arr[n] ``` = it's a bad practice

why?

because if u use n = 10 lakh and stack ke paas toh vese hi kam memory h - code fat jaega  
so its a best practice to use heap memory if you want memory at runtime because we know that heap is having more memory then the stack by default

so we will use

```cpp
// 1D array
int* arr = new int[n];

// DELETION
delete[]arr


// INT 
int* a =new int;

// CHAR 
char* a = new char;

// FLOAT
float* a = new float;

// 2D array
// number of rows - n
int** arr = new int*[n]; //-> hamne ek array bnaya h int* type ka jiske andr n number of block and each block contains int* type of data, right side ke upr ek pointer lgana h toh ek star faltu lgega left side (pointer to pointer - concept)


// -> NOW WE WILL RUN A FOR LOOP -> revise this 3-4 times

column
for(int i=0;i<h;i++){
    arr[i] = new int [m(column size)]; -> is ka matlab hua hamne ek array bnaya, m type ka
}
/*
-------------
      datatype -> int*             let these be the n blocks of the array made by "**" command
--------------
an array will be created inside each of these blocks after running for loop - so can we say hamne 2d srray bnadia
--------------
                    array 3
---------------
                    array 4
-----------------


same can be done using vector - will check the STL*/

// DELETION
// deallocaton using for loop cz allocation bhi usi se hui thi

for(int i=0;i<n;i++){
    delete[]arr[i];
}
delete[]arr
```

![2d array](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1797).png)
---
![2d array](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1799).png)
---
![2d array](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Images/Screenshot%20(1800).png)
---

### why we use delete[]arr and not delete arr
because we have to delete the whole array and not just the first block of the array
### Creating a 2D array using vector
```cpp
vector<vector<int>> arr(n,vector<int>(m,0)); // -> n rows and m columns and 0 is the default value
```