# Introduction To OOPS In C++

OOPs is a programming technique in which things revolve around objects and we perfrom all the operations on objects

an object is something which have
1. **property/state** - like a dog have  4 legs, 2 eyes etc
2. **behaviour/functions** - like a dog can bark , he can eat and sleep etc.

## Why we need oop?
1. it makes the code more readable
2. makes the code more resuable 
3. the code is now more easier to understand and maintain.

## Class 
user defined datatype

### Creating a class

``` cpp
class name{
    // properties
    // add properties here

    // functions/ behaviours
    // add behaviour here
};
```

__Example__

``` cpp
   class animal{
        // state or properties
        public: // the area below this is public
        int age;
        private: // the area below this is private
        string name;

        // behaviour/functions/methods
        void eat (){
                cout<<"eating"<<endl;
        }
        void sleep (){
            cout<<"sleeping"<<endl;
        }

    }
```




## Object
**instance**/execution of a class is known as an object <br/>

example -> the blueprint of a house can be called as a class and the actual building is known the the object

### Object Creation and Acess
object creation creation can be done in two ways 
1. static allocation
2. dynamic allocation
### Access Modifiers
Access modifier - they define the scope of your access
#### Types
1. Public
2. Private
3. Protected


if a state or behavior is public then we can access it inside the class and outside the class both and if it is marked as private then that element of the class cannot be accessed outside the class

**by default all the members are private marked**

**static memory allocation**

``` cpp
  
animal ramesh; // we have made an object of animal type which is known as ramesh
// we want to access the property of any object then we have to use dot(.) operator
    ramesh.age = 12; // inserting values
    ramesh.name = "lion";

    cout<<"the age of ramesh is: "<<ramesh.age<<endl;
    cout<<"the name of ramesh is: "<<ramesh.name<<endl;
    ramesh.eat(); // we have to use () in order to call the behavior or the methods otherwwise there will be no difference in calling states and methods
    ramesh.sleep();
```
## Getters and Setters
when we have to access or modify the private members outside the class, then we use, getters and setters, This concept is heavily used in industries

 getter -> used to fetch the property of the class  
 setter -> use to set the property of the class

```cpp
class animal{
        // state or properties
        public:
        int age;
        string name;
        private:
        int weight;
        string type;

        // behaviour/functions/methods
        void eat (){
            cout<<"eating"<<endl;
        }
        void sleep (){
            cout<<"sleeping"<<endl;
        }
        int getweight(){ // will fetch the weight
            return weight;
        }
        void setweight (int weight){ // will set the weight
            this->weight=weight; 
        }


    };


 // getter and setter execution
    ramesh.setweight(101);
    cout<<"weight: "<< ramesh.getweight();
```

**Dynamic memory allocation**
while coding we have two types of memories
1. stack memory - available in small amount -> we were using this till now, this is being used whenever we use things like, int, string, float etc whenever we statically try to allocate memory

2. heap memory - available in very large amount <br/>

when we dynamically allocate the memoery it uses the heap memoery and we allocate memory in this part using the keyword **"new"**  
ex - new int(returns the address of the memory allocated);, so because it returns the address so we use the concept of pointer


**Syntax**
```cpp 
int* a = new int i;  // it returns the address of the int i, jo heap main create hua h and address is stored in variable a in the stack memory
```

**space taken in stack can be cleared automatically but space taken in heap cannot be**

so allocation is done via **new** key word and deallocation is done via **delete** keyword


## accessing and modifying members allocated dynamically 
```cpp

 animal* suresh = new animal;
    (*suresh).age=90;
    (*suresh).type = "billi";

    // concept -> we are using (*suresh) because we want to access the object stored at that address if wre don't use it, we are just saying aht, the value of this address is this and that which is not logical at all

    // ALTETNATIVE METHOD ---  syntax

    suresh->age=18;
    suresh->type="kutta";

    suresh->eat();
    suresh->sleep();
```
## This key word
**This** is a pointer to current object
``` cpp
void setweight (int weight){ // will set the weight
            this->weight=weight; 
        }
```

