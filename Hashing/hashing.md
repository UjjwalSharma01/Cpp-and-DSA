# Asynchronous 
javascript by default is a 
synchronous (ek ke baad ek code execute h) and single threaded language 

## Execution context 
execute one line of code at a time


# Hashing
### Prestoring and fetching

so it's like prestore something and fetch when required

## Steps
- if we are given with an array that goes upto 12 then we will create a new array known as __hash array__
- With indexing from `0` to `12` in total `13` elements, and we will initialize all the values with `0` which denotes the frequency of that particular number
- we will do some pre-calculation and we will traverse the given array and we will keep on updating the frequency in the hash array
<image>
- Then if we need the frequency of any array we will do `hash[index]` to fetch any value.

## If the size of the array is very large say `10^9`
No, you cannot declare the array of size `10^9`  the maximum int array which you can declare is `10^6` inside main function, otherwise you will get the segmentation array

but if you declare the array globally i.e outside the main function then you can go upto `10^7` 

for boolean its `10^7` in main and `10^8` globally

when you declare an array globally then it is automatically assigned or initialised with __Zero__ instead of garbage values and you don't need to do this explicitly

```cpp
#include <bits/stdc++.h>
using namespace std;
int main (){
    int arr [] = {1,2,3,1,1,1,1,1};
    int hash [4]= {0}; // initializing the values with 0 initially
    for(int i=0;i<8;i++){
        hash[arr[i]] = hash[arr[i]]+1;
    }
    cout<<hash[1];
    return 0;
}
```


## Character Hashing
- we will create a hash array of size 26 if the string contains only lower case or upper case characters 
- Now we somehow need to map these character to the index of the array so that i can count their frequency
- for example index for a = 0 for b= 1 for c = 2 . . . f = 5 . . . z = 26
- so in order to fulfill this we need to use the concept of ASCII values of the characters, the formula we will be using is
`
character - 'a'
`
example if we want to get the index value for the 5th character which is f when we will do
```cpp
int ch = 'f';
int initial = 'a';

int index = ch - initial // 102-97 => 5
```

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    string a = "ujjwalsharmaji";
    int length = a.length();
    int hash[26] = {0};
    for(int i =0;i<length;i++){
        // concept to be used character-'a' = hash value
        int character = a[i];
        int initial = 'a';
        hash[(character - initial)] = hash[(character - initial)] +1;
    }

    // counting the frequency
    int check = 'j';
    cout<<hash[check -'a'];
    return 0;
}
```

if any information is not given then we will declare the size of the array is 256 and this way we will precompute

```cpp
string s;
cin>>s;

// precomputing
int hash[256] = {0};
for(int i=0;i<256;i++){
hash[s[i]]++;
}
```

```cpp
#include <bits/stdc++.h>
using namespace std;
int main (){
    string s = "!@$@FDSFSDF11wDSAFSDGWERnfsdjnfsdngksgjsdhfj";
    int length = s.length();
    int hash[256] = {0};
    for(int i = 0;i<length;i++){
        hash[s[i]] = hash[s[i]] +1;
    }

    // checking the frequency now
    cout<<hash['@']<<cout;
    return 0;
} 
```
## Map/HashMap
To solve the problem of bigger size things, we will implement this using STL

### Map
it is kinda stored in the form of stack in c++ 
where the data is stored in key value pair in the sorted order
`map<key, value>`

now you need to iterate through the array and create the a map where key is the number and value denotes the frequency

it stores less memory
<image>

### Application

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,1,1,1,1,1};
    int length = 8;
    map<int,int> m;
    for(int i=0;i<length;i++){
        m[arr[i]]++;
    }

    // iterating through the map
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<m[1];
    return 0;
}

```
problem -> left

## Time Complexity (map) , unordered map
in __map__
storing and fetching take __`logn` in all cases__


Unordered map
Storing and Fetching 
takes `O(1)` in avg and best cases (most cases) but takes `O(n)` in worst case scenario

__ most of the time in the first place use unordered map and if fails use ordered map__

Why worst case happens ? -> because of internal collisions

__example of hashing using unordered map__

```cpp
// hashing using unorderd map
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,1,1,1,1,1};
    int length = 8;
    unordered_map<int,int> m;
    for(int i=0;i<length;i++){
        m[arr[i]]++;
    }

    // iterating through the map
    for(auto i:m){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
    cout<<m[1]<<endl;
    return 0;
}  
```

## Hashing Methods
1. Division Method (Linear Chaining)
2. Folding Method
3. MidSquare Method

### Division Method
used when for example you are given with an array having numbers till 139 but u cannot create a array of size 140

here the division method comes into the play

we will do `arr[i] %10`

and if someone asks you how many times 139 appears then it applies the same formula and gives the frequency of the output

Chain in the case of collision


<image at 53:00>

## Collision
need to check video again

in ordrered map any datastructure or the pair of datastructure can be the key, example the pair of two ints

but this is not the case in unordered map, it is limited to int double char and string
