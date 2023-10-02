# Overloading

## Do this if your recieviving variable __result__ in this case is of same datatype as of the function used while overloading

__PREFER THIS__
---
```cpp
#include <iostream>
#include <algorithm>
using namespace std;

class a{
    public:
    int c ;
    int d; 
};
int operator+(a obj, a obj2){
     return obj.c - obj2.c;
    
}int main(){
    a obj1,obj2;
    obj1.c = 12;
    obj2.c = 13;
    obj1.d = 12;
    obj2.d = 112;

    int result = obj1 + obj2;
    cout<<result<<endl;


    return 0;
}
```

## when your recieving variable of different datatype then the return type of the overloading function
```cpp
#include <iostream>
#include <algorithm>
using namespace std;

class a{
    public:
    int c ;
    int d; 
    a(int value){ // use constructor
        c = value;
    }
};
int operator+(a obj, a obj2){
     return obj.c - obj2.c;
    
}int main(){
    a obj1,obj2;
    obj1.c = 12;
    obj2.c = 13;
    obj1.d = 12;
    obj2.d = 112;

    a result = obj1 + obj2;
    cout<<result.c<<endl;


    return 0;
}
```
