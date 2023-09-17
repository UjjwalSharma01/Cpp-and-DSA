#include <iostream>
using namespace std;
int occurance(int arr[], int size, int key){
  int start = 0;
  int end = size-1;
  int index = -1;
  int mid = start+(end-start)/2;
  while(start<=end){
    if(arr[mid]==key){
      index = mid;

      // left main search kro
      end = mid-1;
      
    }
    else if(arr[mid]<key){
    // right main search kro
      start= mid+1;
    }
    else{
    // left main search kro
      end = mid-1;
    }
    mid = start+(end-start)/2; // im making mistake here again and again, watchout
  }
  return index; 

}
int main() {
// first occurance of element usinf binary search
int arr[10]= {10,20,30,30,30,30,40,40,50,60};
int size =10;
int key =40;
// int index = -1;
int o = occurance(arr,size,key);
if(o==-1){
  cout<<"Not found"<<endl;

}else{
  cout<<"found at index"<<o<<endl;
}
  return 0;
}