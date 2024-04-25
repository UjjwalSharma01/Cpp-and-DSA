# Kadane's Algorithm
Kadane's Algorithm is used to find the maximum sum of a subarray in an array. It is a dynamic programming algorithm that runs in O(n) time complexity.
<!-- add image -->
![Kadane's Algorithm](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/ddf978e2f23a99a1bb2db819732b66c8aca42f51/Images/Kadane's%20algo%20notes.jpg)
```cpp  
#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a,long long k) {
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i = 0; i<a.size(); i++) {
        sum += a[i];
        if(sum == k) {
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end())
            preSumMap[sum] = i;
    }
    return maxLen;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long k;
    cout<<"Enter the sum you want to find: ";
    cin>>k;
    cout<<"The length of the longest subarray with sum "<<k<<" is: "<<longestSubarrayWithSumK(a,k)<<endl;
}
```
## Dry run
Suppose we have an array `a = [1, 2, 3, 4, 5]` and we want to find the length of the longest subarray with sum 9. The algorithm will work as follows:
1. Initialize a map `preSumMap` to store the prefix sum of the array.
2. Initialize a variable `sum` to store the sum of the subarray.
3. Initialize a variable `maxLen` to store the length of the longest subarray with sum `k`.
4. Iterate through the array and calculate the prefix sum.
5. If the sum is equal to `k`, update `maxLen` to the maximum of `maxLen` and `i+1`.
6. Calculate the remainder `rem` by subtracting `k` from the sum.
7. If the remainder is present in the `preSumMap`, update `maxLen` to the maximum of `maxLen` and `i - preSumMap[rem]`.
8. If the sum is not present in the `preSumMap`, add it to the map.
9. Return `maxLen` as the length of the longest subarray with sum `k`.

## Example
```
Input:
Enter the size of the array: 5
Enter the elements of the array: 1 2 3 4 5
Enter the sum you want to find: 9
Output:
The length of the longest subarray with sum 9 is: 2
```
