Compators are basically used with c++ utility functions like sort, max, min etc. 


how they work and what's the syntax?
```cpp
bool compare(int a, int b){
    return a<b;
}
int main(){
    int a = 10, b = 20;
    cout<<compare(a,b)<<endl;
    return 0;
}
```
In the above code, we have defined a function compare which takes two integers and returns a boolean value. This function is used to compare two integers.

The function returns true if the first argument is less than the second argument, otherwise it returns false.

now let's see how we can use this function with sort function.
```cpp
bool compare(int a, int b){
    return a<b;
}
int main(){
    vector<int> v = {1,2,3,4,5};
    sort(v.begin(),v.end(),compare);
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}
```
In the above code, we have used the compare function with the sort function. The sort function will sort the vector in ascending order.

we can also use lambda functions to define the compare function.
```cpp
int main(){
    vector<int> v = {1,2,3,4,5};
    sort(v.begin(),v.end(),[](int a, int b){
        return a<b;
    });
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}
```

what's the difference between the comparator and the lambda function?
- The comparator is a function that is used to compare two elements.
- The lambda function is an anonymous function that can be used to define the compare function inline.

what's the syntax of the lambda function?
```cpp
[ capture clause ] (parameters) -> return-type  
{  
   definition of method  
}
```
- The capture clause is used to capture variables from the enclosing scope. 
what does this mean?
```cpp
int a = 10;
auto f = [a](){
    cout<<a<<endl;
};
f();
```
so it's like if i want the variables which are present in the current scope of the lambda functions but are not passed as arguments then we can use the capture clause to access and use them in the lambda function.

when we use [&] in the capture clause then it means that we are capturing all the variables by reference.
```cpp
int a = 10;
auto f = [&](){
    cout<<a<<endl;
};
f();
```
when we use [=] in the capture clause then it means that we are capturing all the variables by value.
```cpp
int a = 10;
auto f = [=](){
    cout<<a<<endl;
};
f();
```

- The parameters are the arguments of the lambda function.
- The return-type is the return type of the lambda function.
- The definition of the method is the body of the lambda function.

example
```cpp
int main(){
    int a = 10, b = 20;
    auto compare = [](int a, int b){
        return a<b;
    };
    cout<<compare(a,b)<<endl;
    return 0;
}
```
In the above code, we have defined a lambda function that takes two integers and returns a boolean value. This lambda function is used to compare two integers.
