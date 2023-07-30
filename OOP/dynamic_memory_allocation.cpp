/* concepts 

ek program ko do tarike se memeory allocate kr skte h 
1. stack memory - stores local variable and parameters of the function -> stack memory is less in amound by default
2. Heap memeory - -> by default heap memory badi hoti h

and we can change this allocation by 
-> compiler setting
-> OS config

why heap memory bdi hoti and stack choti? - abhi answer nahi mila - i will find out by myself

HOW THE MEMORIES ARE BEING ALLOCATED
if we use 
int a =5 ; -> without using -> "new" keyword, tabtak stack main se allocate hoga
int*a =new int; -> will use heap memory
left side wala pointer hamesha stack main allocate hoga and stack main memory apne aap deallocate hojati h



NEW INT - > when we write this an address is returned and address hamesha pointer main store hota h so we will use pointer
we have to deallocat by ourself khudse nahi hoga, static main khudse use hota h

for dellocation we use the operator - "delete"

why we use heap?

whenever we use arr[n] = it's a bad practice

why?

because if u use n = 10lakh and stack ke paas toh vese hi kam memory h- code fat jaega 
so its a best practice to use heap memory if you want memory at runtime because we know that heap is having more memory then the 
stack by default

so we will use


1D array
int* arr = new int[n];

DELETION
delete[]arr


INT 
int* a =new int;

CHAR 
char* a = new char;

FLOAT
float* a = new float;

2D array
number of rows - 
int** arr = new int*[n]; -> hamne ek array bnaya h int* type ka jiske andr n number of block and each block contains int* type of data


right side ke upe ek pointer lgana h toh ek star faltu lgega left side


-> NOW WE WILL RUN A FOR LOOP

column
for(int i=0;i<h;i++){
    arr[i] = new int [m(column size)]; -> is ka matlab hua hamne ek array bnaya, m type ka
}

-------------
       int*             let these be the n blocks of the array made by "**" command
--------------
an array will be created inside each of these blocks after running for loop - so can we say hamne 2d srray bnadia
--------------
                    array 3
---------------
                    array 4
-----------------


same can be done usinf vector - will check the STL

DELETION
deallocaton using for loop cz allocation bhi usi se hui thi

for(int i=0;i<n;i++){
    delete[]arr[i];
}
delete[]arr

*/




#include <bits\stdc++.h>
using namespace std;
int main (){

    return 0;
}