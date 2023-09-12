![url](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Array/Images/Screenshot%20(1841).png)
![url](https://github.com/UjjwalSharma01/Cpp-and-DSA/blob/main/Array/Images/Screenshot%20(1847).png)


revisit
```cpp
vector<int> srr{1,0,1,0,0,1,0,1,0,1,1,1,0,1,0,0,0,1};
int start = 0; // Initialize start to 0
int last = srr.size() - 1; // Initialize last to the last index

for(int i=0;i<srr.size();){
    if(srr[i]==0){
        swap(srr[i],srr[start]);
        start++;
        i++;
    }
    if(srr[i]==1){
        swap(srr[i],srr[last]);
        last--;
    }
    if(start>last){
        break;
    }
}
```
