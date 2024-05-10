## Leval sabke niklege

how to find, what to return in basecase?
look at the function and observe what the functions gives output of, and then you need to return the value of that output in the basecase
![subsequence](/Recursion/Self%20Notes/image%20copy%207.png)

## Find the min subsequences with the given sum
![subsequence](/Recursion/Self%20Notes/image%20copy%204.png)
__Problem Statement__ -> Given an array of integers, find the minimum number of subsequences with the given sum  
__approach__ -> 
![subsequence](/Recursion/Self%20Notes/image%20copy%205.png)
![subsequence](/Recursion/Self%20Notes/image%20copy%206.png)
__solution code__

```cpp

#include <bits/stdc++.h>
using namespace std;
int solve (int arr[], int target){
    if(target == 0) {
        return 0;
    }
    if(target < 0){
        return INT_MAX;
    }

    int mini = INT_MAX;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        int temp = solve(arr, target - arr[i]);
        if(temp != INT_MAX){
            mini = min(mini, temp + 1);
        }
    }
    return mini; // minimum number of coins to make this digit
}
int main(){
    int arr[] = {2,3};
    int target = 12;
   cout<< solve(arr, target)<<endl;
    return 0;
}
```