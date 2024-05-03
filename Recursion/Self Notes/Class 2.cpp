/*

STAIR CASE PROBLEM
__statement__ - you have n stars and you are given with two options, you can either climb one start at a time and two stairs at a time, so find the total number of ways to climb the `n` stairs

__intuition__ - mughe bas ek case solve krna h baki recursion sambhal lega

__approach__ - main last wali stair yaani ki `nth` stair pe kaise jaunga?

-> 1step at a time -> n-1 to n
-> 2 step at a time -> so n-2 to b

-> total number of ways to reach nth star  n = (n-1)+(n-2)

### why sum between two values?
kyuki ya toh ham n-1 wali stair se aa skte h `ya` toh n-2 so jab bhi `or` aata h permutation main we do a sum

__BASE CASE__


check constarins ki ko konsi values aa skti h and aapka ans kis hisab se aara h - > give according to chat

*/

// #include <bits/stdc++.h>
// using namespace std;
// int ways(int n){
//     // will write the base case 
//     // mine
//     if(n<3){
//         return n;
//     }
//     // babbar bhaiya
//     // if(n<2){
//     //     return n;
//     // }
//     // recursive call
//     return ways(n-1)+ways(n-2); // now we need to give the values of these basecases, final pe kese pohoche hoge in values se -> this was my intuition
//     // last ke 2 cases solve krte h babbar bhaiya ka tarika
// }
// int main(){
//     int n;
//     cout<<"enter the number of stairs"<<endl;
//     cin>>n;
//     int ans = ways(n);
//     cout << ans;
//     return 0;
// }


/*
printing an array usinf recursion 
let the array be arr = [10,20,30,40,50];
print this using recursion

intuition - main bas ek print krunga and baaki recursion sambhal lega usko krna de dunga

__approach__ = jab array ki length khtm hojaegi toh return krdege
*/
// #include <bits/stdc++.h>
// using namespace std;
// void printArray(int arr[], int length, int i){
//     if(length<1){
//         return;
//     }
//     cout<<arr[i]<<" ";
//     i++;
//     length--;
//     printArray(arr, length, i );
// }
// int main(){
//     int arr[] = {10,20,30,40,50,60};
//     int length = 6;
//     int i = 0;
//     printArray(arr, length, i);
//     return 0;
// }


/*
__Problem Statement__ -> print all the digits in the numbers individually using recursion

__intuition__ -> i will extraxt each value by doing `%10` and reduce the number by one digit by doing `/10` and when the number will become zero i will stop


*/

#include <bits/stdc++.h>
using namespace std;
void printDigit(int n){
    // basecase
    if(n ==0){
        return; // i need to stop when number comes 0
    }
    // ek case m solve krdunga baki recursion sambhal lega

    printDigit(n/10); // isko neeche krunga toh ulta ans aaega

    cout<<n%10<<" ";
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    printDigit(n);
    return 0;
}