/*


QUESTIONS


in the given array every elemets occurs twice but ek element esa h jo ek baar aara h, find that element

arr={1,2,4,2,1,3,6,5,5,6,4} - > important interview question, amazon flipkart and microsoft main kayi baar repeat hota h

 - > we will be using XOR operator - > it gives "0" as the output if same elements exists and gives "1" as the output if different elements exist
 EXAMPLE- > 2^2 = 0
 2^2^3 = 1

 if we do

how its working?
when have similar items it cancels out similar items and gives 0 as the output but when we do it with dissimilar items like 0^2 it will return 2 as the output
that;s how we can find the unique element
*/





#include <bits/stdc++.h>
using namespace std; 
// void enter(vector<int> arr){
//     for(int i=0;i<n;i++){
//         int k;
//         cin>>k;
//         arr.push_back(k);
//     }
// }
void print(vector<int> arr){
    for(auto i:arr) {
		cout << i << " ";
	}
	cout << endl;
}
int uniquelement(vector<int> arr){
    int ans =0;
    for(int i=0;i<arr.size();i++){
        ans = ans ^ arr[i];

    }
    return ans; 
}
int main(){
    // int n,m;
    // cout<<"Enter the number of elements to be entered in the array"<<endl;
    // cin>>n;
    // vector <int> arr(n);
    // cout<<"enter elements"<<endl;
    // enter(arr);
    // for(int i=0;i<arr.size();i++){
    //     cin>>arr[i];
    // }
    // int element;
    // element = uniquelement(arr);
    // cout<<"The unique element is: "<<element<<endl;
    // cout<<endl;
    // cout<<"The array is"<<endl;
    // print(arr);
    

    // Union of two arrays
    // cout<<"Enter the size of array 1 ans 2 respectively"<<endl;
    // cin>>n>>m;

    // vector <int> arr1(n);
    // vector <int> arr2(m);
    // int k;
    // cout<<"Enter elements of array 1"<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>arr1[i];
    // }
    // cout<<"Enter elements of array 2"<<endl;
    // for(int i=0;i<m;i++){
    //     cin>>arr2[i];
    // }
    // cout<<"The array 1 is"<<endl;
    // print(arr1);
    // cout<<"The array 2 is"<<endl;
    // print(arr2);
    // k=m+n;
    // vector <int> arr3(k);
    // cout<<"The union of array 1 and 2 is"<<endl;
    // for(int i=0; i<k;i++){
    //     if(i<n){
    //         arr3[i] = arr1[i];
    //     }
    //     else{
    //         arr3[i] = arr2[i-n]; // concept used, jahapr pehle wala khtm hoga, vahapr second wala start hoga
    //     }
    // }
    // for(int i=0;i<k;i++){
    //     cout<<arr3[i]<<" ";
    // }
    // cout<<endl;
    


    // Intersection of elements
    // int m,n;
    // cout<<"Enter the size of vector 1 and 2"<<endl;
    // cin>>n>>m;
    // vector <int> arr1(n);
    // vector <int> arr2(m);
    // // elements
    // cout<<"enter elements into array 1"<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>arr1[i];
    // }
    // cout<<"Enter elements into array 2"<<endl;
    // for(int i=0;i<m;i++){
    //     cin>>arr2[i];
    // }
    // cout<<"The array 1 is"<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr1[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"The array 2 is"<<endl;
    // for(int i=0;i<m;i++){
    //     cout<<arr2[i]<<" ";
    // }
    // cout<<endl;
    // vector <int> crr;
    // // intersection
    // for(int i=0;i<arr1.size();i++){
    //     for(int j=0;j<arr2.size();j++){
    //         if(arr1[i]==arr2[j]){
    //             arr[2] = j; // to avoid repetition
    //             crr.push_back(arr1[i]);
    //         }
    //     }
    // }
    // cout<<"The intersection of array 1 and 2 is";
    // for(int i=0;i<crr.size();i++){
    //     cout<<crr[i]<<" ";
    // }
    // cout<<endl;

    // union with no repetition

    // int a,b;
    // cout<<"Enter the size of array 1 and 2"<<endl;
    // cin>>a>>b;
    // vector <int> arr(a);
    // vector <int> brr (b);
    // // enter values
    // cout<<"Enter values in to array 1 and 2 "<<endl;
    // cout<<"enter elements into array 1"<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<"Enter elements into array 2"<<endl;
    // for(int i=0;i<m;i++){
    //     cin>>brr[i];
    // }
    // cout<<"The array 1 is"<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"The array 2 is"<<endl;
    // for(int i=0;i<m;i++){
    //     cout<<brr[i]<<" ";
    // }
    // cout<<endl;
    // int size = arr.size()+brr.size();

    // // union
    // for(int i=0;i<size;i++){
    // }


    // Pair some problem
    // vector <int> arr{10,20,30,40,50,60,70};
    // for(int i=0;i<arr.size();i++){
    //     // pairs
    //     for(int j=i+1;j<arr.size();j++){ // current element ke aage wale element se pair bnana h (check markdown)
    //     // Printing pairs
    //     // cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
    //     // checking sum
    //     if(arr[i]+arr[j]==90){
    //         cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
    //         cout<<"Found"<<endl;
    //     }

    //     }
    // }
    cout<<endl;

    // // Triplet - > sum of 3 elements is equal to the desired value
    // int sum;
    // cout<<"enter the desired sum"<<endl;
    // cin>>sum;
    // vector <int> arr{10,20,30,40,50,60,70,80,90,100};
    // for(int i=0;i<arr.size();i++){
    //     for(int j=i+1;j<arr.size();j++){
    //         for(int k=j+1;k<arr.size();k++){
    //             if(arr[i]+arr[j]+arr[k]==sum){
    //                 cout<<"pair found, and the values are as follows"<<endl;
    //                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
    //             }
    //         }
    //     }
    // }
    // cout<<endl;


// Sort 1s and zeros

// we will be using two pointer approach here
// vector <int> srr{1,0,1,0,0,1,0,1,0,1,1,1,0,1,0,0,0,1};
// int start = srr[0];
// int last = srr[srr.size()-1];
// for(int i =0; i<srr.size();i++){
//     if(srr[i]==0){
//         swap(srr[i], srr[start]);
//         start++;
//     }
//      if(srr[i]==1){
//         swap(srr[i], srr[last]);
//         last--;
//     }
//     if(start>=last){
//         break;
//     }
// }
// for(int i=0;i<srr.size();i++){
//    cout<< srr[i]<<" ";
// }
vector<int> srr{1,0,1,0,0,1,0,1,0,1,1,1,0,1,0,0,0,1};
int start = 0; // Initialize start to 0
int last = srr.size() - 1; // Initialize last to the last index

for(int i=0;i<srr.size();){
    if(srr[i]==0){
        swap(srr[i],srr[start]);
        start++;
        i++;
    }
    if(srr[i]==1){
        swap(srr[i],srr[last]);
        last--;
    }
    if(start>last){
        break;
    }
}

// Printing the partitioned vector
for (int i = 0; i < srr.size(); i++) {
    cout << srr[i] << " ";
}

cout<<endl;
return 0;
}