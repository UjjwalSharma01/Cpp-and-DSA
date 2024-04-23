# Basic Maths for DSA

## Digit Extraction

![Image1](Images/basicMaths1.png)

1. Extraction of numbers -> modulo 10, which means that the number will get divided by 10 and whatever will be the remainder we will get that

```cpp
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0){
        cout<<n%10<<endl;
        n=n/10;
    }
}
```
