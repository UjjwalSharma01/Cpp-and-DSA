# Recursion - babbar for basics

## What is Recursion?

Recursion, by definition, is when a function calls itself directly or indirectly. In simpler terms, when the solution to a larger problem depends on the solution to a smaller problem of the same type, we apply recursion.

### Examples

1. **Factorial**: The factorial of 5 (5!) is a larger problem that depends on the factorial of 4 (4!), which is a smaller problem. So, `5! = 5 * 4!`.

2. **Counting**: If we want to print numbers from 5 to 1, we can print 5 (the larger problem) and then print numbers from 4 to 1 (the smaller problem). So, `f(5) = print(5) + f(4)`.

3. **Real Life Example**: If you want to reach your home and there are 10 steps (the larger problem), you can take one step (making the problem smaller) and then there are 9 steps left.

4. **Fibonacci Series**: In the Fibonacci series (`0 1 1 2 3 5 8 13 21 ...`), each number is the sum of the two preceding ones. So, `f(n) = f(n-1) + f(n-2)`. Here, the larger problem (finding the `n`th Fibonacci number) depends on two smaller problems (finding the `(n-1)`th and `(n-2)`th Fibonacci numbers).

## Components of Recursive Code

1. **Base Condition**: This determines when the recursion should stop. It always uses a return statement.

2. **Recursive Relation / Call**: This is where the function calls itself, usually with a smaller problem.

3. **Processing (Calculations)**: This is optional and depends on the problem. It's where you perform any necessary computations.

Sure, here's your content formatted in markdown:

## RECURSIVE STACK - Visualisation

**STACK** - > LIFO - > LAST IN FIRST OUT
recursive calls are stored in stack memory

- Jab ek function call hota h toh uski entry banti h stack main above the main
- Recursion - > alag alag functions call hore h baar baar - > toh alag alag entries form hogi -> kyu? To track the function

```
|       |       
|-------|
|f(4)   |
|-------|
|f(5)   |   
|-------|
|main   |  
|-------|
```

STACK MEMORY

In the form of TREE - > RECURSIVE TREE

```
main
|
p(5)
|
p(4)
|
p(3)
.
.
.
p(1)
```

// **HEAD / TAIL RECURSION** - > problem dependent

**TAIL RECURSION**
- Base case
- Processing
- Recursive relation

**HEAD RECURSION**
- Base case
- Recursive relation
- Processing

**FIBONACCI working tree**
- Jo bhi recursive call pehle aati h vo, pehle execute hone chali jaati h, second baadme check hoti h
![recursion tree](/Recursion/Self%20Notes/image.png)

**IMPORTANT** 
- 1 case solve krdo baki recursion sambhal lega
- Example factorial of 5
- Ham ASSUME krege ki 4 ka factorial recursion ko already pta hoga hame bas ek case solve krna h toh we will write it as - > 5 X 4!



### STAIR CASE PROBLEM
__statement__ - you have n stars and you are given with two options, you can either climb one start at a time and two stairs at a time, so find the total number of ways to climb the `n` stairs

__intuition__ - mughe bas ek case solve krna h baki recursion sambhal lega

__approach__ - main last wali stair yaani ki `nth` stair pe kaise jaunga?

-> 1step at a time -> n-1 to n
-> 2 step at a time -> so n-2 to b

-> total number of ways to reach nth star  n = (n-1)+(n-2)

### why sum between two values?
kyuki ya toh ham n-1 wali stair se aa skte h `ya` toh n-2 so jab bhi `or` aata h permutation main we do a sum

__BASE CASE__


check constarins ki ko konsi values aa skti h and aapka ans kis hisab se aara h - > give according to chat


```cpp
#include <bits/stdc++.h>
using namespace std;
int ways(int n){
    // will write the base case 
    // mine
    if(n<3){
        return n;
    }
    // babbar bhaiya
    // if(n<2){
    //     return n;
    // }
    // recursive call
    return ways(n-1)+ways(n-2); // now we need to give the values of these basecases, final pe kese pohoche hoge in values se -> this was my intuition
    // last ke 2 cases solve krte h babbar bhaiya ka tarika
}
int main(){
    int n;
    cout<<"enter the number of stairs"<<endl;
    cin>>n;
    int ans = ways(n);
    cout << ans;
    return 0;
}
```

## printing an array using recursion 
__problem statement__ let the array be arr = [10,20,30,40,50,60];
print this using recursion

__intuition__ - main bas ek print krunga and baaki recursion sambhal lega usko krna de dunga

__approach__ = jab array ki length khtm hojaegi toh return krdege