## Constructor

Used in Object Creation (created by default if not created by us)

constuctor - initialises the object  


constructor is a type of function having  
-> no return type  
-> name same as class  
-> intialise object  


jab khudka constuctor bnate h toh it over ride the default one present and hmare banae hue run krte h

you need not to call the constructor it is called automatically when you create an object

``` cpp
// example of constructor in class 
 class animal{
        // state or properties
        public:
        int age;
        string name;
        private:
        int weight;
        string type;

        // behaviour/functions/methods
        void eat (){
            cout<<"eating"<<endl;
        }
        void sleep (){
            cout<<"sleeping"<<endl;
        }
        int getweight(){ // will fetch the weight
            return weight;
        }
        void setweight (int weight){ // will set the weight
            this->weight=weight; 
        }

        // constructor -> default constructor
        // animal(){
        //     cout<<"constructor called"<<endl;
        // }

        // Another example of constructor
        // example of initilising in zero

        // parameterised constructor
        animal(int age, string name){
            this->age=age;
            this->name=name;
        }


    };
        

```
it gets called as you pass the values in the object creation

``` cpp
animal ramesh(12,"lion"); // constructor called
```
if you dono pass any value then the default constructor will be called  

copy constructor - it is used to copy the values of one object to another object  

``` cpp
// copy constructor
        animal(animal &obj){
            age=obj.age;
            name=obj.name;
        }
```

*note* -
we need to pass the object by reference otherwise it will go in infinite loop

how copy constructor is working ?  
``` cpp
animal ramesh(12,"lion"); // constructor called
    animal suresh(ramesh); // copy constructor called
    cout<<"suresh age: "<<suresh.age<<endl;
    cout<<"suresh name: "<<suresh.name<<endl;

```

## shallow vs deep copy
shallow copy - it copies the values of the pointers only and not the values of the pointers are pointing to  
deep copy - it copies the values of the pointers as well as the values of the pointers are pointing to  

``` cpp
// shallow copy
        animal(animal &obj){
            age=obj.age;
            name=obj.name;
        }
// deep copy
        animal(animal &obj){
            age=obj.age;
            name=new string(*obj.name);
        }
```

## Destructor

use to free the memory, constuctor ne memory li and allot kri, ye us memory ko free krega  
in static memory allocation -  called automatically  
in dynamic memory allocation - you have to call manually  

won't have any   
return type and input parameter  

then what's the difference between the code of constuctor and destuctor  
"~" this sign

can be called manually using the "delete keyword"  

delete "name of the object";  

``` cpp
// destructor
        ~animal(){
            cout<<"destructor called"<<endl;
        }
```


static ke andar jaise hi uska scope end hoga then the destuctor will be called automatically

for object creation, we have to call the destructor manually

``` cpp
animal* suresh = new animal;
    (*suresh).age=90;
    (*suresh).type = "billi";

    // concept -> we are using (*suresh) because we want to access the object stored at that address if wre don't use it, we are just saying that, the value of this address is this and that which is not logical at all

    // ALTETNATIVE METHOD ---  syntax

    suresh->age=18;
    suresh->type="kutta";

    suresh->eat();
    suresh->sleep();

    delete suresh; // destructor called
```


<details align="left">
  <summary>Some Questions</summary>
  <br>

 1. size of the empty is? <br/>
 Ans. 1, why the answer is one, because if it doesn't occupy the memory we won't be able to identify it so in order to identify the particular class in the memory we have given it the minumum possible memory i.e 1 


</details>


<details>
<summary> Homework </summary>
<br>

learn about padding and greedy alignment  
learn about memory leak and garbage collector(not there in c++ but pdhlena)  
const keyword - variable and functions  
how to create static variables and static functions  
initialisation list  
</details>