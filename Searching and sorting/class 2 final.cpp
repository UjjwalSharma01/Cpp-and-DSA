// Finding the square root of the number
/*
## Intuition
- kisi bhi number ka square root zero and us number ke beechme kahi toh lie krega and we can find that number using binary search

## Approach
1. we will take one array from zero to that number 
2. Then we will find the the mid of the obtained array, we will compare the `square` of the mid with the number of which we are finding the squareroot, if it's greater we will search in left after storing the value, else in the right in the same way


# Try dry run with minumum 3 examples and try to find out why we are not storing the value on the right side case when we are shifting to left side



# Binary Seach in 2D matrix

as we know that the 2d array or the matrix is in the form of of matrix for the visualitsation puroses but in the memory it is stored as 1D matrix and the address is determined by `c*i+j` where c is the number of column

and the total size of the array would be m*n

how we will fetch the row and column number of a member?

row = mid/column
col = mid%column


baaki pura logic same rhega you just need to know the number of rows and column
*/ 

#include <bits/stdc++.h>
int square(int n) {
    int start = 0;
    int end = n;
    int mid;
    int ans = -1;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (mid * mid == n) {
            return mid; // Found the exact square root
        } else if (mid * mid > n) {
            // Search on the left side
            // yha store isiliye nahi kra, kyuki jab chhota answer ho skta h then why to store big
            end = mid - 1;
        } else {
            // Search on the right side
            ans = mid; // Update ans to the last valid mid
            start = mid + 1;
        }
    }

    return ans; // Return the closest integer square root if exact root is not found
}
using namespace std;
int main(){
    int number;
    cout<<"Enter the Number to find the squareroot of "<<endl;
    cin>>number;
    int ans = square(number);
    cout<<ans<<endl;
    return 0;
}