#include <bits\stdc++.h>
using namespace std;

void func(int arr[]){
    cout<<"inside the solve function and the size of the array is: "<<sizeof(arr)<<endl;

}
int main(){
    int arr[10] = {1,3,4,1};
    cout<<"INSIDE THE MAIN FUNCTION AND THE SIZE OF THE ARRAY IS " << sizeof(arr)<<endl;
    func(arr);
    return 0;
}

/* concept the answer will be different for both the function the function will print the pointer size of the array 

kisi function main agr array ko paas krege toh vo paas by reference hota h -> ek pointer paas hota h*/
