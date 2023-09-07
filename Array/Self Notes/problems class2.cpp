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
    int m,n;
    cout<<"Enter the size of vector 1 and 2"<<endl;
    cin>>n>>m;
    vector <int> arr1(n);
    vector <int> arr2(m);
    // elements
    cout<<"enter elements into array 1"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements into array 2"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    
    int num;
    vector <int> crr;
    for(int i=0;i<n;i++){
        for(int j=0;i<m;j++){
           num = arr1[i] ^ arr2[j]; 
           if(num==0){
            crr.push_back(arr1[i]);
           }
        }
    }
    int size = crr.size();
    cout<<"The intersection is"<<endl;
    for(int i=0;i<size;i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;

    return 0;
}