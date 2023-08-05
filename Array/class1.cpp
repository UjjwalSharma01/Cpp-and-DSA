/*
ALGORITHM - > a series of step to fullfill a task and the collection of those steps is known as algorithms
DATA-STRUCTURE - > ek esi entitiy jiske andr ham data store kr skte h - > tarika alag ho skta h but data sab store kr rhe h

- > A set of similar elements stored in the continous memory - > SEM 1 definition


BEHIND THE SCENE IN THE MEMEORY

- > the elements are stored in the continous manner and one after the another


WHY ARRAY IS NEEDED?
when we have to operate with a very large number of data - > we can't create individual variables one by one so we will be using array while operating

- > memory wastage also takes place - > internal fragmentation (OS TOPIC)
- > suppose you are having two continous memoery block of 16 bytes and 24 bytes in your memory but you want to create an array of 10 intger elements - > now the sspace is not available in continous manner for this operation
- > although 16+24 =40 you have the space but it's in descrete manner - >  it should be in continous manner - > so memory wastage hui h yha pe


*/


#include <bits/stdc++.h>
using namespace std;
int main() {
    // Creating an array
    int arr[5] = {12,2,3432,23123,13}; 
    /* name of the array points towards the address of the  first element of the array */

    return 0;
}