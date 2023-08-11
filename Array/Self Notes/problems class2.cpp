/*


QUESTIONS


in the given array every elemets occurs twice but ek element esa h jo ek baar aara h, find that element

arr={1,2,4,2,1,3,6,5,5,6,4} - > important interview question, amazon flipkart and microsoft main kayi baar repeat hota h

 - > we will be using XOR operator - > it gives "0" as the output if same elements exists and gives "1" as the output if different elements exist
 EXAMPLE- > 2^2 = 0
 2^2^3 = 1

 if we do

*/





#include <bits/stdc++.h>
using namespace std;
void enter(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
}
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
    int n;
    cout<<"Enter the number of elements to be entered in the array"<<endl;
    cin>>n;
    // vector <int> arr(n);
    // cout<<"enter elements"<<endl;
    // for(int i=0;i<arr.size();i++){
    //     cin>>arr[i];
    // }
    // int element;
    // element = uniquelement(arr);
    // cout<<"The unique element is: "<<element<<endl;
    // cout<<endl;
    // cout<<"The array is"<<endl;
    // print(arr);

    // union of the array
    vector<int> arr1(n);
    vector<int> arr2(n);
    // Entering the values into array 1
    cout<<"Entering the values into array 1"<<endl;
    enter(arr1);
    // entering values into array 2
    cout<<"Entering the values into array 2"<<endl;
    enter(arr2);
    // printing the array 1
    cout<<"printing the array 1"<<endl;
    print(arr1);
    // printing the array 2
    cout<<"printing the array 2"<<endl;
    print(arr2);
    
    return 0;
}