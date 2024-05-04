/*
Problem statement - check if the array is arranged in ascending order or not, you need to return true if yes and false if no

intuition - i will use two pointer approach over here, first i will intialise pointer one with arr[0] and pointer 2 with arr[1], then i will keep on updating these values until the size less than array.size()-1, and if for all values pointer 1 < pointer 2 

i will return true, else false

code solution
*/


// #include <bits/stdc++.h>
// using namespace std;
// bool arraySorted(vector<int>arr,int size, int index){
//     // base case 
//     if(index == size-1){
//         return true;
//     }

//     // calculation
//     if(arr[index]>arr[index+1]){
//         return false;
//     }
//     // main ek step nikalunga baki recursion sambhal lega

//     // recursive case
//     return arraySorted(arr, size, index+1);
    
// }
// int main(){
//     int n;
//     cout<<"Enter the size of the array"<<endl;
//     cin>>n;
//     vector<int> arr(n);
//     cout<<"Now input the values into the array"<<endl;
//     for(int i = 0;i<n;i++){
//         cout<<"Enter the value of arr["<<i<<"]"<<endl;
//         cin>>arr[i];
//     }
//     int size = n;

//     // calling the function to check if the array is sorted or not
//     int index = 0;
//     bool ans = arraySorted(arr,size,index);
//     cout<<ans;
//     return 0;
// }


// practice of binary search now
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int size, int target){
    int left = 0;
    int right = size - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }

    return -1;  // Target not found
}
int main(){
    int arr[] = {10,20,30,40,50,60}; // array need to be sorted for binary search
    int size = 6;
    int target = 60;
    binarySearch(arr, size, target);
    return 0;
}