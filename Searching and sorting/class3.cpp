/*

# Search in nearly sorted array

what do you mean by nearly sorted array?

nearly sorted array means that the value of the number that should be present at the ith position in the sorted array now may be present at ith index, or i+1th index or i-1 index

now you need to search an element in this 

## By how many ways you can do this?

### Way 1
You can sort this array first and then apply the Binary search
### Way 2
Use Linear search, time complexity - O(n)

### Way 3
Modify the binary search and in this case we check if mid, or mid-1, or mid+1 is equal to our given target because it is given in the question that element that should be present at ith index in the sorted array is present in the i-1th or ith or i+1th index in the almost sorted array, and then if the target is not found we will shift the positions like we did in the binary search

but this time we won't do start = mid-1 when we will seach in the left direction or right direction, we will do `+-2` instead of `1` because we have already checked the elements present at mid -1 and mid+1 index

## Code

```cpp
int sortSearch(vector<int> v, int size, int target){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start<=mid){
        if(v[mid] == target){
            return mid;
        }else if(v[mid+1]==target){
            return mid+1;
        }else if(v[mid -1] == target){
            return mid -1;
        }else if(v[mid]>target){
            end = mid-2;
        }else{
            start = mid+2;
        }
        // again forgot to update mid
        mid = start+(end-start)/2;
    }
    return -1; //when not found
}
```



## Find the quotient using the binary search

Given Things
Dividend = number to be divided
Divisor = the number that devides the divident
quotent the ans we get after dividing the number


how to do it?


see 10/2  = 5 

the other way around quotient * divisor  = dividend


## Code

```cpp


```

# Find the odd occursing element in the array

Problem Statement - you are given with an array in which all the elements occura the even number of time except one, you need to find that element, all repeating occurance of element appears in pair and pairs are not adjacent, there cannot be more than 2 consecutive occurance of the element


Types of Questions in binary search

1. Classic questions
2. Questions based on search space (you know ki ans is range m aeega and that range is sorted)
3. you need to do obervation in the index.

## Observation and test case
{1,1,2,2,3,3,4,4,3,5,5}
0,1,2,3,4,5,6,7,8,9,10 ->indexes


### Observations

initially on the left side of our ans which in this case is 3 because 3 is repeated odd times 

when we se at the left side of this number we see a pattern in the placement of the pair

the first digit in the pair is always at even position (considering zero as even in this case)
the second digit in the pair is always at the odd position

so this scenario was till we encountered the our ans okkay

now let's observe the pattern to the right od thr index 5

on the left side the pattern was like

__earlier__
first digit of pair -> even index
second digit of pair -> odd index


__now__

first digit of pair -> odd index
second digit of pair -> even index



one last thing to observe


our ans will always accur at even index

## Code
```cpp

```

*/


#include <bits/stdc++.h>
using namespace std;
int sortSearch(vector<int> v, int size, int target){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start<=mid){
        if(v[mid] == target){
            return mid;
        }else if(v[mid+1]==target){
            return mid+1;
        }else if(v[mid -1] == target){
            return mid -1;
        }else if(v[mid]>target){
            end = mid-2;
        }else{
            start = mid+2;
        }
        // again forgot to update mid
        mid = start+(end-start)/2;
    }
    return -1; //when not found
}

int oddNumber(vector<int> v, int size) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= mid) {
        if (mid % 2 == 0) {
            if (v[mid] == v[mid + 1]) { // means we are on the left side
                // we need to move to the right
                start = mid + 2; // mid+1 isiliye nahi because we have already checked it
            } else {
                ans = mid; // ho skta h yahi ans ho cz our ans also lies in the even place
            }
        } else if (mid % 2 != 0) { // that means odd
            if (v[mid] == v[mid - 1]) { // that means still we are on the left side
                // need to go to the right side
                start = mid + 1;
            } else {
                // we might already in the right side moving to left 
                end = mid - 1;
            }
        }
        mid = start + (end - start) / 2;
    }
}

int division(int dividend, int divisor) {
    if (divisor == 0) {
        throw std::invalid_argument("Divisor cannot be zero");
    }

    int ans = 0;
    int start = 0;
    int end = abs(dividend); // taking the absolute values initially
    int mid;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (abs(mid * divisor) == abs(dividend)) {
            ans = mid;
            break;
        } else if (abs(mid * divisor) < abs(dividend)) {
            // need to search in right, and we store the smaller ans
            ans = mid;
            start = mid + 1;
        } else {
            // search on the left side and we don't need to store the larger number
            end = mid - 1;
        }
    }

    if ((divisor > 0 && dividend > 0) || (divisor < 0 && dividend < 0)) {
        return ans;
    } else {
        return -ans;
    }
}

int main(){
    vector<int> v = {10, 3, 40, 20, 50, 80, 70};
    int size = v.size();
    int target  = 40;
    // int ans = sortSearch(v,size,target);
    // cout<<"The index of "<<target<<" is "<<ans<<endl;
    int dividend = 100;
    int divisor = 10;
    int ans = division(dividend, divisor);
    cout<<ans<<endl;
    return 0;
}