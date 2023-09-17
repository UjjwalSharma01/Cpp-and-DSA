#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// int occurance(int arr[], int size, int key){
//   int start = 0;
//   int end = size-1;
//   int index = -1;
//   int mid = start+(end-start)/2;
//   while(start<=end){
//     if(arr[mid]==key){
//       index = mid;

//       // left main search kro
//       end = mid-1;
      
//     }
//     else if(arr[mid]<key){
//       start= mid+1;
//     }
//     else{
//       end = mid-1;
//     }
//     mid = start+(end-start)/2;
//   }
//   return index; 

// }
int main() {
// // first occurance of element usinf binary search
// int arr[10]= {10,20,30,30,30,30,40,40,50,60};
// int size =10;
// int key =40;
// // int index = -1;
// int o = occurance(arr,size,key);
// if(o==-1){
//   cout<<"Not found"<<endl;

// }else{
//   cout<<"found at index"<<o<<endl;
// }
// ![url](dry run pic)

// this can also be done by using inbuilt STL function known as lower bound  -> syntax lower_bound(v.begin(), v.end(), target) -> don't forgot to #include<algorithm>

// same can be done for the last occurance using __upper bound__ stl function syntx -> upper_bound(v.begin(), v.end(), target)


// BABBAR BHAIYA KA CODE CHECK KRNA H FOR IMPLEMENTATION PURPOSES
// vector <int> v {1,2,3,4,4,4,4,4,4,4,4,4,4,5,6};
// cout<<"ujjwal sharma"<<endl;
// auto ans2 = (v.begin(), v.end(), target);
// cout<<ans2-v.begin(); // why????
  return 0;
}