```cpp
#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int length, int i){
    if(length<1){
        return;
    }
    cout<<arr[i]<<" ";
    i++;
    length--;
    printArray(arr, length, i );
}
int main(){
    int arr[] = {10,20,30,40,50,60};
    int length = 6;
    int i = 0;
    printArray(arr, length, i);
    return 0;
}
```

### printing digits of a number using recursion
__Problem Statement__ -> print all the digits in the numbers individually using recursion

__intuition__ -> i will extraxt each value by doing `%10` and reduce the number by one digit by doing `/10` and when the number will become zero i will stop


```cpp

#include <bits/stdc++.h>
using namespace std;
void printDigit(int n){
    // basecase
    if(n ==0){
        return; // i need to stop when number comes 0
    }
    // ek case m solve krdunga baki recursion sambhal lega

    printDigit(n/10); // isko neeche krunga toh ulta ans aaega

    cout<<n%10<<" ";
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    printDigit(n);
    return 0;
}
```
### Check if the array is sorted in ascending order or not
__Problem statement__ - check if the array is arranged in ascending order or not, you need to return true if yes and false if no

__intuition__ - i will use two pointer approach over here, first i will intialise pointer one with `arr[0]` and pointer 2 with `arr[1]`, then i will keep on updating these values until the `size` less than `array.size()-1`, and if for all values `pointer 1 < pointer 2` 

i will return true, else false

code solution


```cpp
#include <bits/stdc++.h>
using namespace std;
bool arraySorted(vector<int>arr,int size, int index){
    // base case 
    if(index == size-1){
        return true;
    }

    // calculation
    if(arr[index]>arr[index+1]){
        return false;
    }
    // main ek step nikalunga baki recursion sambhal lega

    // recursive case
    return arraySorted(arr, size, index+1);
    
}
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Now input the values into the array"<<endl;
    for(int i = 0;i<n;i++){
        cout<<"Enter the value of arr["<<i<<"]"<<endl;
        cin>>arr[i];
    }
    int size = n;

    // calling the function to check if the array is sorted or not
    int index = 0;
    bool ans = arraySorted(arr,size,index);
    cout<<ans;
    return 0;
}
```

### Palindrome check in recursion using single pointer
__Problem Statement__ -> check if the given array or the string is palindrome or not using a single pointer not two pointer approach

__intuition__ -> will initialise the pointer `i` with 0 and to compare the other thing i will use the basic math of `n-i-1` to point to the equavalent position from the end 
Stopping condition, if(i<=n/2), kyuki median element ke dono side ke element check krne h

__solution code__

```cpp
#include <bits/stdc++.h>
using namespace std;

bool palindromeCheck(string arr, int size, int i){
    if(i >= size/2){
        return true;
    }
    if(arr[i] != arr[size-i-1]){
        return false;
    }
    return palindromeCheck(arr, size, i+1);
}

int main(){
    cout << "Enter the size of the string" << endl;
    int n;
    cin >> n;
    string arr;
    cout << "Enter the string" << endl;
    cin >> arr;
    cout << "Printing before palindrome check " << endl;
    cout << arr << endl;
    cout << "Calling the palindromeCheck function" << endl;
    int index = 0;
    int size  = n;
    bool ans = palindromeCheck(arr, size, index);
    cout << (ans ? "True" : "False");
    return 0;
}
```

## Print Subsequence
what is subsequence? -> subsequence is a contagious or non contagious part of the string which follows a pattern or order
it should follow the order in the sense-> that the order of the elements should be same as the original string or array

![subsequence](/Recursion/Self%20Notes/image%20copy.png)
![subsequence](/Recursion/Self%20Notes/image%20copy%202.png)
![subsequence](/Recursion/Self%20Notes/image%20copy%203.png)

you need to stop as soon as base condition arrives which means that when i>=n, you need to stop

at each step you have two choices, either you can include the element or you can exclude the element, this also called as `power set` of the string

__there are two methods to print all of these subsequences, first is power set method and second is recursion method__

__recursive method__ -> 
- base case -> if the string is empty then return the output
- recursive case -> 
    - if we include the first element of the string
    - if we exclude the first element of the string


_Note_ the number of sequences from a string of length `n` is `2^n`

__code solution__
```cpp
#include <bits/stdc++.h>
using namespace std;

void printSubsequence(string str, string& output, int i){
    // Base case: when the index is out of bounds, stop
    if(i == str.length()){
        cout << output << endl;
        return;
    }

    // Two options: include the current character or exclude it
    // Exclude
    printSubsequence(str, output, i+1); // Exclude the current character and move forward

    // Include
    output.push_back(str[i]); // Include the current character
    printSubsequence(str, output, i+1); // Move forward
    output.pop_back(); // Remove the last character for the next iteration
}

int main(){
    string str = "abc";
    string output = "";
    int i = 0;
    printSubsequence(str, output, i);
    return 0;
}
```
