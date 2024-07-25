#include <iostream>
#include <vector>
using namespace std;

// agr 1000 elements ka array h toh usko Linear search se usme se koi element nikalne main worst case main __1000__ iterations krni pdegi kyuki time compelexity h O(n) and binary search same task ko 10 ierations main krdegi

// how O(n) -> earch for loop has to run n times for any given condition till n {nested for loop ki time complexity n^2 hogi}


/*
## Binary search

### What is binary search
an optimised searching algorithm with the time complexity of __logn__ n = size of array -> derive

it is better than linear search 

### condition  

elements in the array should be in __monotonic order__ i.e either in increasing or decreasing order

__In short__ the elements of an array should be sorted to apply binary search

### Algorithm
![url]()

### Integer overflow condition
![url]()

isiliye, we will use __s+(e-s)/2__  instead of (s+e)/2 or any other type

kyuki agr dono integer maximum possible value of int ki range ke hue toh pehle addition perform hoga and integer overflow ki situation ban jaegu (check the screenshot)

### Binary search using STL
![url]()


*/

int binarysearch(int arr[],int size,int key){
  int start,end,mid;
  start = 0;
  end = size-1;
  mid = start+(end-start)/2;
  while(start<=end){
    if(arr[mid]==key){
      return mid;
    }
    else if(arr[mid]>key){
      end = mid -1;
    }
    else{
      start = mid+1;
    }
    mid = start+(end-start)/2;
  }
  return -1; //because index 0 se start hoke positive number tak jaata h toh -1 ek valid index nahi maana jaega


}
int main() {
  int arr[5] = {10,20,30,40,50};
  int key = 50;
  int size = 5;
  int val = binarysearch(arr,size,key);

  if(val == -1){
    cout<<"Element not found"<<endl;
  }
  else{
    cout<<"Element found at "<<val<<" index"<<endl;
  }

// BINARY SEARCH USING STL
   // int indexOftarget = binarySearch(arr, size, target);

  // if(indexOftarget == -1) {
  //   cout << "target not found" << endl;
  // }
  // else  {
  //   cout << "target found at " << indexOftarget <<" index " << endl;
  // }

  vector<int> v{1,2,3,4,5,6};
  int arr[] = {1,2,3,4,5,6,7 };
  int size = 7;

  if(binary_search(arr, arr + size, 7)) {
    cout << "Found" << endl;
  }
  else {
    cout << "Not found. " << endl;
  }


  return 0;
}