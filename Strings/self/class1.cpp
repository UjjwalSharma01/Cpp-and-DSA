/*
Char array or string is just a array of characters
Range -> -128 to 127 or 2^7 - 2^7-1;

## Input
Input can be taken in two ways
1. directly inseting all the character you want to insert (isme by default ek null character end main insert ho jaata '\0' this denotes the end of the string)
2. Insert the character one by one


but when we insert the data using the first method and there is a space in between two words then it will stop taking input as soon as these 3 parameters appears
1. Space
2. Tab
3. Null character


to avoid this we can use the getline function

```cpp
 char ch2[100];
    ch = "Ujjwal Sharma aatrey";
    cin.getline(ch, 50); //50 is the max length of the input, and we can have our custom delimeter here in this function 
    // example
    // cin.getline(ch, 50,'\0');
    
```

## Reversal of a string (Using two pointers and Swap Function)

```cpp
#include <bits/stdc++.h>
#include <cstring> // Include necessary header for strcpy
using namespace std;

int main() {
    char ch[100]; // Character array of size 100
    strcpy(ch, "ujjwal"); // Copy string literal into character 

    // Reversal of this string
    int start = 0;
    int end = strlen(ch) - 1; // Calculate the correct end index
    while (start <= end) {
        swap(ch[start], ch[end]);
        start++;
        end--;
    }

    for (int i = 0; i < strlen(ch); i++) {
        cout << ch[i];
    }

    return 0;
}
```


## Find if the string is palindrome or not

the same way you can use two pointer and compare of the start pointer  ==  end pointer 
if at any given point it is not equal then return false and if you completed the loop without breaking it return true


## Conversion of lowecase characters to uppercase characters

To achieve this you need to do `-'a'+'A'` in the uppercase letter

how this is working?

### Dry run of this

ASCII value of a = 97
ASCII value of A = 65

so a-a+A = 97-97+65 = 65

one more test case for 'c'
ASCII value of c = 99

so
c-a+A = 99-97+65 = 67 = C


## Code
```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    char arr[100] = "ujjwal";
    int vala = 'a';
    int capitala = 'A';
    for(int i =0;i<6;i++){
        arr[i] = arr[i]  - vala+capitala;
        // or
        // arr[i] = arr[i] - 'a'+'A'; //you can have the values directly
    }

    for(int i=0;i<6;i++){
        cout<<arr[i];
    }

    return 0;
}

```
## Conversion of Capital Characters to small Characters

we can do this the same way we did ealier but there is a slight change in the formula

`-'A'+'a'`

# String
what is the difference between the character array and the string

char array is a data structure in which the the data will be of `char` type, and string is a datatype where the data will be of `string type`

### Wrong use of getline function

```cpp
 string str;
    str = "Ujjwal Sharma";
    getline(cin,str);
    cout<<str;
```
when get line is called it waits for the value to be assinged but i have assingned the value 

### Corrected syntax

```cpp
 string str;
    getline(cin,str);
    str = "Ujjwal Sharma";
    cout<<str;
```

## string.substr(starting,ending) bhulna nahi h v imp

## String Comparison

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1 = "Ujjwal";
    string str2 = "Ujjwal";
    if(str1.compare(str2) == 0){
        cout<<"Strings are equal";
    }else{
        cout<<"Strings are not equal";
    }
    return 0;
}
```
this returns 0 if the strings are equal and -1 if the character of the first string is smaller than the second string and 1 if the character of the first string is greater than the second string, if first character are same the second one is compared, also if string 1 is smaller than second then it will return -1 and if string 1 is greater than string 2 then it will return 1


comparison without using the compare function

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1 = "Ujjwal";
    string str2 = "Ujjwal";
    if(st1.length() != str2.length()){
        cout<<"Strings are not equal";
    }else{
        for(int i =0;i<str1.length();i++){
            if(str1[i] != str2[i]){
                cout<<"Strings are not equal";
                return 0;
            }
        }
        cout<<"Strings are equal";
    }
    return 0;
}
```
## Find function (very important)

use to find the first occurence of the character in the string

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str = "hello this is ujjwal";
    cout<<str.find("ujjwal")<<endl; //output 14 which is the index of the first occurence of the string
    return 0;
}
```
returns npos if the string is not found

## Replace function

Replace the part of string with the new string

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str = "hello this is ujjwal";
    str.replace(14,6,"aatrey");
    cout<<str<<endl; //output hello this is aatrey
    return 0;
}
```

## Erase function

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str = "hello this is ujjwal";
    str.erase(14,6); // from where to start and how many characters to erase
    cout<<str<<endl; //output hello this is
    return 0;
}
```
 




*/

#include <bits/stdc++.h>
using namespace std;

int main(){
   string str = "Ujjwal";
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
    cout<<str.substr(0,3)<<endl;


    return 0;
}