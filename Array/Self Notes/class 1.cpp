/*
ALGORITHM - > a series of step to fullfill a task and the collection of those steps is known as algorithms
DATA-STRUCTURE - > ek esi entitiy jiske andr ham data store kr skte h - > tarika alag ho skta h but data sab store kr rhe h

- > A set of similar elements stored in the continous memory - > SEM 1 definition


BEHIND THE SCENE IN THE MEMEORY

- > the elements are stored in the continous manner and one after the another


WHY ARRAY IS NEEDED?
when we have to operate with a very large number of data - > we can't create individual variables one by one so we will be using array while operating

- > memory wastage also takes place - > internal fragmentation (OS TOPIC)
- > suppose you are having two continous memoery block of 16 bytes and 24 bytes in your memory but you want to create an array of 10 intger elements - > now the sspace is not available in continous manner for this operation
- > although 16+24 =40 you have the space but it's in descrete manner - >  it should be in continous manner - > so memory wastage hui h yha pe


*/


#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

bool search(int arr[], int size , int key){
    for (int i= 0;i<size;i++){
        if(arr[i] == key){
            return true;
            break;
        }
    }
    return false;
}
int main() {
    // Creating an array



    // int arr[] = {};
    // int arr[5] = {}; 
    /* name of the array points towards the address of the  first element of the array */





 
    // entering values



    // for (int i =0;i<5;i++){
    //     cin>>arr[i];
    // }
    // printing an array - > using index  - > starts with zero
    // cout<<arr[1]<<endl;
    // -> significance of 0th index - > arr +0 X 4 -> arr+0 -> iska matlab iss address pr jo value pdi h usko return kro
    // arr + index * datatype
    // -> agr array ke size ke bahar ki memory access krna chah rhe h toh either it will segementation error or a garbage value - > it's compiler dependent
    // for (int i =0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }



    





    // Question -> take 5 elements in input in array and print their doubles
    
    
    // int arr1[5];
    // for(int i=0;i<5;i++){
    //     cin>>arr1[i];
    // }
    // for(int i=0;i<5;i++){
    //     cout<<2*arr1[i]<<" ";
    // }
    cout<<endl; 
    // an array contains values as - > {1,3,5,7,9} -> change all of them to one
    // int arr2[5] = {1,3,5,7,9};
    // cout<<"changing values"<<endl;
    // for(int i =0;i<5;i++){
    //     arr[i] = 1;
    // }
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl; 

    /* agr hamne array bas initliaze kia and uske andar koi value nahi dali -> print kra liya then it will give garbage values as output and agr khali values ko zero se initialise krna h toh atlease ek value toh dalni pdegi*/







    /* array and functions*/


    // ARRAY IS ALWAYS PASSED BY REFERENCE 
    // male this your habit, whenever you are passing an array to a function then uske size ko bhi paas krna pdega
    // int arr[] = {2,5};
    // int size = 2;
    // printarray(arr,size);






    /*LINEAR SEARCH IN ARRAY*/



    // WAY 1

    // int arr[] = {1,2,3,4,5,6,7,8,9};
    // int size =9;
    // int key;
    // cout<<"Enter the number to seach "<<endl;
    // cin>>key;
    // // search(arr, size, key);
    // if(search(arr,size,key)){ // if true the function will return 1 else 0
    //     cout<<"FOUND"<<endl;
    // }
    // else{
    //     cout<<"NOT FOUND"<<endl;
    // }



    // way 2

    // int arr[] = {1,2,3,4,5,6,7,8,9};
    // bool flag;
    // int size = 9;
    // int key;
    // cout<<"Enter the number to search for"<<endl;
    // cin>>key;

    // for (int i = 0;i<size;i++){
    //     if(arr[i] == key){
    //         flag =1;
    //         break;
    //     }
    // }
    // if(flag ==1){
    //     cout<<"found"<<endl;
    // }
    // else {
    //     cout<<"not found"<<endl;
    // }





    //COUNT 0'S AND 1'S IN ARRAY

    // self code - > bhaiya ka bhi same h
    // int arr[] = {1,1,1,3,3,2,4,4,0,0,0,0,0,0,6,4,4,56,4,3,2,1,1,1,1,11,1,1,1};

    // int count_for_Zero =0;
    // int count_for_one=0;
    // cout<<"total number of values = "<<(sizeof(arr))/sizeof(int); // calculating total number of values entered by me in the array without counting them

    // int size = 29;
    // for(int i = 0 ;i < size ; i++){
    //     if(arr[i] == 0){
    //         count_for_Zero++;
    //     }
    //     if(arr[i] == 1){
    //         count_for_one++;
    //     }
    // }

    // cout<<" THE NUMBER OF 1'S AND ZEROS IN THE ARRAYS ARE AS FOLLOWS - > "<<count_for_one<<" "<<"and"<<" "<<count_for_Zero<<endl;




    //MAXIMUM NUMBER IN AN ARRAY
    /* SOME BEST PRACTICES TO FOLLOW
    - > always initialise maximum number with = INT_MIN and minumum number with INT_MAX

    - > this way we are intialising these variables with the maximum and the minumum value ever possible in c++
    
 

    DRY RUN  > WE WILL CHECK EACH VALUE OF THE ARAAY AND SEE IF IT'S BIGGER OR SMALLER THAN THE MIN OR MAX VALUE , IT YES THEN WE WILL SWAP THAT VALUE WITH THE ORIGINAL VALUE OF BOTH VARIABLES
    */
//    self code 


    // int arr[] = {2,4,6,8,10,132,9,131,4242};
    // int size = 9;
    // int max= INT_MIN;
    // int min = INT_MAX;
    // // for maximum value
    // for(int i =0;i<size;i++){
    //     if(arr[i] > max){
    //         max = arr[i];
    //     }

    // }
    // // for minimum value
    //  for(int i =0;i<size;i++){
    //     if(arr[i] < min){
    //         min = arr[i];
    //     }

    // }
    // cout<<"Minimum and maximum values are as follows - >"<<min<<" "<<"and"<<" "<<max<<" "<<endl;
    
    







    // EXTREME PRINT IN ARRAY - > two pointer approach
    /*
    we want this array = {1,2,3,4,5,6,7,8}
    to be printed like this - > {1,8,2,7,3,6,4,5}
    */


   // - > my solution - > working fine
//    making this code flexible for any type of array - > my time complexity might be more i donno

//    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
//    int size = (sizeof(arr))/sizeof(int);
//    int start = arr[0];
//    int end = arr[size-1];
//    int mid = size/2;
//    cout<<mid<<endl;
//    for (int i=0;i<=mid;i++){
//     if(start == end){
//         cout<<start;
//         break;
//     }
//     cout<<end<<" ";
//     cout<<start<<" ";
//     start++;
//     end--;
//    }

//    bhaiya ka soltuion
    // int arr[] = {1,2,3,4,5,6,7,8,9};
    // int size =9;

    // int start =0;
    // int end = size - 1;

    // while(true){
    //     if(start>end)
    //     break;

    //     if(start == end){
    //         cout<<arr[start]<<" ";
    //     }
    //     else{
    //         cout<<arr[start]<<" ";
    //         cout<<arr[end]<<" ";
    //     }
    //     start++;
    //     end --;
    // }







    // REVERSE AN ARRAY
    // self code - > working fine - > used a third variable for swapping
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int start = 0;
    int end = size-1;
    // for(int i=0;i<size;i++){
    //     if(start > end){
    //         int k;
    //         k = arr[start];
    //         arr[start] = arr[end];
    //         arr[end] = k;
    //     }
    //     if(start == end){
    //         break;
    //     }
    //     start++;
    //     end -- ;
    // }

    // for(int i=0;i<size;i++){
       
    //     cout<<arr[i]<<" ";    
    // }

    // bhaiya ka solution - > using swap inbult function

    /*
    algorithm - > pehle 2 numbers ko swap krege of the variable start and end then  - >  start ++ -> end --  and when start > end we will stop  

    */

//    using while loop
    

    while(start>=end){
        // step 1
        swap(arr[start],arr[end]);
        // step 2 
        start++;
        //step 3
        end -- ;
    }









    return 0;
}


// homework - > use of memset function and can we apply it to change the values in the array - > how you initiliase aaray using this memset function
// dry run every code 5 times -> find other ways to swap using "+ , -" and XOR