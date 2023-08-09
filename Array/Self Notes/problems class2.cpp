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
void print(vector<int> arr){
    for (int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
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
    vector <int> arr(n);
    cout<<"enter elements"<<endl;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int element;
    element = uniquelement(arr);
    cout<<"The unique element is: "<<element<<endl;
    cout<<endl;
    cout<<"The array is"<<endl;
    print(arr);
    return 0;
}